/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <SoundAnalysis/SNVGGBasedDetector.h>
#import <libobjc.A.dylib/SNAnalyzing.h>

@class NSString;

@interface SNSoundDetector : SNVGGBasedDetector <SNAnalyzing>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) shared_ptr<DSPGraph::Graph>Ref graph; 
@property (nonatomic,readonly) BoxRef resultsBox; 
+(id)modelForSoundIdentifier:(id)arg1 ;
-(id)initWithVGGishBasedMLModel:(id)arg1 soundIdentifier:(id)arg2 ;
-(id)initWithSoundIdentifier:(id)arg1 ;
@end

