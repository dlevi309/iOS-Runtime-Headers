/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <libobjc.A.dylib/SNAnalyzerProviding.h>
#import <libobjc.A.dylib/SNRequest.h>

@class SNFeaturePrintExtractor, NSString;

@interface SNCreateFeaturePrintRequest : NSObject <SNAnalyzerProviding, SNRequest> {

	SNFeaturePrintExtractor* _featureExtractor;

}

@property (assign,nonatomic) long long featurePrintType; 
@property (assign,nonatomic) float overlapFactor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<SNAnalyzing> analyzer; 
-(id)init;
-(id<SNAnalyzing>)analyzer;
-(void)setFeaturePrintType:(long long)arg1 ;
-(long long)featurePrintType;
-(float)overlapFactor;
-(void)setOverlapFactor:(float)arg1 ;
@end

