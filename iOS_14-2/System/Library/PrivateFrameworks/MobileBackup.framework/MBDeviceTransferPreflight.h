/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
*/

#import <MobileBackup/MobileBackup-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface MBDeviceTransferPreflight : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _sourceDeviceDataSize;
	unsigned long long _targetDeviceFreeSpaceSize;
	unsigned long long _sourcePurgeableSpaceSize;
	NSString* _activeAppleID;
	NSDictionary* _appleIDs;
	NSString* _uuid;

}

@property (nonatomic,retain) NSString * uuid;                                           //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) unsigned long long sourceDeviceDataSize;                   //@synthesize sourceDeviceDataSize=_sourceDeviceDataSize - In the implementation block
@property (assign,nonatomic) unsigned long long targetDeviceFreeSpaceSize;              //@synthesize targetDeviceFreeSpaceSize=_targetDeviceFreeSpaceSize - In the implementation block
@property (assign,nonatomic) unsigned long long sourcePurgeableSpaceSize;               //@synthesize sourcePurgeableSpaceSize=_sourcePurgeableSpaceSize - In the implementation block
@property (nonatomic,retain) NSString * activeAppleID;                                  //@synthesize activeAppleID=_activeAppleID - In the implementation block
@property (nonatomic,retain) NSDictionary * appleIDs;                                   //@synthesize appleIDs=_appleIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)uuid;
-(id)init;
-(void)setSourceDeviceDataSize:(unsigned long long)arg1 ;
-(void)setTargetDeviceFreeSpaceSize:(unsigned long long)arg1 ;
-(void)setSourcePurgeableSpaceSize:(unsigned long long)arg1 ;
-(unsigned long long)sourceDeviceDataSize;
-(unsigned long long)targetDeviceFreeSpaceSize;
-(unsigned long long)sourcePurgeableSpaceSize;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)appleIDs;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)activeAppleID;
-(void)setActiveAppleID:(NSString *)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAppleIDs:(NSDictionary *)arg1 ;
@end

