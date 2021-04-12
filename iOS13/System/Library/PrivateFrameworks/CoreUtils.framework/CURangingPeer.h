/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSData *)deviceAddress;
-(void)setDeviceAddress:(NSData *)arg1 ;
-(NSData *)deviceIRK;
-(void)setDeviceIRK:(NSData *)arg1 ;
-(NSString *)deviceModel;
-(void)setDeviceModel:(NSString *)arg1 ;
@end

