/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
*/

#import <MobileBackup/MobileBackup-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSString;

@interface MBRestoreInfo : NSObject <NSSecureCoding, NSCopying> {

	NSDate* _date;
	BOOL _wasCloudRestore;
	NSString* _deviceBuildVersion;
	NSString* _backupBuildVersion;

}

@property (readonly) NSDate * date;                              //@synthesize date=_date - In the implementation block
@property (readonly) BOOL wasCloudRestore;                       //@synthesize wasCloudRestore=_wasCloudRestore - In the implementation block
@property (readonly) NSString * deviceBuildVersion;              //@synthesize deviceBuildVersion=_deviceBuildVersion - In the implementation block
@property (readonly) NSString * backupBuildVersion;              //@synthesize backupBuildVersion=_backupBuildVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(id)dictionaryRepresentation;
-(void)setDate:(NSDate *)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(void)setWasCloudRestore:(BOOL)arg1 ;
-(void)setDeviceBuildVersion:(NSString *)arg1 ;
-(void)setBackupBuildVersion:(NSString *)arg1 ;
-(BOOL)wasCloudRestore;
-(NSString *)deviceBuildVersion;
-(NSString *)backupBuildVersion;
@end

