/********* cordova-plugin-streamingkit.m Cordova Plugin Implementation *******/

#import <Cordova/CDV.h>
#import "STKAudioPlayer.h"
@interface CDVStreamingKitPlugin : CDVPlugin <STKAudioPlayerDelegate>
{
@private
	NSTimer* timer;
}
@property (readwrite, retain) STKAudioPlayer* audioPlayer;
@property (readwrite, unsafe_unretained) id<STKAudioPlayerDelegate> delegate;

- (void)play:(CDVInvokedUrlCommand *)command;
- (void)pause:(CDVInvokedUrlCommand *)command;
- (void)resume:(CDVInvokedUrlCommand *)command;
- (void)stop:(CDVInvokedUrlCommand *)command;

@end
