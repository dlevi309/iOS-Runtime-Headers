/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


@interface AXMPhotoVisionSupport : NSObject
+(void)_addNode:(id)arg1 toDescription:(id)arg2 atLevel:(long long)arg3 ;
+(id)leafNodeLabels;
+(id)nonLeafNodeLabels;
+(id)_collectLabelsIncludingLeafNodes:(BOOL)arg1 nonLeafNodes:(BOOL)arg2 ;
+(id)_blacklistedVoiceOverClassificationLabels;
+(BOOL)_validatePhotoVisionSoftLinkSymbols;
+(id)buildTaxonomyDescription;
+(id)buildParentChainDescriptionForAllNodes;
+(id)buildGraphStatisticsDescription;
+(id)processSceneClassifications:(id)arg1 withOptions:(unsigned)arg2 ;
+(id)localizedLabelForClassificationObservation:(id)arg1 ;
@end

