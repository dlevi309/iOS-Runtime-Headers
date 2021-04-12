/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface INImageBundle : NSObject <NSSecureCoding, NSCopying> {

	NSString* _bundlePath;
	NSString* _bundleIdentifier;
	unsigned long long _bundleType;

}

@property (nonatomic,copy) NSString * bundlePath;                        //@synthesize bundlePath=_bundlePath - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long bundleType;              //@synthesize bundleType=_bundleType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)bundlePath;
-(unsigned long long)bundleType;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setBundlePath:(NSString *)arg1 ;
-(void)setBundleType:(unsigned long long)arg1 ;
@end

