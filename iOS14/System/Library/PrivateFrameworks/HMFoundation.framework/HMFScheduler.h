/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NAScheduler.h>

@class NSOperationQueue, NSString;

@interface HMFScheduler : HMFObject <NAScheduler> {

	NSOperationQueue* _operationQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultScheduler;
+(id)mainScheduler;
-(id)performCancelableBlock:(/*^block*/id)arg1 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 ;
-(id)initWithQueue:(id)arg1 ;
-(id)init;
-(id)performWithQualityOfService:(long long)arg1 block:(/*^block*/id)arg2 ;
-(id)performSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3 qualityOfService:(long long)arg4 ;
-(id)performBlock:(/*^block*/id)arg1 ;
-(id)performSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3 ;
-(id)performOperation:(id)arg1 ;
@end

