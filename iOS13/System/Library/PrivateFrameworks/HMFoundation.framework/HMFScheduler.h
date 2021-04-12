/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFObject.h>

@class NSOperationQueue;

@interface HMFScheduler : HMFObject {

	NSOperationQueue* _operationQueue;

}
+(id)defaultScheduler;
+(id)mainScheduler;
-(id)init;
-(id)initWithQueue:(id)arg1 ;
-(id)performBlock:(/*^block*/id)arg1 ;
-(id)performOperation:(id)arg1 ;
-(id)performWithQualityOfService:(long long)arg1 block:(/*^block*/id)arg2 ;
-(id)performSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3 ;
-(id)performSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3 qualityOfService:(long long)arg4 ;
@end

