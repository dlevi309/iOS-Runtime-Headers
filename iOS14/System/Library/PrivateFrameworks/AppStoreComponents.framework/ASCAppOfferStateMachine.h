/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/


@protocol ASCOffer;
@class ASCAppOfferStateCenter, NSMutableArray, ASCAppOfferSavedState, NSString;

@interface ASCAppOfferStateMachine : NSObject {

	id<ASCOffer> _offer;
	ASCAppOfferStateCenter* _stateCenter;
	NSMutableArray* _delegates;
	ASCAppOfferSavedState* _mostRecentState;
	NSString* _mostRecentStatusText;

}

@property (nonatomic,readonly) id<ASCOffer> offer;                                       //@synthesize offer=_offer - In the implementation block
@property (nonatomic,__weak,readonly) ASCAppOfferStateCenter * stateCenter;              //@synthesize stateCenter=_stateCenter - In the implementation block
@property (nonatomic,readonly) NSMutableArray * delegates;                               //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,retain) ASCAppOfferSavedState * mostRecentState;                    //@synthesize mostRecentState=_mostRecentState - In the implementation block
@property (nonatomic,copy) NSString * mostRecentStatusText;                              //@synthesize mostRecentStatusText=_mostRecentStatusText - In the implementation block
-(NSMutableArray *)delegates;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(id<ASCOffer>)offer;
-(void)dealloc;
-(ASCAppOfferStateCenter *)stateCenter;
-(ASCAppOfferSavedState *)mostRecentState;
-(NSString *)mostRecentStatusText;
-(void)offerStatusTextDidChange:(id)arg1 ;
-(void)setMostRecentState:(ASCAppOfferSavedState *)arg1 ;
-(void)enumerateDelegatesUsingBlock:(/*^block*/id)arg1 ;
-(void)setMostRecentStatusText:(NSString *)arg1 ;
-(id)initWithOffer:(id)arg1 stateCenter:(id)arg2 ;
-(void)offerStateDidChange:(id)arg1 withMetadata:(id)arg2 flags:(long long)arg3 ;
-(id)performActionWithActivity:(id)arg1 ;
@end

