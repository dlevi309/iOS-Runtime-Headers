/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/VNImageBasedRequest.h>

@class NSString;

@interface VNDetectTextRectanglesRequest : VNImageBasedRequest

@property (assign,nonatomic) unsigned long long algorithm; 
@property (assign,nonatomic) unsigned long long minimumCharacterPixelHeight; 
@property (assign,nonatomic) BOOL detectDiacritics; 
@property (assign,nonatomic) BOOL minimizeFalseDetections; 
@property (nonatomic,copy) NSString * textRecognition; 
@property (assign,nonatomic) BOOL reportCharacterBoxes; 
+(void)initialize;
+(Class)configurationClass;
+(void)recordDefaultOptionsInDictionary:(id)arg1 ;
-(void)setDetectDiacritics:(BOOL)arg1 ;
-(void)setMinimizeFalseDetections:(BOOL)arg1 ;
-(unsigned long long)algorithm;
-(void)setAlgorithm:(unsigned long long)arg1 ;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(BOOL)reportCharacterBoxes;
-(void)setReportCharacterBoxes:(BOOL)arg1 ;
-(unsigned long long)minimumCharacterPixelHeight;
-(void)setMinimumCharacterPixelHeight:(unsigned long long)arg1 ;
-(BOOL)detectDiacritics;
-(BOOL)minimizeFalseDetections;
-(NSString *)textRecognition;
-(void)setTextRecognition:(NSString *)arg1 ;
-(BOOL)_detectCreditCardTextWithRequestPerformingContext:(id)arg1 requestRevision:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)_detectTextWithRequestPerformingContext:(id)arg1 requestRevision:(unsigned long long)arg2 error:(id*)arg3 ;
@end

