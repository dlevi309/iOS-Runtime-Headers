/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFObject.h>

@protocol HMFLocking;
@class NSMutableArray, HMDDevice, HMFTimer, NSString, NSArray;

@interface HMDRemoteDeviceInformation : HMFObject <HMFObject> {

	id<HMFLocking> _lock;
	NSMutableArray* _confirmationHandlers;
	BOOL _reachable;
	long long _state;
	HMDDevice* _device;
	HMFTimer* _retryTimer;

}

@property (nonatomic,readonly) HMDDevice * device;                                //@synthesize device=_device - In the implementation block
@property (readonly) long long state;                                             //@synthesize state=_state - In the implementation block
@property (getter=isReachable,readonly) BOOL reachable;                           //@synthesize reachable=_reachable - In the implementation block
@property (nonatomic,retain) HMFTimer * retryTimer;                               //@synthesize retryTimer=_retryTimer - In the implementation block
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDevice:(id)arg1 ;
-(BOOL)isReachable;
-(id)init;
-(void)setRetryTimer:(HMFTimer *)arg1 ;
-(HMFTimer *)retryTimer;
-(void)clearState:(long long)arg1 ;
-(HMDDevice *)device;
-(NSArray *)attributeDescriptions;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(void)setReachable:(BOOL)arg1 reason:(unsigned long long)arg2 ;
-(void)queueConfirmationHandler:(/*^block*/id)arg1 timeout:(double)arg2 ;
-(void)completeConfirmationsWithError:(id)arg1 ;
@end

