/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <libobjc.A.dylib/EFScheduler.h>

@class NSOperationQueue, NSString;

@interface EFOperationQueueScheduler : NSObject <EFScheduler> {

	NSOperationQueue* _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)performCancelableBlock:(/*^block*/id)arg1 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 ;
-(void)performSyncBlock:(/*^block*/id)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)performVoucherPreservingBlock:(/*^block*/id)arg1 ;
-(id)performWithObject:(id)arg1 ;
-(void)performSyncBarrierBlock:(/*^block*/id)arg1 ;
-(id)initWithMaxConcurrentOperationCount:(long long)arg1 ;
@end

