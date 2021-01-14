/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Timeline.framework/Timeline
*/

#import <Timeline/TLTimelineOperation.h>

@class TLTimeline, NSError;

@interface TLTimelineSetupOperation : TLTimelineOperation {

	double _timeout;
	unsigned long long _entryLimit;
	TLTimeline* _timeline;
	NSError* _setupError;

}

@property (retain) TLTimeline * timeline;                                  //@synthesize timeline=_timeline - In the implementation block
@property (retain) NSError * setupError;                                   //@synthesize setupError=_setupError - In the implementation block
@property (copy) id operationCompletionBlock; 
@property (copy) id timelineOperationCompletionBlock; 
@property (nonatomic,readonly) double timeout;                             //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,readonly) unsigned long long entryLimit;              //@synthesize entryLimit=_entryLimit - In the implementation block
+(unsigned long long)relativePriority;
-(double)timeout;
-(void)setTimeline:(TLTimeline *)arg1 ;
-(id)error;
-(void)main;
-(TLTimeline *)timeline;
-(id)initWithIdentifiable:(id)arg1 timeout:(double)arg2 entryLimit:(unsigned long long)arg3 ;
-(void)setSetupError:(NSError *)arg1 ;
-(NSError *)setupError;
-(id)initWithIdentifiable:(id)arg1 ;
-(unsigned long long)entryLimit;
@end

