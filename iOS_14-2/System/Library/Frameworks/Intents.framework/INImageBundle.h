/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setBundlePath:(NSString *)arg1 ;
-(unsigned long long)bundleType;
-(id)init;
-(NSString *)bundlePath;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setBundleType:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

