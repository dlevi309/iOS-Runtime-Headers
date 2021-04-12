/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INCodableAttributeMetadata.h>

@class INCodableEnumValue;

@interface INCodableEnumAttributeMetadata : INCodableAttributeMetadata {

	INCodableEnumValue* _defaultValue;

}

@property (nonatomic,retain) INCodableEnumValue * defaultValue;              //@synthesize defaultValue=_defaultValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(INCodableEnumValue *)defaultValue;
-(void)setDefaultValue:(INCodableEnumValue *)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
@end

