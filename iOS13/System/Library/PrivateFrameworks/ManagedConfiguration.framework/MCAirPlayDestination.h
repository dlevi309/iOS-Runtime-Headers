/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)deviceID;
-(void)setDeviceID:(NSString *)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(NSString *)deviceName;
@end

