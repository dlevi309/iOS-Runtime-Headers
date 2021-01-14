/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <libobjc.A.dylib/CLSSignalModel.h>

@class CLSSignalNode, NSString;

@interface CLSAestheticsModel : NSObject <CLSSignalModel> {

	unsigned long long _version;
	unsigned long long _minimumSupportedVersion;
	CLSSignalNode* _overallAestheticScoreNode;
	CLSSignalNode* _wellFramedSubjectScoreNode;
	CLSSignalNode* _wellChosenSubjectScoreNode;
	CLSSignalNode* _tastefullyBlurredScoreNode;
	CLSSignalNode* _sharplyFocusedSubjectScoreNode;
	CLSSignalNode* _wellTimedShotScoreNode;
	CLSSignalNode* _pleasantLightingScoreNode;
	CLSSignalNode* _pleasantReflectionsScoreNode;
	CLSSignalNode* _harmoniousColorScoreNode;
	CLSSignalNode* _livelyColorScoreNode;
	CLSSignalNode* _pleasantSymmetryScoreNode;
	CLSSignalNode* _pleasantPatternScoreNode;
	CLSSignalNode* _immersivenessScoreNode;
	CLSSignalNode* _pleasantPerspectiveScoreNode;
	CLSSignalNode* _pleasantPostProcessingScoreNode;
	CLSSignalNode* _noiseScoreNode;
	CLSSignalNode* _failureScoreNode;
	CLSSignalNode* _pleasantCompositionScoreNode;
	CLSSignalNode* _interestingSubjectScoreNode;
	CLSSignalNode* _intrusiveObjectPresenceScoreNode;
	CLSSignalNode* _pleasantCameraTiltScoreNode;
	CLSSignalNode* _lowLightNode;
	double _aestheticScoreThresholdToBeAwesome;
	double _aestheticScoreThresholdToBeAestheticallyPrettyGood;

}

