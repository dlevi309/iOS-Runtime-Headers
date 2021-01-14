/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSDictionary, NSArray;

@interface FCClusteredHeadlines : NSObject {

	NSDictionary* _headlinesByTopicID;
	NSArray* _orphanedHeadlines;
	NSArray* _discardedOrphanedHeadlines;
	NSDictionary* _d_headlinesByNonWhitelistedTopicID;

}

@property (nonatomic,copy) NSDictionary * headlinesByTopicID;                              //@synthesize headlinesByTopicID=_headlinesByTopicID - In the implementation block
@property (nonatomic,copy) NSArray * orphanedHeadlines;                                    //@synthesize orphanedHeadlines=_orphanedHeadlines - In the implementation block
@property (nonatomic,copy) NSArray * discardedOrphanedHeadlines;                           //@synthesize discardedOrphanedHeadlines=_discardedOrphanedHeadlines - In the implementation block
@property (nonatomic,copy) NSDictionary * d_headlinesByNonWhitelistedTopicID;              //@synthesize d_headlinesByNonWhitelistedTopicID=_d_headlinesByNonWhitelistedTopicID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * d_allHeadlines; 
-(id)d_JSONRepresentationWithTagController:(id)arg1 subscriptionList:(id)arg2 ;
-(NSArray *)discardedOrphanedHeadlines;
-(NSDictionary *)headlinesByTopicID;
-(NSDictionary *)d_headlinesByNonWhitelistedTopicID;
-(void)setD_headlinesByNonWhitelistedTopicID:(NSDictionary *)arg1 ;
-(NSArray *)orphanedHeadlines;
-(NSArray *)d_allHeadlines;
-(void)filterClustersToTopicIDs:(id)arg1 ;
-(void)setOrphanedHeadlines:(NSArray *)arg1 ;
-(void)setDiscardedOrphanedHeadlines:(NSArray *)arg1 ;
-(void)setHeadlinesByTopicID:(NSDictionary *)arg1 ;
-(void)d_sanityCheckAgainstInputHeadlines:(id)arg1 ;
@end

