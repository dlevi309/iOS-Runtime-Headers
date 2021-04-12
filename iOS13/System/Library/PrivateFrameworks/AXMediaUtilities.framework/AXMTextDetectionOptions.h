/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class AXMLanguage, NSSet;

@interface AXMTextDetectionOptions : NSObject <NSSecureCoding> {

	BOOL _correctSpelling;
	BOOL _detectDiacritics;
	BOOL _returnSubFeatures;
	BOOL _minimizeFalsePositives;
	BOOL _usesLanguageCorrection;
	unsigned long long _detectionFlavor;
	AXMLanguage* _textDetectionLanguage;
	NSSet* _spellCheckingLanguages;
	double _minimumCharacterHeight;
	unsigned long long _recognitionLevel;
	double _normalizedMinimumTextHeightRatio;

}

@property (assign,nonatomic) unsigned long long detectionFlavor;                   //@synthesize detectionFlavor=_detectionFlavor - In the implementation block
@property (assign,nonatomic) BOOL correctSpelling;                                 //@synthesize correctSpelling=_correctSpelling - In the implementation block
@property (nonatomic,retain) AXMLanguage * textDetectionLanguage;                  //@synthesize textDetectionLanguage=_textDetectionLanguage - In the implementation block
@property (nonatomic,retain) NSSet * spellCheckingLanguages;                       //@synthesize spellCheckingLanguages=_spellCheckingLanguages - In the implementation block
@property (assign,nonatomic) double minimumCharacterHeight;                        //@synthesize minimumCharacterHeight=_minimumCharacterHeight - In the implementation block
@property (assign,nonatomic) BOOL detectDiacritics;                                //@synthesize detectDiacritics=_detectDiacritics - In the implementation block
@property (assign,nonatomic) BOOL returnSubFeatures;                               //@synthesize returnSubFeatures=_returnSubFeatures - In the implementation block
@property (assign,nonatomic) BOOL minimizeFalsePositives;                          //@synthesize minimizeFalsePositives=_minimizeFalsePositives - In the implementation block
@property (assign,nonatomic) unsigned long long recognitionLevel;                  //@synthesize recognitionLevel=_recognitionLevel - In the implementation block
@property (assign,nonatomic) double normalizedMinimumTextHeightRatio;              //@synthesize normalizedMinimumTextHeightRatio=_normalizedMinimumTextHeightRatio - In the implementation block
@property (assign,nonatomic) BOOL usesLanguageCorrection;                          //@synthesize usesLanguageCorrection=_usesLanguageCorrection - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultRecognizeTextOptions;
+(id)defaultDetectTextRectanglesOptions;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setMinimumCharacterHeight:(double)arg1 ;
-(void)setDetectDiacritics:(BOOL)arg1 ;
-(void)setReturnSubFeatures:(BOOL)arg1 ;
-(BOOL)detectDiacritics;
-(unsigned long long)recognitionLevel;
-(void)setRecognitionLevel:(unsigned long long)arg1 ;
-(BOOL)usesLanguageCorrection;
-(void)setUsesLanguageCorrection:(BOOL)arg1 ;
-(AXMLanguage *)textDetectionLanguage;
-(unsigned long long)detectionFlavor;
-(BOOL)returnSubFeatures;
-(BOOL)minimizeFalsePositives;
-(double)minimumCharacterHeight;
-(id)initWithDetectionFlavor:(unsigned long long)arg1 ;
-(void)setMinimizeFalsePositives:(BOOL)arg1 ;
-(void)setNormalizedMinimumTextHeightRatio:(double)arg1 ;
-(void)setCorrectSpelling:(BOOL)arg1 ;
-(void)setSpellCheckingLanguages:(NSSet *)arg1 ;
-(void)setTextDetectionLanguage:(AXMLanguage *)arg1 ;
-(double)normalizedMinimumTextHeightRatio;
-(BOOL)correctSpelling;
-(NSSet *)spellCheckingLanguages;
-(void)setDetectionFlavor:(unsigned long long)arg1 ;
@end

