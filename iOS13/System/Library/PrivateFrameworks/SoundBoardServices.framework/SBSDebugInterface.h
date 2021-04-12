/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoundBoardServices.framework/SoundBoardServices
*/


@protocol SBSImplementer;
@class NSXPCConnection;

@interface SBSDebugInterface : NSObject {

	NSXPCConnection* _sbConnection;
	id<SBSImplementer> _sbProxy;

}
-(id)init;
-(void)getAllDebugInfo:(/*^block*/id)arg1 ;
-(void)getTuningInfo:(/*^block*/id)arg1 ;
-(void)setTuningInfoOnBox:(id)arg1 at:(id)arg2 withValue:(float)arg3 ;
-(void)playTone:(unsigned)arg1 ;
-(void)stopTone:(unsigned)arg1 ;
-(void)getUserDefaults:(/*^block*/id)arg1 ;
-(void)setUserDefaults:(id)arg1 withValue:(id)arg2 ;
-(void)resetAllUserDefaults;
-(void)resetUserDefault:(id)arg1 ;
@end

