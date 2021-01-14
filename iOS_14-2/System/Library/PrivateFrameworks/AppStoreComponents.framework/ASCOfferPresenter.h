/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/

#import <libobjc.A.dylib/ASCAppOfferStateMachineDelegate.h>

@protocol ASCOfferPresenterObserver, ASCOffer, ASCOfferPresenterView;
@class ASCPresenterContext, ASCAppOfferStateMachine, NSString, ASCOfferPresenterViewState;

@interface ASCOfferPresenter : NSObject <ASCAppOfferStateMachineDelegate> {

	id<ASCOfferPresenterObserver> _observer;
	id<ASCOffer> _offer;
	id<ASCOfferPresenterView> _view;
	ASCPresenterContext* _context;
	ASCAppOfferStateMachine* _offerStateMachine;
	NSString* _mostRecentAppState;
	ASCOfferPresenterViewState* _savedStateForConfirm;

}

@property (nonatomic,__weak,readonly) id<ASCOfferPresenterView> view;                        //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) ASCPresenterContext * context;                                //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) ASCAppOfferStateMachine * offerStateMachine;                    //@synthesize offerStateMachine=_offerStateMachine - In the implementation block
@property (nonatomic,retain) NSString * mostRecentAppState;                                  //@synthesize mostRecentAppState=_mostRecentAppState - In the implementation block
@property (nonatomic,retain) ASCOfferPresenterViewState * savedStateForConfirm;              //@synthesize savedStateForConfirm=_savedStateForConfirm - In the implementation block
@property (assign,nonatomic,__weak) id<ASCOfferPresenterObserver> observer;                  //@synthesize observer=_observer - In the implementation block
@property (nonatomic,copy) id<ASCOffer> offer;                                               //@synthesize offer=_offer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setObserver:(id<ASCOfferPresenterObserver>)arg1 ;
-(id<ASCOfferPresenterObserver>)observer;
-(ASCPresenterContext *)context;
-(NSString *)description;
-(id<ASCOfferPresenterView>)view;
-(void)setOffer:(id<ASCOffer>)arg1 ;
-(id)initWithView:(id)arg1 ;
-(id<ASCOffer>)offer;
-(void)offerStateDidChange:(id)arg1 withMetadata:(id)arg2 isActionable:(BOOL)arg3 ;
-(void)offerStatusTextDidChange:(id)arg1 ;
-(id)initWithView:(id)arg1 context:(id)arg2 ;
-(void)setMostRecentAppState:(NSString *)arg1 ;
-(BOOL)clearConfirmForNewStateIfNeeded;
-(void)setOfferStateMachine:(ASCAppOfferStateMachine *)arg1 ;
-(ASCOfferPresenterViewState *)savedStateForConfirm;
-(void)setSavedStateForConfirm:(ASCOfferPresenterViewState *)arg1 ;
-(NSString *)mostRecentAppState;
-(ASCAppOfferStateMachine *)offerStateMachine;
-(BOOL)confirmOfferActionIfNeeded;
-(void)performOfferAction;
@end
