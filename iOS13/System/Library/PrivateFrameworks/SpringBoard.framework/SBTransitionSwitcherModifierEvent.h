/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifierEvent.h>

@class NSUUID, SBAppLayout;

@interface SBTransitionSwitcherModifierEvent : SBSwitcherModifierEvent {

	BOOL _animated;
	NSUUID* _transitionID;
	unsigned long long _phase;
	SBAppLayout* _fromAppLayout;
	long long _fromEnvironmentMode;
	SBAppLayout* _toAppLayout;
	long long _toEnvironmentMode;
	long long _fromInterfaceOrientation;
	long long _toInterfaceOrientation;

}

@property (nonatomic,retain) SBAppLayout * fromAppLayout;                     //@synthesize fromAppLayout=_fromAppLayout - In the implementation block
@property (assign,nonatomic) long long fromEnvironmentMode;                   //@synthesize fromEnvironmentMode=_fromEnvironmentMode - In the implementation block
@property (nonatomic,retain) SBAppLayout * toAppLayout;                       //@synthesize toAppLayout=_toAppLayout - In the implementation block
@property (assign,nonatomic) long long toEnvironmentMode;                     //@synthesize toEnvironmentMode=_toEnvironmentMode - In the implementation block
@property (assign,nonatomic) long long fromInterfaceOrientation;              //@synthesize fromInterfaceOrientation=_fromInterfaceOrientation - In the implementation block
@property (assign,nonatomic) long long toInterfaceOrientation;                //@synthesize toInterfaceOrientation=_toInterfaceOrientation - In the implementation block
@property (nonatomic,readonly) NSUUID * transitionID;                         //@synthesize transitionID=_transitionID - In the implementation block
@property (nonatomic,readonly) unsigned long long phase;                      //@synthesize phase=_phase - In the implementation block
@property (getter=isAnimated,nonatomic,readonly) BOOL animated;               //@synthesize animated=_animated - In the implementation block
-(long long)type;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(unsigned long long)phase;
-(BOOL)isAnimated;
-(id)initWithTransitionID:(id)arg1 phase:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(BOOL)isTransitionEvent;
-(NSUUID *)transitionID;
-(SBAppLayout *)fromAppLayout;
-(void)setFromAppLayout:(SBAppLayout *)arg1 ;
-(long long)fromEnvironmentMode;
-(void)setFromEnvironmentMode:(long long)arg1 ;
-(SBAppLayout *)toAppLayout;
-(void)setToAppLayout:(SBAppLayout *)arg1 ;
-(long long)toEnvironmentMode;
-(void)setToEnvironmentMode:(long long)arg1 ;
-(long long)fromInterfaceOrientation;
-(void)setFromInterfaceOrientation:(long long)arg1 ;
-(long long)toInterfaceOrientation;
-(void)setToInterfaceOrientation:(long long)arg1 ;
@end

