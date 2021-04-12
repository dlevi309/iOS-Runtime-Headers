/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <libobjc.A.dylib/SNAnalyzerProviding.h>
#import <libobjc.A.dylib/SNRequest.h>

@class SNSoundClassifier, NSString;

@interface SNClassifySoundRequest : NSObject <SNAnalyzerProviding, SNRequest> {

	SNSoundClassifier* _classifier;

}

@property (assign) double overlapFactor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<SNAnalyzing> analyzer; 
-(id)initWithMLModel:(id)arg1 error:(id*)arg2 ;
-(id<SNAnalyzing>)analyzer;
-(double)overlapFactor;
-(void)setOverlapFactor:(double)arg1 ;
@end

