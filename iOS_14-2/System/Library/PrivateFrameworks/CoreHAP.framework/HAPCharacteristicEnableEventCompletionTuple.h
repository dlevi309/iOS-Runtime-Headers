/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface HAPCharacteristicEnableEventCompletionTuple : HMFObject {

	/*^block*/id _handler;
	NSObject*<OS_dispatch_queue> _completionQueue;

}

@property (nonatomic,copy) id handler;                                                  //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> completionQueue;              //@synthesize completionQueue=_completionQueue - In the implementation block
+(id)enableEventCompletionTupleWithHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)setCompletionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(void)setHandler:(id)arg1 ;
-(id)handler;
@end

