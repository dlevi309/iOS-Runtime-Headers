/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Timeline.framework/Timeline
*/

#import <Timeline/TLOperation.h>

@protocol TLIdentifiable;
@interface TLTimelineOperation : TLOperation {

	id<TLIdentifiable> _identifiable;

}

@property (nonatomic,readonly) id<TLIdentifiable> identifiable;              //@synthesize identifiable=_identifiable - In the implementation block
@property (copy) id operationCompletionBlock; 
@property (copy) id timelineOperationCompletionBlock; 
-(id)initWithIdentifiable:(id)arg1 ;
-(id<TLIdentifiable>)identifiable;
-(void)setTimelineOperationCompletionBlock:(id)arg1 ;
-(id)timelineOperationCompletionBlock;
@end

