/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoundBoardServices.framework/SoundBoardServices
*/


@protocol SBSDebugInfoImplementer;
@class NSXPCConnection;

@interface SBSDebugInterface : NSObject {

	NSXPCConnection* _sbConnection;
	id<SBSDebugInfoImplementer> _sbProxy;

}
-(id)init;
-(id)initWithTarget:(id)arg1 ;
-(void)setFeatureFlags:(id)arg1 ;
-(void)getAllDebugInfo:(/*^block*/id)arg1 ;
-(void)getTuningInfo:(/*^block*/id)arg1 ;
-(void)setTuningInfoOnBox:(id)arg1 at:(id)arg2 withValue:(float)arg3 ;
-(void)playTone:(unsigned)arg1 ;
-(void)stopTone:(unsigned)arg1 ;
-(void)getUserDefaults:(/*^block*/id)arg1 ;
-(void)setUserDefaults:(id)arg1 withValue:(id)arg2 ;
-(void)resetAllUserDefaults;
-(void)resetUserDefault:(id)arg1 ;
-(void)sendLEDCommand:(id)arg1 ;
-(void)triggerWiFiCoreCapture:(id)arg1 ;
-(void)sendButtonCommand:(id)arg1 ;
-(void)injectSWUpdateToHome:(id)arg1 ;
-(void)setBootSpinner:(BOOL)arg1 ;
-(void)getFeatureFlags:(/*^block*/id)arg1 ;
-(void)setLEDContents:(id)arg1 ;
@end

