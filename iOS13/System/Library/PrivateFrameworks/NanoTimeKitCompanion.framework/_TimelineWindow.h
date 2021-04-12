/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <libobjc.A.dylib/NTKComplicationTimelineWindow.h>

@class _TimelineEntryNode, _TimelineSegment, NSString;

@interface _TimelineWindow : NSObject <NTKComplicationTimelineWindow> {

	unsigned long long _maxNodes;
	_TimelineEntryNode* _focalNode;
	_TimelineSegment* _leftSegment;
	_TimelineSegment* _rightSegment;

}

@property (nonatomic,readonly) _TimelineEntryNode * focalNode;               //@synthesize focalNode=_focalNode - In the implementation block
@property (nonatomic,readonly) _TimelineSegment * leftSegment;               //@synthesize leftSegment=_leftSegment - In the implementation block
@property (nonatomic,readonly) _TimelineSegment * rightSegment;              //@synthesize rightSegment=_rightSegment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)containsNode:(id)arg1 ;
-(id)initWithFocalNode:(id)arg1 maxNodes:(unsigned long long)arg2 ;
-(id)leftmostNode;
-(id)rightmostNode;
-(void)rebalance;
-(void)updateFocalNodeWithDate:(id)arg1 ;
-(_TimelineEntryNode *)focalNode;
-(id)leftmostContiguousEntryDate;
-(id)rightmostContiguousEntryDate;
-(unsigned long long)leftEntryCount;
-(unsigned long long)rightEntryCount;
-(_TimelineSegment *)leftSegment;
-(_TimelineSegment *)rightSegment;
@end

