/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_handleApplicationWillEnterForeground:(id)arg1 ;
-(void)_handleApplicationDidEnterBackground:(id)arg1 ;
-(void)_unregisterForAVSystemControllerNotifications;
-(id)init;
-(id)initWithInitialDisabledReasons:(id)arg1 ;
-(void)addDisabledReason:(long long)arg1 ;
-(id)_descriptionStringForReason:(long long)arg1 ;
-(void)_handleCallIsActiveDidChangeNotification:(id)arg1 ;
-(void)_enableCallStatusMonitor;
-(NSObject*<OS_dispatch_queue>)_avscAccessQueue;
-(void)removeDisabledReason:(long long)arg1 ;
-(id)initDisabledForLaunch;
-(NSMutableSet *)_disabledReasons;
-(void)_handleServerConnectionDiedNotification:(id)arg1 ;
-(id)_descriptionForReasons:(id)arg1 ;
-(BOOL)isCallActive;
-(void)setCallActive:(BOOL)arg1 ;
-(void)_registerForAVSystemControllerNotifications;
-(void)_setCallActive:(BOOL)arg1 ;
-(void)dealloc;
-(void)_accessQueue_queryCallActiveStatusForReason:(id)arg1 ;
@end

