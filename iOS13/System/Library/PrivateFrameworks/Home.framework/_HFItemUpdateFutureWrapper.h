/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class NAFuture, HFItem, HFItemUpdateOutcome;

@interface _HFItemUpdateFutureWrapper : NSObject {

	BOOL _isInternal;
	NAFuture* _future;
	HFItem* _item;
	HFItemUpdateOutcome* _outcome;

}

@property (nonatomic,retain) NAFuture * future;                          //@synthesize future=_future - In the implementation block
@property (nonatomic,retain) HFItem * item;                              //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) BOOL isInternal;                            //@synthesize isInternal=_isInternal - In the implementation block
@property (nonatomic,retain) HFItemUpdateOutcome * outcome;              //@synthesize outcome=_outcome - In the implementation block
+(id)wrapperWithFuture:(id)arg1 item:(id)arg2 isInternal:(BOOL)arg3 ;
+(id)futuresFromWrappers:(id)arg1 ;
-(HFItem *)item;
-(void)setItem:(HFItem *)arg1 ;
-(HFItemUpdateOutcome *)outcome;
-(void)setOutcome:(HFItemUpdateOutcome *)arg1 ;
-(BOOL)isInternal;
-(NAFuture *)future;
-(void)setFuture:(NAFuture *)arg1 ;
-(void)setIsInternal:(BOOL)arg1 ;
@end

