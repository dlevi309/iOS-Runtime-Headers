/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/

#import <PhotoFoundation/PFMulticaster.h>

@class PFDispatchQueue;

@interface PFAsyncDispatchMulticaster : PFMulticaster {

	PFDispatchQueue* _sendQueue;

}
+(void)initialize;
-(void)suspend;
-(id)init;
-(void)distributeSelector:(SEL)arg1 toReceivers:(id)arg2 distributionBlock:(/*^block*/id)arg3 ;
-(id)_defaultDistributionQueue;
-(void)flushMessagesAndNotify:(/*^block*/id)arg1 ;
-(void)_distributeAsyncDispatchSelector:(SEL)arg1 to:(id)arg2 distributionBlock:(/*^block*/id)arg3 ;
-(void)resume;
@end

