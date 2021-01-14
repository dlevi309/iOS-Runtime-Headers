/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

