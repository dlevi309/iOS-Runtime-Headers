/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIPopoverPresentationController.h>
#import <UIKitCore/_UIActionSheetCompactPresentationControllerDelegate.h>

@protocol UIActionSheetPresentationControllerDelegate;
@class NSString, _UIActionSheetCompactPresentationController;

@interface _UIActionSheetPresentationController : UIPopoverPresentationController <_UIActionSheetCompactPresentationControllerDelegate> {

	BOOL _dismissActionUsesShorterHeightWhenCompactVertically;
	BOOL __shouldUseCompactPresentationControllerWhenPresentedInSheet;
	BOOL _avoidsKeyboardDisabled;
	NSString* _dismissActionTitle;
	id<UIActionSheetPresentationControllerDelegate> _actionSheetDelegate;
	_UIActionSheetCompactPresentationController* _compactPresentationController;

}

@property (nonatomic,retain) _UIActionSheetCompactPresentationController * compactPresentationController;                                                                          //@synthesize compactPresentationController=_compactPresentationController - In the implementation block
@property (assign,nonatomic) BOOL avoidsKeyboardDisabled;                                                                                                                          //@synthesize avoidsKeyboardDisabled=_avoidsKeyboardDisabled - In the implementation block
@property (nonatomic,copy) NSString * dismissActionTitle;                                                                                                                          //@synthesize dismissActionTitle=_dismissActionTitle - In the implementation block
@property (assign,nonatomic) BOOL dismissActionUsesShorterHeightWhenCompactVertically;                                                                                             //@synthesize dismissActionUsesShorterHeightWhenCompactVertically=_dismissActionUsesShorterHeightWhenCompactVertically - In the implementation block
@property (assign,setter=_setShouldUseCompactPresentationControllerWhenPresentedInSheet:,nonatomic) BOOL _shouldUseCompactPresentationControllerWhenPresentedInSheet;              //@synthesize _shouldUseCompactPresentationControllerWhenPresentedInSheet=__shouldUseCompactPresentationControllerWhenPresentedInSheet - In the implementation block
@property (assign,nonatomic,__weak) id<UIActionSheetPresentationControllerDelegate> actionSheetDelegate;                                                                           //@synthesize actionSheetDelegate=_actionSheetDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)actionSheetCompactPresentationControllerShouldPresentInCurrentContext:(id)arg1 ;
-(void)_setShouldUseCompactPresentationControllerWhenPresentedInSheet:(BOOL)arg1 ;
-(void)setDismissActionUsesShorterHeightWhenCompactVertically:(BOOL)arg1 ;
-(BOOL)_shouldUseCompactPresentationControllerWhenPresentedInSheet;
-(void)actionSheetCompactPresentationControllerDidDismiss:(id)arg1 ;
-(BOOL)dismissActionUsesShorterHeightWhenCompactVertically;
-(id)_exceptionStringForNilSourceViewOrBarButtonItem;
-(BOOL)dimmingViewWasTapped:(id)arg1 withDismissCompletion:(/*^block*/id)arg2 ;
-(void)setAvoidsKeyboardDisabled:(BOOL)arg1 ;
-(void)setActionSheetDelegate:(id<UIActionSheetPresentationControllerDelegate>)arg1 ;
-(_UIActionSheetCompactPresentationController *)compactPresentationController;
-(id)_visualStyleForTraitCollection:(id)arg1 ;
-(void)setCompactPresentationController:(_UIActionSheetCompactPresentationController *)arg1 ;
-(long long)_presentationContextForViewController:(id)arg1 ;
-(id)_compactPresentationController;
-(id)_presentationControllerForTraitCollection:(id)arg1 ;
-(BOOL)_shouldPresentedViewControllerControlStatusBarAppearance;
-(id<UIActionSheetPresentationControllerDelegate>)actionSheetDelegate;
-(NSString *)dismissActionTitle;
-(void)dealloc;
-(BOOL)avoidsKeyboardDisabled;
-(void)setDismissActionTitle:(NSString *)arg1 ;
-(void)beginPseudoAlertPresentationMode;
-(void)endPseudoAlertPresentationMode;
@end

