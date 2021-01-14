/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/

#import <NewsFeedLayout/NewsFeedLayout-Structs.h>
#import <libobjc.A.dylib/NFLFeedLayoutSearchConfiguration.h>

@class NSArray, NSString;

@interface NFLSpotlightFeedLayoutSearchConfiguration : NSObject <NFLFeedLayoutSearchConfiguration> {

	BOOL _showAccessoryText;
	unsigned long long _feedLayoutType;

}

@property (assign,nonatomic) unsigned long long feedLayoutType;                                 //@synthesize feedLayoutType=_feedLayoutType - In the implementation block
@property (assign,getter=isShowingAccessoryText,nonatomic) BOOL showAccessoryText;              //@synthesize showAccessoryText=_showAccessoryText - In the implementation block
@property (nonatomic,readonly) unsigned long long preferredTileInfoBatchSize; 
@property (nonatomic,readonly) NSArray * allRowTypes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setShowAccessoryText:(BOOL)arg1 ;
-(Class)subBatchLayoutTilingOperationClassForRowType:(unsigned long long)arg1 ;
-(BOOL)isShowingAccessoryText;
-(SCD_Struct_NF7)subBatchLayoutSeedForRowType:(unsigned long long)arg1 withTileInfos:(id)arg2 ;
-(BOOL)mayRowType:(unsigned long long)arg1 useTileInfos:(id)arg2 withPreferedContentSizeCategory:(id)arg3 ;
-(Class)rankedLayoutGenerationOperationClassForRequest:(id)arg1 ;
-(id)descriptionForRowType:(unsigned long long)arg1 ;
-(id)nextRowTypeCandidatesForRowType:(unsigned long long)arg1 ;
-(unsigned long long)preferredTileInfoBatchSize;
-(unsigned long long)numberOfTileInfosUsedByRowType:(unsigned long long)arg1 ;
-(double)transitionRankFromNoneToRowType:(unsigned long long)arg1 ;
-(double)transitionRankFromRowTypeToNone:(unsigned long long)arg1 ;
-(BOOL)supportsTileInfoType:(unsigned long long)arg1 ;
-(NSArray *)allRowTypes;
-(double)transitionRankFromRowType:(unsigned long long)arg1 toRowType:(unsigned long long)arg2 ;
-(id)preferredOrderingOfTileInfos:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)feedLayoutType;
-(id)initWithSpotlightCardFeedLayoutType:(unsigned long long)arg1 ;
-(void)setFeedLayoutType:(unsigned long long)arg1 ;
@end

