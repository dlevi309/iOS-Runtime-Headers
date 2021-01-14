/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
*/

#import <BiomePubSub/BiomePubSub-Structs.h>
#import <BiomePubSub/BPSPublisher.h>
#import <libobjc.A.dylib/BPSSubject.h>

@class NSMutableArray, BPSCompletion, BPSSubscriberList, NSString;

@interface BPSPassThroughSubject : BPSPublisher <BPSSubject> {

	os_unfair_lock_s _lock;
	BOOL _hasAnyDownstreamDemand;
	BOOL _active;
	NSMutableArray* _upstreamSubscriptions;
	BPSCompletion* _completion;
	BPSSubscriberList* _downstreams;

}

@property (nonatomic,retain) NSMutableArray * upstreamSubscriptions;              //@synthesize upstreamSubscriptions=_upstreamSubscriptions - In the implementation block
@property (assign,nonatomic) BOOL hasAnyDownstreamDemand;                         //@synthesize hasAnyDownstreamDemand=_hasAnyDownstreamDemand - In the implementation block
@property (assign,nonatomic) BOOL active;                                         //@synthesize active=_active - In the implementation block
@property (nonatomic,retain) BPSCompletion * completion;                          //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) BPSSubscriberList * downstreams;                     //@synthesize downstreams=_downstreams - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCompletion:(BPSCompletion *)arg1 ;
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(id)init;
-(BPSCompletion *)completion;
-(void)subscribe:(id)arg1 ;
-(NSMutableArray *)upstreamSubscriptions;
-(void)dealloc;
-(void)acknowledgeDownstreamDemand;
-(void)disassociate:(long long)arg1 ;
-(BOOL)hasAnyDownstreamDemand;
-(void)setHasAnyDownstreamDemand:(BOOL)arg1 ;
-(BPSSubscriberList *)downstreams;
-(void)sendCompletion:(id)arg1 ;
-(void)sendSubscription:(id)arg1 ;
-(void)sendValue:(id)arg1 ;
-(void)setUpstreamSubscriptions:(NSMutableArray *)arg1 ;
-(void)setDownstreams:(BPSSubscriberList *)arg1 ;
@end

