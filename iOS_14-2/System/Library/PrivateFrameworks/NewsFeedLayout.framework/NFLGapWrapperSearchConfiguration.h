/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/

#import <NewsFeedLayout/NewsFeedLayout-Structs.h>
#import <libobjc.A.dylib/NFLFeedLayoutSearchConfiguration.h>

@protocol NFLFeedLayoutSearchConfiguration;
@class NSArray, NSString;

@interface NFLGapWrapperSearchConfiguration : NSObject <NFLFeedLayoutSearchConfiguration> {

	id<NFLFeedLayoutSearchConfiguration> _headlineSearchConfiguration;

}

@property (nonatomic,retain) id<NFLFeedLayoutSearchConfiguration> headlineSearchConfiguration;              //@synthesize headlineSearchConfiguration=_headlineSearchConfiguration - In the implementation block
@property (assign,getter=isShowingAccessoryText,nonatomic) BOOL showAccessoryText; 
@property (nonatomic,readonly) unsigned long long preferredTileInfoBatchSize; 
@property (nonatomic,readonly) NSArray * allRowTypes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)gapWrapperSearchConfigurationWithHeadlineSearchConfiguration:(id)arg1 ;
-(void)setShowAccessoryText:(BOOL)arg1 ;
-(Class)subBatchLayoutTilingOperationClassForRowType:(unsigned long long)arg1 ;
-(BOOL)isShowingAccessoryText;
-(SCD_Struct_NF7)subBatchLayoutSeedForRowType:(unsigned long long)arg1 withTileInfos:(id)arg2 ;
-(id)initWithHeadlineSearchConfiguration:(id)arg1 ;
-(id<NFLFeedLayoutSearchConfiguration>)headlineSearchConfiguration;
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
-(void)setHeadlineSearchConfiguration:(id<NFLFeedLayoutSearchConfiguration>)arg1 ;
-(double)transitionRankFromRowType:(unsigned long long)arg1 toRowType:(unsigned long long)arg2 ;
-(id)preferredOrderingOfTileInfos:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

