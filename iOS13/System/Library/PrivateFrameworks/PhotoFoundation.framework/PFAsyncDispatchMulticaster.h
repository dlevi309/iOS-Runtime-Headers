/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/

#import <PhotoFoundation/PFMulticaster.h>

@class PFDispatchQueue;

@interface PFAsyncDispatchMulticaster : PFMulticaster {

	PFDispatchQueue* _sendQueue;

}
+(void)initialize;
-(id)init;
-(void)resume;
-(void)suspend;
-(void)distributeSelector:(SEL)arg1 toReceivers:(id)arg2 distributionBlock:(/*^block*/id)arg3 ;
-(id)_defaultDistributionQueue;
-(void)flushMessagesAndNotify:(/*^block*/id)arg1 ;
-(void)_distributeAsyncDispatchSelector:(SEL)arg1 to:(id)arg2 distributionBlock:(/*^block*/id)arg3 ;
@end

