/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)legacyKeyAssetWithHighlightTailorContext:(id)arg1;
-(unsigned short)targetEnrichmentState;

@required
-(NSString *)identifier;
-(BOOL)canUseLocationInformationForHighlightTailorContext:(id)arg1;
-(BOOL)canEnrichHighlight:(id)arg1 withOptions:(unsigned long long)arg2;
-(id)highlightTailorContextForHighlight:(id)arg1;
-(double)promotionScoreWithHighlightTailorContext:(id)arg1;
-(unsigned long long)moodWithHighlightTailorContext:(id)arg1;
-(id)titleWithHighlightTailorContext:(id)arg1 curatedAssets:(id)arg2 keyAsset:(id)arg3 createVerboseTitle:(BOOL)arg4;
-(id)momentTitleByMomentUUIDWithHighlightTailorContext:(id)arg1;
-(id)keyAssetWithHighlightTailorContext:(id)arg1 progressBlock:(/*^block*/id)arg2;
-(id)extendedCurationWithHighlightTailorContext:(id)arg1 progressBlock:(/*^block*/id)arg2;
-(id)curationsWithHighlightTailorContext:(id)arg1 progressBlock:(/*^block*/id)arg2;
-(unsigned short)enrichmentStateWithHighlightTailorContext:(id)arg1;
-(id)curationOptionsForForHighlightTailorContext:(id)arg1;
-(id)keyAssetCurationCriteriaWithHighlightTailorContext:(id)arg1;
-(BOOL)collectsDebugInfo;
-(void)setCollectsDebugInfo:(BOOL)arg1;
-(NSDictionary *)debugInfos;
-(PGDejunkerDeduperOptions *)extendedCurationOptions;
-(void)setExtendedCurationOptions:(id)arg1;

@end

