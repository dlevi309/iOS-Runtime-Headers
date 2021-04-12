/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject;

@interface CAMCallStatusMonitor : NSObject {

	BOOL _callActive;
	NSMutableSet* __disabledReasons;
	NSObject*<OS_dispatch_queue> __avscAccessQueue;

}

@property (nonatomic,readonly) NSMutableSet * _disabledReasons;                            //@synthesize _disabledReasons=__disabledReasons - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _avscAccessQueue;              //@synthesize _avscAccessQueue=__avscAccessQueue - In the implementation block
@property (assign,getter=isCallActive,nonatomic) BOOL callActive;                          //@synthesize callActive=_callActive - In the implementation block
-(id)init;
-(void)dealloc;
-(void)_handleApplicationWillEnterForeground:(id)arg1 ;
-(void)_handleApplicationDidEnterBackground:(id)arg1 ;
-(NSMutableSet *)_disabledReasons;
-(void)setCallActive:(BOOL)arg1 ;
-(BOOL)isCallActive;
-(void)removeDisabledReason:(long long)arg1 ;
-(void)_enableCallStatusMonitor;
-(id)initWithInitialDisabledReasons:(id)arg1 ;
-(void)_unregisterForAVSystemControllerNotifications;
-(void)_handleCallIsActiveDidChangeNotification:(id)arg1 ;
-(void)_handleServerConnectionDiedNotification:(id)arg1 ;
-(void)_registerForAVSystemControllerNotifications;
-(NSObject*<OS_dispatch_queue>)_avscAccessQueue;
-(void)_accessQueue_queryCallActiveStatusForReason:(id)arg1 ;
-(id)_descriptionStringForReason:(long long)arg1 ;
-(id)_descriptionForReasons:(id)arg1 ;
-(void)_setCallActive:(BOOL)arg1 ;
-(void)addDisabledReason:(long long)arg1 ;
-(id)initDisabledForLaunch;
@end

