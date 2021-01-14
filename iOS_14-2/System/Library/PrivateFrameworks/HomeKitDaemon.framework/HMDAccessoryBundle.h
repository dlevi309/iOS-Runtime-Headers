/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class HMDHAPAccessory, HMFObject;

@interface HMDAccessoryBundle : HMFObject {

	HMDHAPAccessory* accessory;
	HMFObject* context;

}

@property (nonatomic,retain) HMDHAPAccessory * accessory; 
@property (nonatomic,retain) HMFObject * context; 
-(HMDHAPAccessory *)accessory;
-(HMFObject *)context;
-(void)setAccessory:(HMDHAPAccessory *)arg1 ;
-(void)setContext:(HMFObject *)arg1 ;
-(id)initWithAccessory:(id)arg1 context:(id)arg2 ;
@end

