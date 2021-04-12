/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface ILClassificationReportRequest : NSObject <NSSecureCoding> {

	NSString* _extensionIdentifier;
	NSDictionary* _jsonDictionary;

}

@property (nonatomic,copy,readonly) NSString * extensionIdentifier;              //@synthesize extensionIdentifier=_extensionIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * jsonDictionary;                        //@synthesize jsonDictionary=_jsonDictionary - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)extensionIdentifier;
-(NSDictionary *)jsonDictionary;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToRequest:(id)arg1 ;
-(void)setJsonDictionary:(NSDictionary *)arg1 ;
-(id)initWithExtensionIdentifier:(id)arg1 jsonDictionary:(id)arg2 ;
@end

