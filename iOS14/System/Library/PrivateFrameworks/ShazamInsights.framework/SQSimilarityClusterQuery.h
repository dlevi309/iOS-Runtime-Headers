/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShazamInsights.framework/ShazamInsights
*/

#import <ShazamInsights/SQQuery.h>

@class SQRegion, NSDate;

@interface SQSimilarityClusterQuery : SQQuery {

	SQRegion* _region;
	NSDate* _date;

}

@property (nonatomic,retain) SQRegion * region;              //@synthesize region=_region - In the implementation block
@property (nonatomic,retain) NSDate * date;                  //@synthesize date=_date - In the implementation block
+(id)new;
+(id)queue;
-(SQRegion *)region;
-(void)setRegion:(SQRegion *)arg1 ;
-(id)init;
-(void)setDate:(NSDate *)arg1 ;
-(NSDate *)date;
-(void)clustersFromFilteringShazamIDs:(id)arg1 byTasteShazamIDs:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)clustersFromFilteringProductIDs:(id)arg1 byTasteProductIDs:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)clustersForRegion:(id)arg1 date:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
@end

