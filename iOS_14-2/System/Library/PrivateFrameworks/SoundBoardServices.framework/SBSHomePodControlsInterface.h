/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoundBoardServices.framework/SoundBoardServices
*/


@protocol SBSHomePodControlsImplementer;
@class NSXPCConnection;

@interface SBSHomePodControlsInterface : NSObject {

	NSXPCConnection* _sbConnection;
	id<SBSHomePodControlsImplementer> _sbProxy;

}
-(id)init;
-(id)initWithTarget:(id)arg1 ;
-(void)getAllSyncedAlarmsAndTimers:(/*^block*/id)arg1 ;
-(BOOL)isMediaAlarm:(id)arg1 ;
@end

