/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Timeline.framework/Timeline
*/

#import <Timeline/Timeline-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TLTimelineEntryNode;

@interface TLTimelineSegment : NSObject <NSCopying, NSSecureCoding> {

	TLTimelineEntryNode* _leftmostNode;
	TLTimelineEntryNode* _rightmostNode;
	unsigned long long _count;

}

@property (nonatomic,readonly) TLTimelineEntryNode * leftmostNode;               //@synthesize leftmostNode=_leftmostNode - In the implementation block
@property (nonatomic,readonly) TLTimelineEntryNode * rightmostNode;              //@synthesize rightmostNode=_rightmostNode - In the implementation block
@property (nonatomic,readonly) unsigned long long count;                         //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) double duration; 
+(BOOL)supportsSecureCoding;
-(BOOL)containsNode:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithLeftmostNode:(id)arg1 rightmostNode:(id)arg2 count:(unsigned long long)arg3 ;
-(BOOL)shiftRight;
-(BOOL)shiftLeft;
-(BOOL)expandToRight;
-(BOOL)expandToLeft;
-(BOOL)contractFromRight;
-(BOOL)contractFromLeft;
-(TLTimelineEntryNode *)leftmostNode;
-(TLTimelineEntryNode *)rightmostNode;
@end

