/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)freeSpaceWidth;
-(double)freeSpaceStartBoundary;
-(double)totalWidth;
-(void)setInitialStartBoundary:(double)arg1 ;
-(void)setEndBoundary:(double)arg1 ;
-(id)description;
-(void)setTopBoundaryTime:(double)arg1 ;
-(double)initialStartBoundary;
-(void)pushOccurrence:(id)arg1 ;
-(void)popOccurrence;
-(id)peekOccurrence;
-(double)topBoundaryTime;
-(double)endBoundary;
-(NSArray *)stackedOccurrences;
@end

