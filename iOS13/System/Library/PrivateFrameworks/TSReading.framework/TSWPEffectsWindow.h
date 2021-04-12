/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKitCore/UIWindow.h>

@class UITextView;

@interface TSWPEffectsWindow : UIWindow {

	BOOL _readyToGo;
	unsigned _activeEffectsCount;
	UITextView* _dummyToReclaimFirstResponder;

}
+(id)sharedEffectsWindowAboveStatusBar;
+(id)sharedEffectsWindowAboveStatusBarForView:(id)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didAddSubview:(id)arg1 ;
-(void)willRemoveSubview:(id)arg1 ;
-(BOOL)_canAffectStatusBarAppearance;
-(void)p_updateForOrientation:(long long)arg1 ;
-(void)pDidChangeStatusBarOrientation:(id)arg1 ;
@end

