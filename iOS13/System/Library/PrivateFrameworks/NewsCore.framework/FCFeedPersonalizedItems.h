/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSArray, NSMapTable;

@interface FCFeedPersonalizedItems : NSObject {

	NSArray* _sortedItems;
	NSMapTable* _scoreProfiles;

}

@property (nonatomic,retain) NSArray * sortedItems;                   //@synthesize sortedItems=_sortedItems - In the implementation block
@property (nonatomic,retain) NSMapTable * scoreProfiles;              //@synthesize scoreProfiles=_scoreProfiles - In the implementation block
-(NSArray *)sortedItems;
-(void)setSortedItems:(NSArray *)arg1 ;
-(NSMapTable *)scoreProfiles;
-(void)setScoreProfiles:(NSMapTable *)arg1 ;
@end

