/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTDeviceIdentifier : NSObject <NSSecureCoding> {

	NSString* _deviceName;
	unsigned long long _deviceType;
	NSString* _EID;
	NSString* _IMEI;

}

@property (nonatomic,retain) NSString * deviceName;                      //@synthesize deviceName=_deviceName - In the implementation block
@property (assign,nonatomic) unsigned long long deviceType;              //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,retain) NSString * EID;                             //@synthesize EID=_EID - In the implementation block
@property (nonatomic,retain) NSString * IMEI;                            //@synthesize IMEI=_IMEI - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)EID;
-(void)setEID:(NSString *)arg1 ;
-(unsigned long long)deviceType;
-(NSString *)deviceName;
-(id)init;
-(id)initWithDeviceType:(unsigned long long)arg1 EID:(id)arg2 IMEI:(id)arg3 ;
-(void)setDeviceType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setIMEI:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)IMEI;
-(void)setDeviceName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

