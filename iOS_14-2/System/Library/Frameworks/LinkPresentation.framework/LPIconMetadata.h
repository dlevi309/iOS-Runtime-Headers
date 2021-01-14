/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString;

@interface LPIconMetadata : NSObject <NSSecureCoding> {

	unsigned _version;
	NSURL* _URL;
	NSString* _accessibilityText;

}

@property (nonatomic,readonly) unsigned version;                      //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSURL * URL;                               //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * accessibilityText;              //@synthesize accessibilityText=_accessibilityText - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)accessibilityText;
-(id)init;
-(void)setAccessibilityText:(NSString *)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)URL;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithURL:(id)arg1 ;
-(unsigned)version;
-(BOOL)isEqual:(id)arg1 ;
@end

