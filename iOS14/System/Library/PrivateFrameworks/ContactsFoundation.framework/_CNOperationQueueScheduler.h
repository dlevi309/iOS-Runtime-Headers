/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/CNScheduler.h>

@class NSOperationQueue, NSString;

@interface _CNOperationQueueScheduler : NSObject <CNScheduler> {

	NSOperationQueue* _queue;
	BOOL _isQualityOfServiceSpecified;

}

@property (readonly) double timestamp; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)operationWithQualityOfService:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 qualityOfService:(unsigned long long)arg3 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 ;
-(id)initWithMaxConcurrentOperationCount:(long long)arg1 qualityOfService:(unsigned long long)arg2 ;
-(id)init;
-(void)performBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(double)timestamp;
-(void)performBlock:(/*^block*/id)arg1 ;
-(NSString *)description;
-(void)_enqueueBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(id)initWithMaxConcurrentOperationCount:(long long)arg1 ;
-(id)initWithQualityOfService:(unsigned long long)arg1 ;
-(/*^block*/id)blockWithCurrentQualityOfServiceForBlock:(/*^block*/id)arg1 ifAllowedForRequestedQualityOfService:(unsigned long long)arg2 ;
@end

