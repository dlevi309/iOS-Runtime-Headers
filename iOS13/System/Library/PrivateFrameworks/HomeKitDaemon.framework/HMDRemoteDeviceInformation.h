/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (getter=isReachable) BOOL reachable;                                    //@synthesize reachable=_reachable - In the implementation block
@property (nonatomic,retain) HMFTimer * retryTimer;                               //@synthesize retryTimer=_retryTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
-(id)init;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(HMDDevice *)device;
-(id)initWithDevice:(id)arg1 ;
-(NSArray *)attributeDescriptions;
-(BOOL)isReachable;
-(void)setReachable:(BOOL)arg1 ;
-(HMFTimer *)retryTimer;
-(void)setRetryTimer:(HMFTimer *)arg1 ;
-(void)clearState:(long long)arg1 ;
-(void)queueConfirmationHandler:(/*^block*/id)arg1 timeout:(double)arg2 ;
-(void)completeConfirmationsWithError:(id)arg1 ;
@end

