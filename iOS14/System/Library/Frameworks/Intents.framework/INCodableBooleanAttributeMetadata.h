/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INCodableAttributeMetadata.h>
#import <libobjc.A.dylib/INCodableAttributeDefaultValueProviding.h>

@class NSNumber, NSString;

@interface INCodableBooleanAttributeMetadata : INCodableAttributeMetadata <INCodableAttributeDefaultValueProviding> {

	NSNumber* _defaultValue;
	NSString* _falseDisplayName;
	NSString* _falseDisplayNameID;
	NSString* _trueDisplayName;
	NSString* _trueDisplayNameID;

}

@property (nonatomic,copy) NSNumber * defaultValue;                                    //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,copy) NSString * falseDisplayName;                                //@synthesize falseDisplayName=_falseDisplayName - In the implementation block
@property (nonatomic,copy) NSString * falseDisplayNameID;                              //@synthesize falseDisplayNameID=_falseDisplayNameID - In the implementation block
@property (nonatomic,copy) NSString * trueDisplayName;                                 //@synthesize trueDisplayName=_trueDisplayName - In the implementation block
@property (nonatomic,copy) NSString * trueDisplayNameID;                               //@synthesize trueDisplayNameID=_trueDisplayNameID - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedTrueDisplayName; 
@property (nonatomic,copy,readonly) NSString * localizedFalseDisplayName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(void)setDefaultValue:(NSNumber *)arg1 ;
-(NSString *)localizedTrueDisplayName;
-(id)localizedTrueDisplayNameWithLocalizer:(id)arg1 ;
-(NSString *)localizedFalseDisplayName;
-(id)localizedFalseDisplayNameWithLocalizer:(id)arg1 ;
-(NSString *)falseDisplayName;
-(NSString *)falseDisplayNameID;
-(void)setFalseDisplayName:(NSString *)arg1 ;
-(void)setFalseDisplayNameID:(NSString *)arg1 ;
-(NSString *)trueDisplayName;
-(void)setTrueDisplayName:(NSString *)arg1 ;
-(NSString *)trueDisplayNameID;
-(void)setTrueDisplayNameID:(NSString *)arg1 ;
-(id)__INCodableDescriptionFalseDisplayNameIDKey;
-(id)__INCodableDescriptionFalseDisplayNameKey;
-(id)__INCodableDescriptionTrueDisplayNameIDKey;
-(id)__INCodableDescriptionTrueDisplayNameKey;
-(id)__INIntentResponseCodableDescriptionFalseDisplayNameKey;
-(id)__INTypeCodableDescriptionFalseDisplayNameKey;
-(id)__INTypeCodableDescriptionFalseDisplayNameIDKey;
-(id)__INIntentResponseCodableDescriptionFalseDisplayNameIDKey;
-(id)__INTypeCodableDescriptionTrueDisplayNameKey;
-(id)__INIntentResponseCodableDescriptionTrueDisplayNameKey;
-(id)__INTypeCodableDescriptionTrueDisplayNameIDKey;
-(id)__INIntentResponseCodableDescriptionTrueDisplayNameIDKey;
-(NSNumber *)defaultValue;
-(void)encodeWithCoder:(id)arg1 ;
-(id)__INIntentResponseCodableDescriptionDefaultValueKey;
-(id)initWithCoder:(id)arg1 ;
-(id)defaultValueForIntentDefaultValueProvider;
-(id)__INTypeCodableDescriptionDefaultValueKey;
-(id)__INCodableDescriptionDefaultValueKey;
@end

