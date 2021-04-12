/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
*/

#import <MobileBackup/MobileBackup-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface MBDeviceTransferPreflight : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _sourceDeviceDataSize;
	unsigned long long _targetDeviceFreeSpaceSize;
	NSString* _activeAppleID;
	NSDictionary* _appleIDs;
	NSString* _uuid;

}

@property (nonatomic,retain) NSString * uuid;                                           //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) unsigned long long sourceDeviceDataSize;                   //@synthesize sourceDeviceDataSize=_sourceDeviceDataSize - In the implementation block
@property (assign,nonatomic) unsigned long long targetDeviceFreeSpaceSize;              //@synthesize targetDeviceFreeSpaceSize=_targetDeviceFreeSpaceSize - In the implementation block
@property (nonatomic,retain) NSString * activeAppleID;                                  //@synthesize activeAppleID=_activeAppleID - In the implementation block
@property (nonatomic,retain) NSDictionary * appleIDs;                                   //@synthesize appleIDs=_appleIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(NSDictionary *)appleIDs;
-(void)setAppleIDs:(NSDictionary *)arg1 ;
-(NSString *)activeAppleID;
-(void)setActiveAppleID:(NSString *)arg1 ;
-(void)setSourceDeviceDataSize:(unsigned long long)arg1 ;
-(void)setTargetDeviceFreeSpaceSize:(unsigned long long)arg1 ;
-(unsigned long long)sourceDeviceDataSize;
-(unsigned long long)targetDeviceFreeSpaceSize;
@end

