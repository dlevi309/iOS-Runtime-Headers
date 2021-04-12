/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <SoundAnalysis/SNDetectorHead.h>
#import <libobjc.A.dylib/SNAnalyzing.h>

@class NSString;

@interface SNSoundDetector : SNDetectorHead <SNAnalyzing>

@property (nonatomic,readonly) BoxRef resultsBox; 
@property (nonatomic,readonly) shared_ptr<DSPGraph::Graph>Ref graph; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)detectorConfigurationWithLogMelBasedFeatureExtractor:(id)arg1 detectorHead:(id)arg2 soundIdentifier:(id)arg3 ;
+(id)vggishDetectorConfigurationWithSoundIdentifier:(id)arg1 ;
+(id)soundPrint100kDetectorConfigurationWithSoundIdentifier:(id)arg1 ;
+(id)detectorHeadConfigurationForSoundIdentifier:(id)arg1 analysisPassStrategy:(long long)arg2 ;
-(id)initWithVGGishBasedMLModel:(id)arg1 soundIdentifier:(id)arg2 ;
-(id)initWithSoundIdentifier:(id)arg1 analysisPassStrategy:(long long)arg2 ;
@end

