/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
*/

#import <libobjc.A.dylib/BPSSubscriber.h>

@class _BPSMerged, NSString;

@interface _BPSMergedSide : NSObject <BPSSubscriber> {

	_BPSMerged* _merger;
	long long _index;

}

@property (nonatomic,retain) _BPSMerged * merger;                   //@synthesize merger=_merger - In the implementation block
@property (assign,nonatomic) long long index;                       //@synthesize index=_index - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)index;
-(long long)receiveInput:(id)arg1 ;
-(void)receiveCompletion:(id)arg1 ;
-(void)setMerger:(_BPSMerged *)arg1 ;
-(void)setIndex:(long long)arg1 ;
-(void)receiveSubscription:(id)arg1 ;
-(_BPSMerged *)merger;
-(id)initWithIndex:(long long)arg1 merger:(id)arg2 ;
@end

