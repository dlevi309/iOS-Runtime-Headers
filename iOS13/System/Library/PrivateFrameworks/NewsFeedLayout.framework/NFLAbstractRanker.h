/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/


@class NFLFeedSettings, NFLAbstractCellPropertyProvider, NSString;

@interface NFLAbstractRanker : NSObject {

	NFLAbstractRanker* _nextRanker;
	NFLFeedSettings* _feedSettings;
	NFLAbstractCellPropertyProvider* _propertyProvider;

}

@property (nonatomic,readonly) NSString * rankerName; 
@property (nonatomic,readonly) long long rankerWeight; 
@property (nonatomic,retain) NFLAbstractRanker * nextRanker;                                  //@synthesize nextRanker=_nextRanker - In the implementation block
@property (assign,nonatomic,__weak) NFLFeedSettings * feedSettings;                           //@synthesize feedSettings=_feedSettings - In the implementation block
@property (nonatomic,retain) NFLAbstractCellPropertyProvider * propertyProvider;              //@synthesize propertyProvider=_propertyProvider - In the implementation block
-(NFLFeedSettings *)feedSettings;
-(void)setFeedSettings:(NFLFeedSettings *)arg1 ;
-(void)setPropertyProvider:(NFLAbstractCellPropertyProvider *)arg1 ;
-(id)rankedLayoutForLayoutData:(id)arg1 withTileInfo:(id)arg2 ;
-(NFLAbstractCellPropertyProvider *)propertyProvider;
-(id)initWithFeedSettings:(id)arg1 ;
-(double)rankLayoutData:(id)arg1 withTileInfo:(id)arg2 veto:(BOOL*)arg3 ;
-(NSString *)rankerName;
-(long long)rankerWeight;
-(double)_applyRanksForCardWithLayoutData:(id)arg1 tileInfo:(id)arg2 successfulRankCount:(long long*)arg3 veto:(BOOL*)arg4 rankerDictionary:(id)arg5 ;
-(NFLAbstractRanker *)nextRanker;
-(void)setNextRanker:(NFLAbstractRanker *)arg1 ;
@end

