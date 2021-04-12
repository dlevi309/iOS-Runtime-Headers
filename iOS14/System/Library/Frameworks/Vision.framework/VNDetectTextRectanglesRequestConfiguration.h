/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/VNImageBasedRequestConfiguration.h>

@class NSString;

@interface VNDetectTextRectanglesRequestConfiguration : VNImageBasedRequestConfiguration {

	BOOL _reportCharacterBoxes;
	BOOL _detectDiacritics;
	BOOL _minimizeFalseDetections;
	unsigned long long _algorithm;
	unsigned long long _minimumCharacterPixelHeight;
	NSString* _textRecognition;

}

@property (assign,nonatomic) BOOL reportCharacterBoxes;                                   //@synthesize reportCharacterBoxes=_reportCharacterBoxes - In the implementation block
@property (assign,nonatomic) unsigned long long algorithm;                                //@synthesize algorithm=_algorithm - In the implementation block
@property (assign,nonatomic) unsigned long long minimumCharacterPixelHeight;              //@synthesize minimumCharacterPixelHeight=_minimumCharacterPixelHeight - In the implementation block
@property (assign,nonatomic) BOOL detectDiacritics;                                       //@synthesize detectDiacritics=_detectDiacritics - In the implementation block
@property (assign,nonatomic) BOOL minimizeFalseDetections;                                //@synthesize minimizeFalseDetections=_minimizeFalseDetections - In the implementation block
@property (nonatomic,copy) NSString * textRecognition;                                    //@synthesize textRecognition=_textRecognition - In the implementation block
-(unsigned long long)algorithm;
-(void)setAlgorithm:(unsigned long long)arg1 ;
-(void)setDetectDiacritics:(BOOL)arg1 ;
-(void)setMinimizeFalseDetections:(BOOL)arg1 ;
-(id)initWithRequestClass:(Class)arg1 ;
-(BOOL)reportCharacterBoxes;
-(void)setReportCharacterBoxes:(BOOL)arg1 ;
-(unsigned long long)minimumCharacterPixelHeight;
-(void)setMinimumCharacterPixelHeight:(unsigned long long)arg1 ;
-(BOOL)detectDiacritics;
-(BOOL)minimizeFalseDetections;
-(NSString *)textRecognition;
-(void)setTextRecognition:(NSString *)arg1 ;
@end

