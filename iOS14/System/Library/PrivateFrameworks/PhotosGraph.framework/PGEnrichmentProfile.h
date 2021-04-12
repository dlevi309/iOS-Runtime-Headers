/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

@class NSString, NSDictionary, PGDejunkerDeduperOptions;


@protocol PGEnrichmentProfile <NSObject>
@property (nonatomic,readonly) NSString * identifier; 
@property (assign,nonatomic) BOOL collectsDebugInfo; 
@property (readonly) NSDictionary * debugInfos; 
@property (nonatomic,retain) PGDejunkerDeduperOptions * extendedCurationOptions; 
@property (nonatomic,readonly) unsigned short targetEnrichmentState; 
@optional
-(unsigned short)targetEnrichmentState;
-(id)legacyKeyAssetWithHighlightTailorContext:(id)arg1;

@required
-(void)setExtendedCurationOptions:(id)arg1;
-(BOOL)canEnrichHighlight:(id)arg1 withOptions:(unsigned long long)arg2;
-(double)promotionScoreWithHighlightTailorContext:(id)arg1;
-(PGDejunkerDeduperOptions *)extendedCurationOptions;
-(BOOL)canUseLocationInformationForHighlightTailorContext:(id)arg1;
-(id)keyAssetWithHighlightTailorContext:(id)arg1 progressBlock:(/*^block*/id)arg2;
-(id)extendedCurationWithHighlightTailorContext:(id)arg1 progressBlock:(/*^block*/id)arg2;
-(NSDictionary *)debugInfos;
-(void)setCollectsDebugInfo:(BOOL)arg1;
-(unsigned short)enrichmentStateWithHighlightTailorContext:(id)arg1;
-(BOOL)collectsDebugInfo;
-(id)keyAssetCurationCriteriaWithHighlightTailorContext:(id)arg1;
-(unsigned long long)moodWithHighlightTailorContext:(id)arg1 moodGenerationContext:(id)arg2;
-(id)momentTitleByMomentUUIDWithHighlightTailorContext:(id)arg1;
-(id)highlightTailorContextForHighlight:(id)arg1;
-(NSString *)identifier;
-(id)titleWithHighlightTailorContext:(id)arg1 curatedAssets:(id)arg2 keyAsset:(id)arg3 createVerboseTitle:(BOOL)arg4;
-(id)curationsWithHighlightTailorContext:(id)arg1 progressBlock:(/*^block*/id)arg2;
-(id)curationOptionsForForHighlightTailorContext:(id)arg1;

@end