@property (readonly) CLSSignalNode * overallAestheticScoreNode;                              //@synthesize overallAestheticScoreNode=_overallAestheticScoreNode - In the implementation block
@property (readonly) CLSSignalNode * wellFramedSubjectScoreNode;                             //@synthesize wellFramedSubjectScoreNode=_wellFramedSubjectScoreNode - In the implementation block
@property (readonly) CLSSignalNode * wellChosenSubjectScoreNode;                             //@synthesize wellChosenSubjectScoreNode=_wellChosenSubjectScoreNode - In the implementation block
@property (readonly) CLSSignalNode * tastefullyBlurredScoreNode;                             //@synthesize tastefullyBlurredScoreNode=_tastefullyBlurredScoreNode - In the implementation block
@property (readonly) CLSSignalNode * sharplyFocusedSubjectScoreNode;                         //@synthesize sharplyFocusedSubjectScoreNode=_sharplyFocusedSubjectScoreNode - In the implementation block
@property (readonly) CLSSignalNode * wellTimedShotScoreNode;                                 //@synthesize wellTimedShotScoreNode=_wellTimedShotScoreNode - In the implementation block
@property (readonly) CLSSignalNode * pleasantLightingScoreNode;                              //@synthesize pleasantLightingScoreNode=_pleasantLightingScoreNode - In the implementation block
@property (readonly) CLSSignalNode * pleasantReflectionsScoreNode;                           //@synthesize pleasantReflectionsScoreNode=_pleasantReflectionsScoreNode - In the implementation block
@property (readonly) CLSSignalNode * harmoniousColorScoreNode;                               //@synthesize harmoniousColorScoreNode=_harmoniousColorScoreNode - In the implementation block
@property (readonly) CLSSignalNode * livelyColorScoreNode;                                   //@synthesize livelyColorScoreNode=_livelyColorScoreNode - In the implementation block
@property (readonly) CLSSignalNode * pleasantSymmetryScoreNode;                              //@synthesize pleasantSymmetryScoreNode=_pleasantSymmetryScoreNode - In the implementation block
@property (readonly) CLSSignalNode * pleasantPatternScoreNode;                               //@synthesize pleasantPatternScoreNode=_pleasantPatternScoreNode - In the implementation block
@property (readonly) CLSSignalNode * immersivenessScoreNode;                                 //@synthesize immersivenessScoreNode=_immersivenessScoreNode - In the implementation block
@property (readonly) CLSSignalNode * pleasantPerspectiveScoreNode;                           //@synthesize pleasantPerspectiveScoreNode=_pleasantPerspectiveScoreNode - In the implementation block
@property (readonly) CLSSignalNode * pleasantPostProcessingScoreNode;                        //@synthesize pleasantPostProcessingScoreNode=_pleasantPostProcessingScoreNode - In the implementation block
@property (readonly) CLSSignalNode * noiseScoreNode;                                         //@synthesize noiseScoreNode=_noiseScoreNode - In the implementation block
@property (readonly) CLSSignalNode * failureScoreNode;                                       //@synthesize failureScoreNode=_failureScoreNode - In the implementation block
@property (readonly) CLSSignalNode * pleasantCompositionScoreNode;                           //@synthesize pleasantCompositionScoreNode=_pleasantCompositionScoreNode - In the implementation block
@property (readonly) CLSSignalNode * interestingSubjectScoreNode;                            //@synthesize interestingSubjectScoreNode=_interestingSubjectScoreNode - In the implementation block
@property (readonly) CLSSignalNode * intrusiveObjectPresenceScoreNode;                       //@synthesize intrusiveObjectPresenceScoreNode=_intrusiveObjectPresenceScoreNode - In the implementation block
@property (readonly) CLSSignalNode * pleasantCameraTiltScoreNode;                            //@synthesize pleasantCameraTiltScoreNode=_pleasantCameraTiltScoreNode - In the implementation block
@property (readonly) CLSSignalNode * lowLightNode;                                           //@synthesize lowLightNode=_lowLightNode - In the implementation block
@property (readonly) double aestheticScoreThresholdToBeAwesome;                              //@synthesize aestheticScoreThresholdToBeAwesome=_aestheticScoreThresholdToBeAwesome - In the implementation block
@property (readonly) double aestheticScoreThresholdToBeAestheticallyPrettyGood;              //@synthesize aestheticScoreThresholdToBeAestheticallyPrettyGood=_aestheticScoreThresholdToBeAestheticallyPrettyGood - In the implementation block
@property (readonly) unsigned long long version;                                             //@synthesize version=_version - In the implementation block
@property (readonly) unsigned long long minimumSupportedVersion;                             //@synthesize minimumSupportedVersion=_minimumSupportedVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)legacyAestheticScoreThresholdToBeAwesome;
+(id)name;
+(id)modelWithVersion:(unsigned long long)arg1 ;
+(unsigned long long)currentAnalyzerVersion;
+(double)legacyAestheticScoreThresholdToBeAestheticallyPrettyGood;
+(unsigned long long)latestVersion;
+(double)legacyAestheticScoreThresholdToNotBeJunk;
-(void)setupVersion31;
-(CLSSignalNode *)lowLightNode;
-(CLSSignalNode *)pleasantPatternScoreNode;
-(CLSSignalNode *)intrusiveObjectPresenceScoreNode;
-(double)aestheticScoreThresholdToBeAestheticallyPrettyGood;
-(void)setupVersion32;
-(CLSSignalNode *)pleasantCompositionScoreNode;
-(CLSSignalNode *)overallAestheticScoreNode;
-(CLSSignalNode *)wellTimedShotScoreNode;
-(id)initWithVersion:(unsigned long long)arg1 ;
-(double)aestheticScoreThresholdToBeAwesome;
-(CLSSignalNode *)failureScoreNode;
-(CLSSignalNode *)tastefullyBlurredScoreNode;
-(CLSSignalNode *)wellChosenSubjectScoreNode;
-(unsigned long long)minimumSupportedVersion;
-(CLSSignalNode *)pleasantReflectionsScoreNode;
-(CLSSignalNode *)harmoniousColorScoreNode;
-(CLSSignalNode *)noiseScoreNode;
-(CLSSignalNode *)pleasantCameraTiltScoreNode;
-(CLSSignalNode *)pleasantLightingScoreNode;
-(CLSSignalNode *)pleasantSymmetryScoreNode;
-(CLSSignalNode *)pleasantPerspectiveScoreNode;
-(CLSSignalNode *)pleasantPostProcessingScoreNode;
-(CLSSignalNode *)immersivenessScoreNode;
-(CLSSignalNode *)sharplyFocusedSubjectScoreNode;
-(unsigned long long)version;
-(CLSSignalNode *)wellFramedSubjectScoreNode;
-(CLSSignalNode *)livelyColorScoreNode;
-(CLSSignalNode *)interestingSubjectScoreNode;
@end

