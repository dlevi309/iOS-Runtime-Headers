/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface AXMTextDetectionOptions : NSObject <NSSecureCoding> {

	BOOL _usesLanguageCorrection;
	BOOL _correctSpelling;
	unsigned long long _recognitionLevel;
	double _normalizedMinimumTextHeightRatio;
	NSArray* _textDetectionLocales;

}

@property (assign,nonatomic) unsigned long long recognitionLevel;                  //@synthesize recognitionLevel=_recognitionLevel - In the implementation block
@property (assign,nonatomic) double normalizedMinimumTextHeightRatio;              //@synthesize normalizedMinimumTextHeightRatio=_normalizedMinimumTextHeightRatio - In the implementation block
@property (assign,nonatomic) BOOL usesLanguageCorrection;                          //@synthesize usesLanguageCorrection=_usesLanguageCorrection - In the implementation block
@property (nonatomic,retain) NSArray * textDetectionLocales;                       //@synthesize textDetectionLocales=_textDetectionLocales - In the implementation block
@property (assign,nonatomic) BOOL correctSpelling;                                 //@synthesize correctSpelling=_correctSpelling - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultOptions;
-(void)setNormalizedMinimumTextHeightRatio:(double)arg1 ;
-(void)setCorrectSpelling:(BOOL)arg1 ;
-(void)setTextDetectionLocales:(NSArray *)arg1 ;
-(BOOL)correctSpelling;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)usesLanguageCorrection;
-(void)setUsesLanguageCorrection:(BOOL)arg1 ;
-(double)normalizedMinimumTextHeightRatio;
-(unsigned long long)recognitionLevel;
-(NSArray *)textDetectionLocales;
-(id)description;
-(void)setRecognitionLevel:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
@end

