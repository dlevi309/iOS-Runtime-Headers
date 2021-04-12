/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/CNScheduler.h>

@class NSOperationQueue, NSString;

@interface _CNOperationQueueScheduler : NSObject <CNScheduler> {

	NSOperationQueue* _queue;
	BOOL _isQualityOfServiceSpecified;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) double timestamp; 
+(id)operationWithQualityOfService:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(id)init;
-(void)performBlock:(/*^block*/id)arg1 ;
-(double)timestamp;
-(void)performBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 qualityOfService:(unsigned long long)arg3 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 ;
-(id)initWithMaxConcurrentOperationCount:(long long)arg1 ;
-(id)initWithMaxConcurrentOperationCount:(long long)arg1 qualityOfService:(unsigned long long)arg2 ;
-(/*^block*/id)blockWithCurrentQualityOfServiceForBlock:(/*^block*/id)arg1 ifAllowedForRequestedQualityOfService:(unsigned long long)arg2 ;
-(void)_enqueueBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(id)initWithQualityOfService:(unsigned long long)arg1 ;
@end

