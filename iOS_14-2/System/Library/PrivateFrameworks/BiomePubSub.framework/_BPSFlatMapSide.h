/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
*/

#import <libobjc.A.dylib/BPSSubscriber.h>

@class _BPSFlatMapOuter, NSString;

@interface _BPSFlatMapSide : NSObject <BPSSubscriber> {

	long long _index;
	_BPSFlatMapOuter* _outer;

}

@property (assign,nonatomic) long long index;                       //@synthesize index=_index - In the implementation block
@property (nonatomic,retain) _BPSFlatMapOuter * outer;              //@synthesize outer=_outer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)index;
-(long long)receiveInput:(id)arg1 ;
-(void)receiveCompletion:(id)arg1 ;
-(void)setIndex:(long long)arg1 ;
-(_BPSFlatMapOuter *)outer;
-(void)receiveSubscription:(id)arg1 ;
-(id)initWithIndex:(long long)arg1 outer:(id)arg2 ;
-(void)setOuter:(_BPSFlatMapOuter *)arg1 ;
@end

