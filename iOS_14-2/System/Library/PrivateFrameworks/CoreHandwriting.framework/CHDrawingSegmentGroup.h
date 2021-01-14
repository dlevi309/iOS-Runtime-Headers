/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/


#import <CoreHandwriting/CoreHandwriting-Structs.h>
@class NSArray;

@interface CHDrawingSegmentGroup : NSObject {

	long long _segmentGroupIndex;
	NSArray* _segments;
	NSArray* _delayedSegments;

}

@property (nonatomic,readonly) long long segmentGroupIndex;              //@synthesize segmentGroupIndex=_segmentGroupIndex - In the implementation block
@property (nonatomic,readonly) NSArray * segments;                       //@synthesize segments=_segments - In the implementation block
@property (nonatomic,readonly) NSArray * delayedSegments;                //@synthesize delayedSegments=_delayedSegments - In the implementation block
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) long long totalSegmentCount; 
+(id)segmentGroupsFromSegments:(id)arg1 delayedSegments:(id)arg2 segmentGroupRanges:(id)arg3 ;
-(CGRect)bounds;
-(NSArray *)segments;
-(void)dealloc;
-(NSArray *)delayedSegments;
-(long long)segmentGroupIndex;
-(long long)totalSegmentCount;
-(id)initWithSegmentGroupIndex:(long long)arg1 segments:(id)arg2 delayedSegments:(id)arg3 ;
@end

