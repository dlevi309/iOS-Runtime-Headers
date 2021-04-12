/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/


@class NSString;

@interface MCAirPlayDestination : NSObject {

	NSString* _deviceID;
	NSString* _deviceName;
	NSString* _password;

}

@property (nonatomic,retain) NSString * deviceID;                //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,retain) NSString * deviceName;              //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,retain) NSString * password;                //@synthesize password=_password - In the implementation block
-(void)setDeviceID:(NSString *)arg1 ;
-(NSString *)deviceName;
-(NSString *)deviceID;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
@end

