/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface INWellnessMetadataPair : NSObject <NSCopying, NSSecureCoding> {

	NSString* _key;
	NSNumber* _numberValue;
	NSString* _stringValue;

}

@property (nonatomic,copy,readonly) NSString * key;                      //@synthesize key=_key - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * numberValue;              //@synthesize numberValue=_numberValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * stringValue;              //@synthesize stringValue=_stringValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSNumber *)numberValue;
-(id)initWithNumber:(id)arg1 key:(id)arg2 ;
-(id)initWithString:(id)arg1 key:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(NSString *)stringValue;
-(id)description;
-(NSString *)key;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

