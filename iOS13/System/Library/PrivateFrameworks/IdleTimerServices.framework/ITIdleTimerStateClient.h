/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IdleTimerServices.framework/IdleTimerServices
*/

#import <IdleTimerServices/IdleTimerServices-Structs.h>
#import <libobjc.A.dylib/ITIdleTimerClientInterface.h>
#import <libobjc.A.dylib/ITIdleTimerStateRequestHandling.h>

@protocol ITIdleTimerStateRequestDelegate;
@class BSServiceConnection, NSString;

@interface ITIdleTimerStateClient : NSObject <ITIdleTimerClientInterface, ITIdleTimerStateRequestHandling> {

	os_unfair_lock_s _accessLock;
	unsigned long long _serviceAvailability;
	BSServiceConnection* _connection;
	id<ITIdleTimerStateRequestDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)isIdleTimerServiceAvailable;
-(void)_connectionInterrupted;
-(BOOL)handleIdleEvent:(id)arg1 usingConfigurationWithIdentifier:(id)arg2 ;
-(void)_access_addIdleTimerConfiguration:(id)arg1 forReason:(id)arg2 ;
-(void)_access_removeIdleTimerConfiguration:(id)arg1 forReason:(id)arg2 ;
-(void)addIdleTimerConfiguration:(id)arg1 forReason:(id)arg2 ;
-(void)removeIdleTimerConfiguration:(id)arg1 forReason:(id)arg2 ;
@end

