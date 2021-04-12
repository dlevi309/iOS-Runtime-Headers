/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleID;
-(NSString *)bundleVersion;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setBundleVersion:(NSString *)arg1 ;
-(NSString *)shortVersion;
-(void)setShortVersion:(NSString *)arg1 ;
@end

