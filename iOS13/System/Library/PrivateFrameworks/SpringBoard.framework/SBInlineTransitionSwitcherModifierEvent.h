/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifierEvent.h>

@interface SBInlineTransitionSwitcherModifierEvent : SBTransitionSwitcherModifierEvent {

	unsigned long long _scrollAxis;
	double _cardScale;
	CGSize _fixedCardSize;

}

@property (assign,nonatomic) unsigned long long scrollAxis;              //@synthesize scrollAxis=_scrollAxis - In the implementation block
@property (assign,nonatomic) double cardScale;                           //@synthesize cardScale=_cardScale - In the implementation block
@property (assign,nonatomic) CGSize fixedCardSize;                       //@synthesize fixedCardSize=_fixedCardSize - In the implementation block
-(long long)type;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(unsigned long long)scrollAxis;
-(void)setScrollAxis:(unsigned long long)arg1 ;
-(double)cardScale;
-(void)setCardScale:(double)arg1 ;
-(CGSize)fixedCardSize;
-(void)setFixedCardSize:(CGSize)arg1 ;
@end

