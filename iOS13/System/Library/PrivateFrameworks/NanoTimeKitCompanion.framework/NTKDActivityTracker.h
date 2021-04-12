/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableSet;

@interface NTKDActivityTracker : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _activityIdentifiers;
	NSObject*<OS_dispatch_source> _adjustCriteriaTimer;
	NSObject*<OS_dispatch_source> _removePostWakeActivityTimer;
	BOOL _xpcActivityRegistered;

}
+(id)sharedInstance;
-(id)init;
-(void)endActivity:(id)arg1 ;
-(void)checkin;
-(void)beginActivity:(id)arg1 ;
-(void)_queue_beginActivity:(id)arg1 ;
-(void)_queue_endActivity:(id)arg1 ;
-(void)_queue_setOrUpdateActivityAndTimer;
@end

