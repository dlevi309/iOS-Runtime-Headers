/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface MBDeviceLockInfo : NSObject <NSSecureCoding> {

	NSString* _deviceUUID;
	NSString* _deviceName;
	NSString* _ownerDeviceUUID;
	NSString* _ownerDeviceName;
	NSDate* _creationDate;
	NSDate* _expirationDate;

}

@property (nonatomic,retain) NSString * deviceUUID;                   //@synthesize deviceUUID=_deviceUUID - In the implementation block
@property (nonatomic,retain) NSString * deviceName;                   //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,retain) NSString * ownerDeviceUUID;              //@synthesize ownerDeviceUUID=_ownerDeviceUUID - In the implementation block
@property (nonatomic,retain) NSString * ownerDeviceName;              //@synthesize ownerDeviceName=_ownerDeviceName - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                   //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                 //@synthesize expirationDate=_expirationDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)deviceName;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)creationDate;
-(NSDate *)expirationDate;
-(id)initWithCoder:(id)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(NSString *)deviceUUID;
-(NSString *)ownerDeviceUUID;
-(NSString *)ownerDeviceName;
-(void)setDeviceUUID:(NSString *)arg1 ;
-(void)setOwnerDeviceUUID:(NSString *)arg1 ;
-(void)setOwnerDeviceName:(NSString *)arg1 ;
@end

