/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HAPAccessoryReachabilityClient.h>

@protocol HAPAccessoryReachabilityClient <NSObject>
@property (assign,nonatomic,__weak) id<HAPAccessoryReachabilityDelegate> delegate; 
@required
-(void)kick;
-(id<HAPAccessoryReachabilityDelegate>)delegate;
-(void)confirm;
-(void)startWithCompletionHandler:(/*^block*/id)arg1;
-(void)setDelegate:(id)arg1;
-(void)stopWithCompletionHandler:(/*^block*/id)arg1;

@end


@protocol HAPAccessoryReachabilityProfile, HAPAccessoryReachabilityDelegate;
@class HAP2SerializedOperationQueue, HAP2PropertyLock, HAPDeviceID, HMFTimer, NSString;

@interface HAPAccessoryReachabilityClient : HMFObject <HMFLogging, HMFTimerDelegate, HAPAccessoryReachabilityClient> {

	id<HAPAccessoryReachabilityProfile> _profile;
	id<HAPAccessoryReachabilityDelegate> _delegate;
	HAP2SerializedOperationQueue* _operationQueue;
	HAP2PropertyLock* _propertyLock;
	HAPDeviceID* _identifier;
	long long _state;
	HMFTimer* _activityTimer;
	double _confirmInterval;

}

@property (assign,nonatomic) long long state;                                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) double confirmInterval;                                          //@synthesize confirmInterval=_confirmInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HAPAccessoryReachabilityDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)new;
+(id)logCategory;
+(void)initialize;
+(id)shortDescription;
-(void)timerDidFire:(id)arg1 ;
-(void)kick;
-(id)init;
-(id<HAPAccessoryReachabilityDelegate>)delegate;
-(void)confirm;
-(id)shortDescription;
-(void)_poll;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_enterState:(long long)arg1 ;
-(void)setDelegate:(id<HAPAccessoryReachabilityDelegate>)arg1 ;
-(void)stopWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)description;
-(void)_stop;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(void)_timerDidFire:(id)arg1 ;
-(void)_runStateMachine;
-(id)initWithIdentifier:(id)arg1 profile:(id)arg2 operationQueue:(id)arg3 ;
-(double)confirmInterval;
-(void)_initializeMachine;
-(void)_waitForActivity;
@end

