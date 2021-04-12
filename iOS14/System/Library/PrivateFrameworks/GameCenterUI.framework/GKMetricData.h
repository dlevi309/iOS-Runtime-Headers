/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/


@class GKGridLayoutMetrics, NSMutableArray, GKSectionMetrics, NSString;

@interface GKMetricData : NSObject {

	GKGridLayoutMetrics* _metrics;
	unsigned long long _currentMaxVisibleItemCount;
	unsigned long long _filteredTotalItemCount;
	NSMutableArray* _headerPinnableAttributes;
	NSMutableArray* _footerPinnableAttributes;

}

@property (nonatomic,readonly) GKSectionMetrics * sectionMetrics; 
@property (nonatomic,retain) GKGridLayoutMetrics * metrics;                              //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,readonly) NSString * layoutKey; 
@property (assign,nonatomic) unsigned long long currentMaxVisibleItemCount;              //@synthesize currentMaxVisibleItemCount=_currentMaxVisibleItemCount - In the implementation block
@property (assign,nonatomic) unsigned long long filteredTotalItemCount;                  //@synthesize filteredTotalItemCount=_filteredTotalItemCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * headerPinnableAttributes;                  //@synthesize headerPinnableAttributes=_headerPinnableAttributes - In the implementation block
@property (nonatomic,retain) NSMutableArray * footerPinnableAttributes;                  //@synthesize footerPinnableAttributes=_footerPinnableAttributes - In the implementation block
-(void)setMetrics:(GKGridLayoutMetrics *)arg1 ;
-(GKGridLayoutMetrics *)metrics;
-(id)init;
-(void)setFilteredTotalItemCount:(unsigned long long)arg1 ;
-(unsigned long long)filteredTotalItemCount;
-(unsigned long long)currentMaxVisibleItemCount;
-(void)setHeaderPinnableAttributes:(NSMutableArray *)arg1 ;
-(void)setFooterPinnableAttributes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)headerPinnableAttributes;
-(NSMutableArray *)footerPinnableAttributes;
-(void)addAttributes:(id)arg1 forLocation:(unsigned long long)arg2 ;
-(id)description;
-(void)setCurrentMaxVisibleItemCount:(unsigned long long)arg1 ;
-(GKSectionMetrics *)sectionMetrics;
-(id)localDescription;
-(id)_gkDescriptionWithChildren:(long long)arg1 ;
-(NSString *)layoutKey;
-(void)dealloc;
@end

