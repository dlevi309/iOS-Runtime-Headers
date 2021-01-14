/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
*/

#import <libobjc.A.dylib/BPSSubscriber.h>

@protocol BPSSubscriber;
@class NSString;

@interface _BPSMapInner : NSObject <BPSSubscriber> {

	id<BPSSubscriber> _downstream;
	/*^block*/id _transform;

}

@property (nonatomic,retain) id<BPSSubscriber> downstream;              //@synthesize downstream=_downstream - In the implementation block
@property (nonatomic,copy) id transform;                                //@synthesize transform=_transform - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)receiveInput:(id)arg1 ;
-(void)receiveCompletion:(id)arg1 ;
-(id<BPSSubscriber>)downstream;
-(void)setTransform:(id)arg1 ;
-(id)transform;
-(void)setDownstream:(id<BPSSubscriber>)arg1 ;
-(void)receiveSubscription:(id)arg1 ;
-(id)initWithDownstream:(id)arg1 transform:(/*^block*/id)arg2 ;
@end

