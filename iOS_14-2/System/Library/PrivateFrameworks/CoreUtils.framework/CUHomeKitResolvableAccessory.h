/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@class HMAccessory, NSData;

@interface CUHomeKitResolvableAccessory : NSObject {

	HMAccessory* _accessory;
	NSData* _irkData;

}

@property (nonatomic,retain) HMAccessory * accessory;              //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,retain) NSData * irkData;                     //@synthesize irkData=_irkData - In the implementation block
-(HMAccessory *)accessory;
-(void)setIrkData:(NSData *)arg1 ;
-(NSData *)irkData;
-(void)setAccessory:(HMAccessory *)arg1 ;
@end

