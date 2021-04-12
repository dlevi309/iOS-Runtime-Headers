/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKGridLayoutMetrics.h>

@class NSMutableDictionary, NSArray, GKCollectionViewDataSource, NSString;

@interface GKDataSourceMetrics : GKGridLayoutMetrics {

	NSMutableDictionary* _sectionToMetrics;
	NSArray* _childMetrics;
	GKCollectionViewDataSource* _dataSource;
	NSString* _cachedKey;
	NSRange _globalSectionRange;
	NSRange _localSectionRange;

}

@property (nonatomic,retain) NSString * cachedKey;                                 //@synthesize cachedKey=_cachedKey - In the implementation block
@property (assign,nonatomic) NSRange globalSectionRange;                           //@synthesize globalSectionRange=_globalSectionRange - In the implementation block
@property (assign,nonatomic) NSRange localSectionRange;                            //@synthesize localSectionRange=_localSectionRange - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sectionToMetrics;               //@synthesize sectionToMetrics=_sectionToMetrics - In the implementation block
@property (nonatomic,retain) NSArray * childMetrics;                               //@synthesize childMetrics=_childMetrics - In the implementation block
@property (nonatomic,retain) GKCollectionViewDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
+(id)dataSourceMetricsWithMetrics:(id)arg1 dataSource:(id)arg2 ;
-(void)setLocalSectionRange:(NSRange)arg1 ;
-(id)metricsForSection:(long long)arg1 ;
-(GKCollectionViewDataSource *)dataSource;
-(id)accumulateSections:(id)arg1 layout:(id)arg2 ;
-(NSString *)cachedKey;
-(void)computeGlobalSectionRangesWithBaseIndex:(long long)arg1 ;
-(id)applyDataSourceMetricsToSections:(id)arg1 withParent:(id)arg2 layout:(id)arg3 ;
-(void)generateMetricDataForLayout:(id)arg1 ;
-(void)prepareLayout:(id)arg1 ;
-(void)setCachedKey:(NSString *)arg1 ;
-(void)setChildMetrics:(NSArray *)arg1 ;
-(NSArray *)childMetrics;
-(id)description;
-(void)setDataSource:(GKCollectionViewDataSource *)arg1 ;
-(id)initWithMetrics:(id)arg1 dataSource:(id)arg2 ;
-(NSMutableDictionary *)sectionToMetrics;
-(id)globalLayoutKey;
-(void)setMetrics:(id)arg1 forSection:(long long)arg2 ;
-(id)globalLayoutKeyForSection:(long long)arg1 ;
-(NSRange)localSectionRange;
-(void)setSectionToMetrics:(NSMutableDictionary *)arg1 ;
-(void)setGlobalSectionRange:(NSRange)arg1 ;
-(id)_gkDescriptionWithChildren:(long long)arg1 ;
-(NSRange)globalSectionRange;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

