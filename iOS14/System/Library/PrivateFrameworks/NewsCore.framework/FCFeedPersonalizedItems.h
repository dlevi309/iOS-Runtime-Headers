/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSArray, NSMapTable;

@interface FCFeedPersonalizedItems : NSObject {

	NSArray* _sortedItems;
	NSMapTable* _scoreProfiles;

}

@property (nonatomic,retain) NSArray * sortedItems;                   //@synthesize sortedItems=_sortedItems - In the implementation block
@property (nonatomic,retain) NSMapTable * scoreProfiles;              //@synthesize scoreProfiles=_scoreProfiles - In the implementation block
-(NSMapTable *)scoreProfiles;
-(void)setSortedItems:(NSArray *)arg1 ;
-(NSArray *)sortedItems;
-(void)setScoreProfiles:(NSMapTable *)arg1 ;
@end

