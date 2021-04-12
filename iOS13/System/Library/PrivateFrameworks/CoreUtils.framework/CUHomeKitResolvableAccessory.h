/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setAccessory:(HMAccessory *)arg1 ;
-(NSData *)irkData;
-(void)setIrkData:(NSData *)arg1 ;
@end

