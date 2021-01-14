/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
*/

#import <libobjc.A.dylib/BPSSubscriber.h>

@protocol BPSSubscriber;
@class NSString;

@interface _BPSScanInner : NSObject <BPSSubscriber> {

	id<BPSSubscriber> _downstream;
	id _result;
	/*^block*/id _nextPartialResult;

}

@property (nonatomic,retain) id<BPSSubscriber> downstream;              //@synthesize downstream=_downstream - In the implementation block
@property (nonatomic,retain) id result;                                 //@synthesize result=_result - In the implementation block
@property (nonatomic,copy) id nextPartialResult;                        //@synthesize nextPartialResult=_nextPartialResult - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setResult:(id)arg1 ;
-(long long)receiveInput:(id)arg1 ;
-(id)init;
-(void)receiveCompletion:(id)arg1 ;
-(id)nextPartialResult;
-(id<BPSSubscriber>)downstream;
-(void)setNextPartialResult:(id)arg1 ;
-(void)setDownstream:(id<BPSSubscriber>)arg1 ;
-(id)result;
-(void)receiveSubscription:(id)arg1 ;
-(id)initWithDownstream:(id)arg1 nextPartialResult:(/*^block*/id)arg2 initialResult:(id)arg3 ;
@end

