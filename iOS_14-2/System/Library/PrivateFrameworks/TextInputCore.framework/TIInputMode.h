/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSLocale, NSArray, NSDictionary;

@interface TIInputMode : NSObject <NSCopying> {

	NSString* _languageWithRegion;
	NSString* _variant;
	NSLocale* _locale;
	Class _inputManagerClass;
	Class _keyboardFeatureSpecializationClass;
	Class _multilingualInputManagerClass;
	NSString* _normalizedIdentifier;

}

@property (nonatomic,readonly) NSString * normalizedIdentifier;                       //@synthesize normalizedIdentifier=_normalizedIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * languageWithRegion; 
@property (nonatomic,readonly) NSString * variant; 
@property (nonatomic,readonly) NSLocale * locale; 
@property (nonatomic,readonly) Class inputManagerClass; 
@property (nonatomic,readonly) Class keyboardFeatureSpecializationClass; 
@property (nonatomic,readonly) Class multilingualInputManagerClass; 
@property (nonatomic,readonly) BOOL supportsPrediction; 
@property (nonatomic,readonly) BOOL supportsMultilingualKeyboard; 
@property (nonatomic,readonly) BOOL spaceAutocorrectionEnabled; 
@property (nonatomic,readonly) NSString * replacementForDoubleSpace; 
@property (nonatomic,readonly) BOOL doesComposeText; 
@property (nonatomic,readonly) NSArray * allAccentKeyStrings; 
@property (nonatomic,readonly) NSDictionary * layoutTags; 
@property (nonatomic,readonly) NSDictionary * compositionMap; 
@property (nonatomic,readonly) NSDictionary * reverseCompositionMap; 
@property (nonatomic,readonly) NSString * nonstopPunctuationCharacters; 
@property (nonatomic,readonly) NSString * sentencePrefixingCharacters; 
@property (nonatomic,readonly) NSString * sentenceDelimitingCharacters; 
@property (nonatomic,readonly) NSString * sentenceTrailingCharacters; 
+(id)inputModeWithIdentifier:(id)arg1 ;
-(NSString *)replacementForDoubleSpace;
-(NSString *)languageWithRegion;
-(BOOL)spaceAutocorrectionEnabled;
-(NSLocale *)locale;
-(NSString *)sentencePrefixingCharacters;
-(NSString *)variant;
-(NSString *)normalizedIdentifier;
-(NSDictionary *)layoutTags;
-(id)description;
-(Class)keyboardFeatureSpecializationClass;
-(BOOL)supportsPrediction;
-(Class)multilingualInputManagerClass;
-(NSString *)nonstopPunctuationCharacters;
-(NSString *)sentenceTrailingCharacters;
-(BOOL)doesComposeText;
-(NSArray *)allAccentKeyStrings;
-(unsigned long long)hash;
-(NSDictionary *)reverseCompositionMap;
-(Class)inputManagerClass;
-(NSString *)sentenceDelimitingCharacters;
-(BOOL)supportsMultilingualKeyboard;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)compositionMap;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithNormalizedIdentifier:(id)arg1 ;
@end

