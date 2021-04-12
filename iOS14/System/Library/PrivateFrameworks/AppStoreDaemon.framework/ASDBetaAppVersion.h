/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ASDBetaAppVersion : NSObject <NSSecureCoding> {

	NSString* _bundleID;
	NSString* _bundleVersion;
	NSString* _shortVersion;

}

@property (copy) NSString * bundleID;                   //@synthesize bundleID=_bundleID - In the implementation block
@property (copy) NSString * bundleVersion;              //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (copy) NSString * shortVersion;               //@synthesize shortVersion=_shortVersion - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)versionWithBundleID:(id)arg1 bundleVersion:(id)arg2 andShortVersion:(id)arg3 ;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setShortVersion:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)shortVersion;
-(NSString *)bundleVersion;
-(id)description;
-(void)setBundleVersion:(NSString *)arg1 ;
-(NSString *)bundleID;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

