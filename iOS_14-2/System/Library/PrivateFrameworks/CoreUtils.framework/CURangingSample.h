/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@class NSData, NSString;

@interface CURangingSample : NSObject {

	int _channel;
	int _rawRSSI;
	NSData* _deviceAddress;
	NSString* _deviceModel;

}

@property (assign,nonatomic) int channel;                       //@synthesize channel=_channel - In the implementation block
@property (nonatomic,copy) NSData * deviceAddress;              //@synthesize deviceAddress=_deviceAddress - In the implementation block
@property (nonatomic,copy) NSString * deviceModel;              //@synthesize deviceModel=_deviceModel - In the implementation block
@property (assign,nonatomic) int rawRSSI;                       //@synthesize rawRSSI=_rawRSSI - In the implementation block
-(void)setDeviceModel:(NSString *)arg1 ;
-(NSString *)deviceModel;
-(NSData *)deviceAddress;
-(void)setDeviceAddress:(NSData *)arg1 ;
-(void)setRawRSSI:(int)arg1 ;
-(void)setChannel:(int)arg1 ;
-(int)channel;
-(id)description;
-(int)rawRSSI;
@end

