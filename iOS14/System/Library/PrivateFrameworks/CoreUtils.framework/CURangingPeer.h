/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@class NSData, NSString;

@interface CURangingPeer : NSObject {

	NSData* _deviceAddress;
	NSData* _deviceIRK;
	NSString* _deviceModel;

}

@property (nonatomic,copy) NSData * deviceAddress;              //@synthesize deviceAddress=_deviceAddress - In the implementation block
@property (nonatomic,copy) NSData * deviceIRK;                  //@synthesize deviceIRK=_deviceIRK - In the implementation block
@property (nonatomic,copy) NSString * deviceModel;              //@synthesize deviceModel=_deviceModel - In the implementation block
-(void)setDeviceModel:(NSString *)arg1 ;
-(NSString *)deviceModel;
-(NSData *)deviceAddress;
-(void)setDeviceAddress:(NSData *)arg1 ;
-(void)setDeviceIRK:(NSData *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(NSData *)deviceIRK;
-(BOOL)isEqual:(id)arg1 ;
@end

