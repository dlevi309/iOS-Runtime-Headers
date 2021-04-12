/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
*/


@class NSHashTable, UIViewPropertyAnimator;

@interface SBUICoronaAnimationController : NSObject {

	NSHashTable* _participants;
	UIViewPropertyAnimator* _propertyAnimator;

}

@property (setter=_setPropertyAnimator:,getter=_propertyAnimator,nonatomic,retain) UIViewPropertyAnimator * propertyAnimator;              //@synthesize propertyAnimator=_propertyAnimator - In the implementation block
+(id)animationSettingsForTransitionToStyle:(long long)arg1 ;
-(id)_propertyAnimator;
-(void)addParticipant:(id)arg1 ;
-(void)removeParticipant:(id)arg1 ;
-(void)_setPropertyAnimator:(id)arg1 ;
-(id)_configurePropertyAnimatorIfNecessaryForChangeToUserInterfaceStyle:(long long)arg1 ;
-(void)coronaDidChange:(long long)arg1 ;
@end

