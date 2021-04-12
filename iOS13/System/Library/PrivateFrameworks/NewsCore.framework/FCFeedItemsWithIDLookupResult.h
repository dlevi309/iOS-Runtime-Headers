/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

