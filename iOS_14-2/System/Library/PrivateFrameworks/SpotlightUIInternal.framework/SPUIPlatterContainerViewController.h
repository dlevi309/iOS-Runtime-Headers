/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
*/

#import <SpotlightUIInternal/SpotlightUIInternal-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SPUINavigationControllerDelegate.h>

@class UIView, SPUINavigationController, UIGestureRecognizer, NUIContainerBoxView, NSString;

@interface SPUIPlatterContainerViewController : UIViewController <NUIContainerViewDelegate, UIGestureRecognizerDelegate, SPUINavigationControllerDelegate> {

	UIView* _platterBackgroundView;
	UIView* _visualEffectView;
	SPUINavigationController* _navController;
	UIGestureRecognizer* _tapGestureRecognizer;

}

@property (retain) NUIContainerBoxView * view; 
@property (retain) UIView * platterBackgroundView;                          //@synthesize platterBackgroundView=_platterBackgroundView - In the implementation block
@property (retain) UIView * visualEffectView;                               //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (retain) SPUINavigationController * navController;                //@synthesize navController=_navController - In the implementation block
@property (retain) UIGestureRecognizer * tapGestureRecognizer;              //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isHardwareKeyboardAttached;
-(SPUINavigationController *)navController;
-(void)setTapGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(UIView *)visualEffectView;
-(id)platterVisualEffectView;
-(CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(CGSize)arg2 forArrangedSubview:(id)arg3 ;
-(void)containerViewDidLayoutArrangedSubviews:(id)arg1 ;
-(UIGestureRecognizer *)tapGestureRecognizer;
-(id)initWithNavigationController:(id)arg1 ;
-(void)setVisualEffectView:(UIView *)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)dealloc;
-(void)setNavController:(SPUINavigationController *)arg1 ;
-(void)navigationViewDidInvalidateSizeAnimated:(BOOL)arg1 ;
-(void)setPlatterBackgroundView:(UIView *)arg1 ;
-(void)hardwareKeyboardAvailabilityChangedAnimated:(BOOL)arg1 ;
-(UIView *)platterBackgroundView;
-(UIEdgeInsets)layoutMarginsForContainer;
@end

