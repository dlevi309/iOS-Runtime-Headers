/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Timeline.framework/Timeline
*/

#import <Timeline/Timeline-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TLTimelineNode : NSObject <NSCopying, NSSecureCoding> {

	TLTimelineNode* _leftNode;
	TLTimelineNode* _rightNode;

}

@property (nonatomic,retain) TLTimelineNode * rightNode;              //@synthesize rightNode=_rightNode - In the implementation block
@property (nonatomic,retain) TLTimelineNode * leftNode;               //@synthesize leftNode=_leftNode - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(TLTimelineNode *)leftNode;
-(TLTimelineNode *)rightNode;
-(void)setLeftNode:(TLTimelineNode *)arg1 ;
-(void)setRightNode:(TLTimelineNode *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 copyLeftNodes:(BOOL)arg2 copyRightNodes:(BOOL)arg3 ;
-(unsigned long long)hashIncludingLeftNodes:(BOOL)arg1 includeRightNodes:(BOOL)arg2 ;
-(BOOL)isEqualToObject:(id)arg1 includingLeftNodes:(BOOL)arg2 includingRightNodes:(BOOL)arg3 ;
@end

