/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/


@protocol PFBlockControlQueueing <PFBlockControlCommon>
@required
-(BOOL)enqueue;
-(BOOL)dequeue;
-(BOOL)enqueueWithDelay:(unsigned long long)arg1;
-(BOOL)groupNotify:(id)arg1;

@end

