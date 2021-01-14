/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@class NSArray;

@interface VNRecognizeTextRequestConfiguration : VNImageBasedRequestConfiguration {

	BOOL _usesLanguageCorrection;
	float _minimumTextHeight;
	NSArray* _recognitionLanguages;
	NSArray* _customWords;
	long long _recognitionLevel;

}

@property (nonatomic,copy) NSArray * recognitionLanguages;              //@synthesize recognitionLanguages=_recognitionLanguages - In the implementation block
@property (nonatomic,copy) NSArray * customWords;                       //@synthesize customWords=_customWords - In the implementation block
@property (assign,nonatomic) long long recognitionLevel;                //@synthesize recognitionLevel=_recognitionLevel - In the implementation block
@property (assign,nonatomic) BOOL usesLanguageCorrection;               //@synthesize usesLanguageCorrection=_usesLanguageCorrection - In the implementation block
@property (assign,nonatomic) float minimumTextHeight;                   //@synthesize minimumTextHeight=_minimumTextHeight - In the implementation block
-(id)initWithRequestClass:(Class)arg1 ;
-(void)setRecognitionLanguages:(NSArray *)arg1 ;
-(BOOL)usesLanguageCorrection;
-(void)setUsesLanguageCorrection:(BOOL)arg1 ;
-(long long)recognitionLevel;
-(void)setRecognitionLevel:(long long)arg1 ;
-(void)setMinimumTextHeight:(float)arg1 ;
-(NSArray *)recognitionLanguages;
-(NSArray *)customWords;
-(void)setCustomWords:(NSArray *)arg1 ;
-(float)minimumTextHeight;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

