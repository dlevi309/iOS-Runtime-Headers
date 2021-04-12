/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Timeline.framework/Timeline
*/

#import <Timeline/Timeline-Structs.h>
#import <Timeline/TLTimelineNode.h>

@protocol TLTimelineEntry;
@class NSDate;

@interface TLTimelineEntryNode : TLTimelineNode {

	id<TLTimelineEntry> _entry;

}

@property (nonatomic,retain) id<TLTimelineEntry> entry;              //@synthesize entry=_entry - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id<TLTimelineEntry>)entry;
-(void)setEntry:(id<TLTimelineEntry>)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)leftEntryNode;
-(id)rightEntryNode;
@end

