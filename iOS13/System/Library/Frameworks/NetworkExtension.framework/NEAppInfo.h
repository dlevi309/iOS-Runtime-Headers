/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSString, NSData;

@interface NEAppInfo : NSObject <NSSecureCoding, NSCopying> {

	int _pid;
	NSUUID* _uuid;
	NSString* _bundleID;
	NSString* _appVersion;
	NSData* _cdHash;

}

@property (assign,nonatomic) int pid;                          //@synthesize pid=_pid - In the implementation block
@property (nonatomic,copy) NSUUID * uuid;                      //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * appVersion;              //@synthesize appVersion=_appVersion - In the implementation block
@property (nonatomic,copy) NSData * cdHash;                    //@synthesize cdHash=_cdHash - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(NSString *)bundleID;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setPid:(int)arg1 ;
-(int)pid;
-(BOOL)isComplete;
-(NSString *)appVersion;
-(void)setAppVersion:(NSString *)arg1 ;
-(NSData *)cdHash;
-(void)setCdHash:(NSData *)arg1 ;
@end

