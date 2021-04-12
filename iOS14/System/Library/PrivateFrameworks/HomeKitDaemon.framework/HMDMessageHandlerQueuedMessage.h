/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol HMDMessageHandlerQueuedMessageDelegate;
@class HMFMessage, HMFTimer, NSUUID, NSString;

@interface HMDMessageHandlerQueuedMessage : HMFObject <HMFTimerDelegate> {

	id<HMDMessageHandlerQueuedMessageDelegate> _delegate;
	HMFMessage* _message;
	HMFTimer* _timer;

}

@property (readonly) HMFTimer * timer;                                               //@synthesize timer=_timer - In the implementation block
@property (__weak) id<HMDMessageHandlerQueuedMessageDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (copy,readonly) NSUUID * identifier; 
@property (copy,readonly) NSString * name; 
@property (readonly) HMFMessage * message;                                           //@synthesize message=_message - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)timerDidFire:(id)arg1 ;
-(HMFMessage *)message;
-(HMFTimer *)timer;
-(id)privateDescription;
-(id<HMDMessageHandlerQueuedMessageDelegate>)delegate;
-(id)logIdentifier;
-(NSString *)name;
-(void)setDelegate:(id<HMDMessageHandlerQueuedMessageDelegate>)arg1 ;
-(id)initWithMessage:(id)arg1 ;
-(id)attributeDescriptions;
-(NSUUID *)identifier;
-(id)initWithMessage:(id)arg1 timeInterval:(double)arg2 ;
@end

