/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_setPropertyAnimator:(id)arg1 ;
-(id)_configurePropertyAnimatorIfNecessaryForChangeToUserInterfaceStyle:(long long)arg1 ;
-(void)coronaDidChange:(long long)arg1 ;
-(void)removeParticipant:(id)arg1 ;
-(void)addParticipant:(id)arg1 ;
@end

