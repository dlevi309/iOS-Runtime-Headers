/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IdleTimerServices.framework/IdleTimerServices
*/

#import <IdleTimerServices/IdleTimerServices-Structs.h>
#import <libobjc.A.dylib/ITIdleTimerClientInterface.h>
#import <libobjc.A.dylib/ITIdleTimerStateRequestHandling.h>

@protocol ITIdleTimerStateRequestDelegate;
@class BSServiceConnection, NSString;

@interface ITIdleTimerStateClient : NSObject <ITIdleTimerClientInterface, ITIdleTimerStateRequestHandling> {

	os_unfair_lock_s _accessLock;
	unsigned long long _access_serviceAvailability;
	BSServiceConnection* _connection;
	id<ITIdleTimerStateRequestDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isIdleTimerServiceAvailable;
-(void)addIdleTimerConfiguration:(id)arg1 forReason:(id)arg2 error:(id*)arg3 ;
-(BOOL)handleIdleEvent:(id)arg1 usingConfigurationWithIdentifier:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)removeIdleTimerConfiguration:(id)arg1 forReason:(id)arg2 ;
-(void)_connectionInterrupted;
-(void)_access_addIdleTimerConfiguration:(id)arg1 forReason:(id)arg2 error:(id*)arg3 ;
-(void)_access_removeIdleTimerConfiguration:(id)arg1 forReason:(id)arg2 ;
@end

