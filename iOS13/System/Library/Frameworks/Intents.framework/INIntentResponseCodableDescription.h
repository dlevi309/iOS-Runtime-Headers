/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INRootCodableDescription.h>

@class NSMutableDictionary, NSString, NSArray, INCodableAttribute;

@interface INIntentResponseCodableDescription : INRootCodableDescription {

	NSMutableDictionary* _intentResponseCodableCodes;
	NSString* _outputAttributeName;
	NSString* _attributeKeyPrefix;
	NSString* _attributesKeyPrefix;
	NSArray* _responseCodes;

}

@property (setter=_setOutputAttributeName:,nonatomic,retain) NSString * _outputAttributeName;              //@synthesize outputAttributeName=_outputAttributeName - In the implementation block
@property (nonatomic,copy) NSArray * responseCodes;                                                        //@synthesize responseCodes=_responseCodes - In the implementation block
@property (nonatomic,readonly) INCodableAttribute * outputAttribute; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)attributes;
-(id)keyPrefix;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(id)_attributeKeyPrefix;
-(id)_attributesKeyPrefix;
-(id)_ignoredAttributeTags;
-(NSString *)_outputAttributeName;
-(id)intentResponseCodeWithCode:(long long)arg1 ;
-(INCodableAttribute *)outputAttribute;
-(void)_setOutputAttributeName:(id)arg1 ;
-(NSArray *)responseCodes;
-(void)setResponseCodes:(NSArray *)arg1 ;
@end

