/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSwitcherModifierEvent.h>

@interface SBScrollSwitcherModifierEvent : SBSwitcherModifierEvent {

	BOOL _userInitiated;
	unsigned long long _phase;
	CGPoint _contentOffset;

}

@property (assign,nonatomic) CGPoint contentOffset;                                  //@synthesize contentOffset=_contentOffset - In the implementation block
@property (assign,nonatomic) unsigned long long phase;                               //@synthesize phase=_phase - In the implementation block
@property (assign,getter=isUserInitiated,nonatomic) BOOL userInitiated;              //@synthesize userInitiated=_userInitiated - In the implementation block
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(long long)type;
-(id)initWithContentOffset:(CGPoint)arg1 phase:(unsigned long long)arg2 userInitiated:(BOOL)arg3 ;
-(BOOL)isUserInitiated;
-(void)setUserInitiated:(BOOL)arg1 ;
-(CGPoint)contentOffset;
-(unsigned long long)phase;
-(void)setPhase:(unsigned long long)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

