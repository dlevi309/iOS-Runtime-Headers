/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/ITIdleTimerStateServiceDelegate.h>
#import <libobjc.A.dylib/SBIdleTimerIdleEventHandler.h>

@protocol BSInvalidatable, SBIdleTimerServiceDelegate;
@class NSMutableArray, NSMutableDictionary, SBIdleTimerAggregateClientConfiguration, NSString;

@interface SBIdleTimerService : NSObject <ITIdleTimerStateServiceDelegate, SBIdleTimerIdleEventHandler> {

	os_unfair_lock_s _accessLock;
	NSMutableArray* _access_idleExpirationHandlers;
	NSMutableArray* _access_idleWarnHandlers;
	NSMutableArray* _access_idleUserAttentionResetHandlers;
	NSMutableDictionary* _disableTimerConfigurations;
	NSMutableDictionary* _minExpirationConfigurations;
	NSMutableDictionary* _maxEpirationConfigurations;
	id<BSInvalidatable> _stateCaptureAssertion;
	id<SBIdleTimerServiceDelegate> _delegate;
	SBIdleTimerAggregateClientConfiguration* _aggregateClientConfiguration;

}

@property (assign,nonatomic,__weak) id<SBIdleTimerServiceDelegate> delegate;                                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SBIdleTimerAggregateClientConfiguration * aggregateClientConfiguration;              //@synthesize aggregateClientConfiguration=_aggregateClientConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)registerServices;
+(id)_sharedIdleTimerStateServiceCreatingIfNeeded:(BOOL)arg1 ;
+(id)_sharedIdleTimerStateServiceIfExists;
-(BOOL)handleIdleTimerDidWarn;
-(void)_addStateCaptureHandlers;
-(void)_aggregateConfigurations;
-(BOOL)handleIdleTimerDidExpire;
-(id<SBIdleTimerServiceDelegate>)delegate;
-(id)_stateCaptureDescription;
-(SBIdleTimerAggregateClientConfiguration *)aggregateClientConfiguration;
-(id)acquireIdleTimerAssertionWithConfiguration:(id)arg1 fromClient:(id)arg2 forReason:(id)arg3 ;
-(void)_removeAssertionsForReason:(id)arg1 ;
-(void)setDelegate:(id<SBIdleTimerServiceDelegate>)arg1 ;
-(void)_removeConfigurationInfoForReason:(id)arg1 fromArray:(id)arg2 ;
-(void)_addConfigurationInfo:(id)arg1 toSortedArray:(id)arg2 ;
-(id)_init;
-(BOOL)handleIdleTimerUserAttentionDidReset;
-(id)_acquireIdleTimerDisableAssertionForReason:(id)arg1 ;
-(void)dealloc;
@end

