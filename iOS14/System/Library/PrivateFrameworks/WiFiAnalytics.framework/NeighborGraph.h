/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
*/


@class NSArray, NSMutableArray;

@interface NeighborGraph : NSObject {

	NSArray* _bssids;
	NSMutableArray* _graph;

}

@property (nonatomic,retain) NSArray * bssids;                    //@synthesize bssids=_bssids - In the implementation block
@property (nonatomic,retain) NSMutableArray * graph;              //@synthesize graph=_graph - In the implementation block
-(NSMutableArray *)graph;
-(NSArray *)bssids;
-(void)setGraph:(NSMutableArray *)arg1 ;
-(BOOL)doesPathExist:(id)arg1 target:(id)arg2 ;
-(id)initWithBssidArray:(id)arg1 ;
-(void)setNeighborsForBssid:(id)arg1 neighbors:(id)arg2 ;
-(unsigned long long)graphDensity;
-(void)setBssids:(NSArray *)arg1 ;
@end

