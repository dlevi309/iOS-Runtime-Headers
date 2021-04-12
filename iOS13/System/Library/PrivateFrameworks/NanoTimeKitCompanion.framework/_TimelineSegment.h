/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class _TimelineEntryNode;

@interface _TimelineSegment : NSObject {

	_TimelineEntryNode* _leftmostNode;
	_TimelineEntryNode* _rightmostNode;
	unsigned long long _count;

}

@property (nonatomic,readonly) _TimelineEntryNode * leftmostNode;               //@synthesize leftmostNode=_leftmostNode - In the implementation block
@property (nonatomic,readonly) _TimelineEntryNode * rightmostNode;              //@synthesize rightmostNode=_rightmostNode - In the implementation block
@property (nonatomic,readonly) unsigned long long count;                        //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) double duration; 
-(unsigned long long)count;
-(double)duration;
-(BOOL)containsNode:(id)arg1 ;
-(_TimelineEntryNode *)leftmostNode;
-(_TimelineEntryNode *)rightmostNode;
-(id)initWithLeftmostNode:(id)arg1 rightmostNode:(id)arg2 count:(unsigned long long)arg3 ;
-(BOOL)expandToRight;
-(BOOL)contractFromLeft;
-(BOOL)expandToLeft;
-(BOOL)contractFromRight;
-(BOOL)shiftRight;
-(BOOL)shiftLeft;
@end

