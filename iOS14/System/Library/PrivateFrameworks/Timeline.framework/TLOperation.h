/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Timeline.framework/Timeline
*/

#import <Foundation/NSOperation.h>

@protocol TLTimelineDataSource;
@class NSError;

@interface TLOperation : NSOperation {

	id<TLTimelineDataSource> _dataSource;
	/*^block*/id _operationCompletionBlock;
	NSError* _error;

}

@property (retain) id<TLTimelineDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (copy) id completionBlock; 
@property (copy) id operationCompletionBlock;                        //@synthesize operationCompletionBlock=_operationCompletionBlock - In the implementation block
@property (readonly) NSError * error;                                //@synthesize error=_error - In the implementation block
+(unsigned long long)relativePriority;
-(id)init;
-(id<TLTimelineDataSource>)dataSource;
-(NSError *)error;
-(void)setDataSource:(id<TLTimelineDataSource>)arg1 ;
-(void)setOperationCompletionBlock:(id)arg1 ;
-(id)operationCompletionBlock;
@end

