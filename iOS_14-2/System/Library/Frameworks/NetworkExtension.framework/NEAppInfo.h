/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isComplete;
-(void)setAppVersion:(NSString *)arg1 ;
-(NSUUID *)uuid;
-(int)pid;
-(NSString *)appVersion;
-(void)setBundleID:(NSString *)arg1 ;
-(NSData *)cdHash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(void)setCdHash:(NSData *)arg1 ;
-(id)description;
-(NSString *)bundleID;
-(id)initWithCoder:(id)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setPid:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

