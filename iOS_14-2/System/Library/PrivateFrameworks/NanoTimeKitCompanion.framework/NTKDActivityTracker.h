/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)checkin;
-(id)init;
-(void)endActivity:(id)arg1 ;
-(void)_queue_beginActivity:(id)arg1 ;
-(void)_queue_endActivity:(id)arg1 ;
-(void)_queue_setOrUpdateActivityAndTimer;
-(void)beginActivity:(id)arg1 ;
@end

