/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTDeviceIdentifier : NSObject <NSSecureCoding> {

	NSString* _deviceName;
	unsigned long long _deviceType;
	NSString* _EID;

}

@property (nonatomic,retain) NSString * deviceName;                      //@synthesize deviceName=_deviceName - In the implementation block
@property (assign,nonatomic) unsigned long long deviceType;              //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,retain) NSString * EID;                             //@synthesize EID=_EID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)deviceType;
-(void)setDeviceName:(NSString *)arg1 ;
-(NSString *)deviceName;
-(NSString *)EID;
-(void)setEID:(NSString *)arg1 ;
-(id)initWithDeviceType:(unsigned long long)arg1 EID:(id)arg2 ;
-(void)setDeviceType:(unsigned long long)arg1 ;
@end

