/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class NSMutableArray, NSMutableSet;

@interface _MKSortedDepartureCollection : NSObject {

	NSMutableArray* _sortedDepartures;
	NSMutableSet* _groupedSequences;

}

@property (nonatomic,retain) NSMutableArray * sortedDepartures;              //@synthesize sortedDepartures=_sortedDepartures - In the implementation block
@property (nonatomic,retain) NSMutableSet * groupedSequences;                //@synthesize groupedSequences=_groupedSequences - In the implementation block
-(NSMutableArray *)sortedDepartures;
-(void)setSortedDepartures:(NSMutableArray *)arg1 ;
-(NSMutableSet *)groupedSequences;
-(void)setGroupedSequences:(NSMutableSet *)arg1 ;
@end

