/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
*/


@class NSMutableArray, NSArray;

@interface CUIKSingleDayTimelineLayoutPartition : NSObject {

	NSMutableArray* _stackOfOccurrences;
	double _topBoundaryTime;
	double _initialStartBoundary;
	double _endBoundary;

}

@property (assign,nonatomic) double topBoundaryTime;                       //@synthesize topBoundaryTime=_topBoundaryTime - In the implementation block
@property (assign,nonatomic) double initialStartBoundary;                  //@synthesize initialStartBoundary=_initialStartBoundary - In the implementation block
@property (assign,nonatomic) double endBoundary;                           //@synthesize endBoundary=_endBoundary - In the implementation block
@property (nonatomic,readonly) NSArray * stackedOccurrences; 
@property (nonatomic,readonly) double freeSpaceStartBoundary; 
@property (nonatomic,readonly) double freeSpaceWidth; 
@property (nonatomic,readonly) double totalWidth; 
-(id)init;
-(id)description;
-(double)totalWidth;
-(id)peekOccurrence;
-(void)popOccurrence;
-(void)setTopBoundaryTime:(double)arg1 ;
-(void)setEndBoundary:(double)arg1 ;
-(void)pushOccurrence:(id)arg1 ;
-(void)setInitialStartBoundary:(double)arg1 ;
-(NSArray *)stackedOccurrences;
-(double)topBoundaryTime;
-(double)endBoundary;
-(double)freeSpaceWidth;
-(double)freeSpaceStartBoundary;
-(double)initialStartBoundary;
@end

