/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)rankerWeight;
-(double)rankLayoutData:(id)arg1 withTileInfo:(id)arg2 veto:(BOOL*)arg3 ;
-(NFLAbstractCellPropertyProvider *)propertyProvider;
-(NSString *)rankerName;
-(void)setPropertyProvider:(NFLAbstractCellPropertyProvider *)arg1 ;
-(id)rankedLayoutForLayoutData:(id)arg1 withTileInfo:(id)arg2 ;
-(id)initWithFeedSettings:(id)arg1 ;
-(double)_applyRanksForCardWithLayoutData:(id)arg1 tileInfo:(id)arg2 successfulRankCount:(long long*)arg3 veto:(BOOL*)arg4 rankerDictionary:(id)arg5 ;
-(NFLAbstractRanker *)nextRanker;
-(void)setNextRanker:(NFLAbstractRanker *)arg1 ;
@end

