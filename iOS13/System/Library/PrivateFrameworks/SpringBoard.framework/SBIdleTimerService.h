/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id<SBIdleTimerServiceDelegate>)delegate;
-(void)setDelegate:(id<SBIdleTimerServiceDelegate>)arg1 ;
-(id)_init;
-(BOOL)handleIdleTimerDidWarn;
-(BOOL)handleIdleTimerDidExpire;
-(BOOL)handleIdleTimerUserAttentionDidReset;
-(void)_addStateCaptureHandlers;
-(id)acquireIdleTimerAssertionWithConfiguration:(id)arg1 fromClient:(id)arg2 forReason:(id)arg3 ;
-(SBIdleTimerAggregateClientConfiguration *)aggregateClientConfiguration;
-(void)_addConfigurationInfo:(id)arg1 toSortedArray:(id)arg2 ;
-(void)_removeAssertionsForReason:(id)arg1 ;
-(void)_aggregateConfigurations;
-(void)_removeConfigurationInfoForReason:(id)arg1 fromArray:(id)arg2 ;
-(id)_stateCaptureDescription;
-(id)_acquireIdleTimerDisableAssertionForReason:(id)arg1 ;
@end

