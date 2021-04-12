/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGEnrichmentProfile.h>

@class NSString, NSDictionary, PGDejunkerDeduperOptions, NSMutableDictionary, PGManager, PGCurationOptions, PGKeyAssetCurationOptions;

@interface PGDefaultEnrichmentProfile : NSObject <PGEnrichmentProfile> {

	NSMutableDictionary* _debugInfos;
	BOOL _collectsDebugInfo;
	PGManager* _manager;
	PGDejunkerDeduperOptions* _extendedCurationOptions;

}

@property (nonatomic,readonly) PGManager * manager;                                              //@synthesize manager=_manager - In the implementation block
@property (nonatomic,readonly) PGCurationOptions * curationOptions; 
@property (nonatomic,readonly) PGKeyAssetCurationOptions * keyAssetCurationOptions; 
@property (nonatomic,readonly) NSString * identifier; 
@property (assign,nonatomic) BOOL collectsDebugInfo;                                             //@synthesize collectsDebugInfo=_collectsDebugInfo - In the implementation block
@property (readonly) NSDictionary * debugInfos;                                                  //@synthesize debugInfos=_debugInfos - In the implementation block
@property (nonatomic,retain) PGDejunkerDeduperOptions * extendedCurationOptions;                 //@synthesize extendedCurationOptions=_extendedCurationOptions - In the implementation block
@property (nonatomic,readonly) unsigned short targetEnrichmentState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)durationForSummary;
+(long long)cardinalModeForSummary;
-(id)initWithManager:(id)arg1 ;
-(void)setExtendedCurationOptions:(PGDejunkerDeduperOptions *)arg1 ;
-(BOOL)canEnrichHighlight:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(double)promotionScoreWithHighlightTailorContext:(id)arg1 ;
-(PGDejunkerDeduperOptions *)extendedCurationOptions;
-(BOOL)canUseLocationInformationForHighlightTailorContext:(id)arg1 ;
-(id)keyAssetWithHighlightTailorContext:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)extendedCurationWithHighlightTailorContext:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(NSDictionary *)debugInfos;
-(void)setCollectsDebugInfo:(BOOL)arg1 ;
-(unsigned short)enrichmentStateWithHighlightTailorContext:(id)arg1 ;
-(BOOL)collectsDebugInfo;
-(id)keyAssetCurationCriteriaWithHighlightTailorContext:(id)arg1 ;
-(unsigned long long)moodWithHighlightTailorContext:(id)arg1 moodGenerationContext:(id)arg2 ;
-(PGManager *)manager;
-(id)momentTitleByMomentUUIDWithHighlightTailorContext:(id)arg1 ;
-(PGCurationOptions *)curationOptions;
-(id)highlightTailorContextForHighlight:(id)arg1 ;
-(NSString *)identifier;
-(unsigned short)targetEnrichmentState;
-(id)titleWithHighlightTailorContext:(id)arg1 curatedAssets:(id)arg2 keyAsset:(id)arg3 createVerboseTitle:(BOOL)arg4 ;
-(id)curationsWithHighlightTailorContext:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)curationOptionsForForHighlightTailorContext:(id)arg1 ;
-(id)legacyKeyAssetWithHighlightTailorContext:(id)arg1 ;
-(PGKeyAssetCurationOptions *)keyAssetCurationOptions;
-(id)debugInfoDictionaryByAddingItemInfosToDebugInfo:(id)arg1 ;
-(id)faceInfosWithAsset:(id)arg1 ;
@end

