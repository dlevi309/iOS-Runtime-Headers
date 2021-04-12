/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, NSAttributedString;

@interface FIUIPushyLabelView : UIView {

	NSArray* _currentSnapshotCharacters;
	NSArray* _incomingSnapshotCharacters;
	NSAttributedString* _currentAttributedText;
	id _pendingAttributedString;
	unsigned long long _pendingDirection;
	BOOL _pendingPushPerCharacter;
	double _currentAnimationFinishTime;

}
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_snapshotCharactersFromAttributedText:(id)arg1 perCharacter:(BOOL)arg2 ;
-(void)_setIncomingSnapshotCharacters:(id)arg1 ;
-(void)_layoutViewsAtIndex:(unsigned long long)arg1 forPushEndWithDirection:(unsigned long long)arg2 ;
-(void)_swapCurrentSnapshotCharacters:(id)arg1 forIncomingCharacters:(id)arg2 ;
-(void)_layoutForPushStartWithDirection:(unsigned long long)arg1 ;
-(void)_processPendingStringIfNeeded;
-(void)pushToAttributedText:(id)arg1 direction:(unsigned long long)arg2 perCharacter:(BOOL)arg3 ;
-(void)_setCurrentSnapshotCharacters:(id)arg1 ;
-(void)sizeToFitAttributedText:(id)arg1 ;
-(void)setAttributedTextUnanimated:(id)arg1 ;
-(id)currentAttributedText;
@end

