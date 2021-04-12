/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(HMFObject *)context;
-(void)setContext:(HMFObject *)arg1 ;
-(HMDHAPAccessory *)accessory;
-(void)setAccessory:(HMDHAPAccessory *)arg1 ;
-(id)initWithAccessory:(id)arg1 context:(id)arg2 ;
@end

