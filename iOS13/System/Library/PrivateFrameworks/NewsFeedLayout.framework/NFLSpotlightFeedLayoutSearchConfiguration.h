/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/

#import <NewsFeedLayout/NewsFeedLayout-Structs.h>
#import <libobjc.A.dylib/NFLFeedLayoutSearchConfiguration.h>

@class NSString, NSArray;

@interface NFLSpotlightFeedLayoutSearchConfiguration : NSObject <NFLFeedLayoutSearchConfiguration> {

	BOOL _showAccessoryText;
	unsigned long long _feedLayoutType;

}

@property (assign,nonatomic) unsigned long long feedLayoutType;                                 //@synthesize feedLayoutType=_feedLayoutType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isShowingAccessoryText,nonatomic) BOOL showAccessoryText;              //@synthesize showAccessoryText=_showAccessoryText - In the implementation block
@property (nonatomic,readonly) unsigned long long preferredTileInfoBatchSize; 
@property (nonatomic,readonly) NSArray * allRowTypes; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setShowAccessoryText:(BOOL)arg1 ;
-(NSArray *)allRowTypes;
-(BOOL)mayRowType:(unsigned long long)arg1 useTileInfos:(id)arg2 withPreferedContentSizeCategory:(id)arg3 ;
-(id)nextRowTypeCandidatesForRowType:(unsigned long long)arg1 ;
-(BOOL)isShowingAccessoryText;
-(id)descriptionForRowType:(unsigned long long)arg1 ;
-(double)transitionRankFromNoneToRowType:(unsigned long long)arg1 ;
-(double)transitionRankFromRowTypeToNone:(unsigned long long)arg1 ;
-(double)transitionRankFromRowType:(unsigned long long)arg1 toRowType:(unsigned long long)arg2 ;
-(unsigned long long)numberOfTileInfosUsedByRowType:(unsigned long long)arg1 ;
-(Class)subBatchLayoutTilingOperationClassForRowType:(unsigned long long)arg1 ;
-(SCD_Struct_NF7)subBatchLayoutSeedForRowType:(unsigned long long)arg1 withTileInfos:(id)arg2 ;
-(Class)rankedLayoutGenerationOperationClassForRequest:(id)arg1 ;
-(unsigned long long)preferredTileInfoBatchSize;
-(BOOL)supportsTileInfoType:(unsigned long long)arg1 ;
-(id)preferredOrderingOfTileInfos:(id)arg1 ;
-(unsigned long long)feedLayoutType;
-(id)initWithSpotlightCardFeedLayoutType:(unsigned long long)arg1 ;
-(void)setFeedLayoutType:(unsigned long long)arg1 ;
@end

