/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setScrollAxis:(unsigned long long)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(unsigned long long)scrollAxis;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)cardScale;
-(void)setCardScale:(double)arg1 ;
-(CGSize)fixedCardSize;
-(void)setFixedCardSize:(CGSize)arg1 ;
@end

