/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/

#import <AVFAudio/AVAudioRemoteInputPluginDelegate.h>

@protocol AVAudioRemoteInputPlugin;
@class NSMutableArray, AVVoiceController;

@interface AVVCRemoteInputHost : NSObject <AVAudioRemoteInputPluginDelegate> {

	NSMutableArray*<AVAudioRemoteInputPlugin> mPlugins;
	AVVoiceController* mMotherController;

}
-(void)inputPlugin:(id)arg1 didPublishDevice:(id)arg2 ;
-(void)inputPlugin:(id)arg1 didUnpublishDevice:(id)arg2 ;
-(id)initializePlugins;
-(void)invalidatePlugins;
-(id)allBundles:(id*)arg1 ;
-(id)findDeviceWithIdentifier:(id)arg1 ;
-(id)findFirstBluetoothDevice;
-(void)setParentVoiceController:(id)arg1 ;
-(void)dealloc;
@end

