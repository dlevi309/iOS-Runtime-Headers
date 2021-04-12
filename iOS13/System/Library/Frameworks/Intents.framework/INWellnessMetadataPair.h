/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(id)_dictionaryRepresentation;
-(NSNumber *)numberValue;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)initWithNumber:(id)arg1 key:(id)arg2 ;
-(id)initWithString:(id)arg1 key:(id)arg2 ;
@end

