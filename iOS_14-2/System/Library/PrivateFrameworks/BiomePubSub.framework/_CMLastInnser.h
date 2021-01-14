/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
*/

#import <libobjc.A.dylib/BPSSubscriber.h>

@protocol BPSSubscriber;
@class NSString;

@interface _CMLastInnser : NSObject <BPSSubscriber> {

	id<BPSSubscriber> _downstream;
	id _last;

}

@property (nonatomic,retain) id<BPSSubscriber> downstream;              //@synthesize downstream=_downstream - In the implementation block
@property (nonatomic,retain) id last;                                   //@synthesize last=_last - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)receiveInput:(id)arg1 ;
-(void)receiveCompletion:(id)arg1 ;
-(id<BPSSubscriber>)downstream;
-(void)setLast:(id)arg1 ;
-(void)setDownstream:(id<BPSSubscriber>)arg1 ;
-(id)last;
-(void)receiveSubscription:(id)arg1 ;
-(id)initWithDownstream:(id)arg1 ;
@end

