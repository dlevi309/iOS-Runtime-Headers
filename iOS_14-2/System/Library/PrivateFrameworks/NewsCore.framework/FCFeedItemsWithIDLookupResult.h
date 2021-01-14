/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSDictionary, NSArray;

@interface FCFeedItemsWithIDLookupResult : NSObject {

	NSDictionary* _sectionIDsByFeedID;
	NSArray* _feedItems;

}

@property (nonatomic,retain) NSDictionary * sectionIDsByFeedID;              //@synthesize sectionIDsByFeedID=_sectionIDsByFeedID - In the implementation block
@property (nonatomic,retain) NSArray * feedItems;                            //@synthesize feedItems=_feedItems - In the implementation block
-(id)init;
-(void)setFeedItems:(NSArray *)arg1 ;
-(NSArray *)feedItems;
-(id)initWithSectionIDByFeedID:(id)arg1 feedItems:(id)arg2 ;
-(NSDictionary *)sectionIDsByFeedID;
-(void)setSectionIDsByFeedID:(NSDictionary *)arg1 ;
@end

