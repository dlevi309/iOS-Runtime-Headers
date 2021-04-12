/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)extensionIdentifier;
-(NSDictionary *)jsonDictionary;
-(BOOL)isEqualToRequest:(id)arg1 ;
-(id)initWithExtensionIdentifier:(id)arg1 jsonDictionary:(id)arg2 ;
-(void)setJsonDictionary:(NSDictionary *)arg1 ;
@end

