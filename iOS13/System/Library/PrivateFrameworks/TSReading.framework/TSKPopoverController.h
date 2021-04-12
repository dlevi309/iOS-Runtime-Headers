/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKitCore/UIPopoverController.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@protocol UIPopoverControllerDelegate;
@class NSString;

@interface TSKPopoverController : UIPopoverController <UIPopoverControllerDelegate> {

	BOOL mDismissOnUndo;
	BOOL mDismissOnMoviePlayback;
	BOOL mDismissAnimatedOnOrientationChange;
	id<UIPopoverControllerDelegate> mSavedDelegate;
	BOOL mIsDismissing;

}

@property (assign,nonatomic) BOOL dismissOnUndo; 
@property (assign,nonatomic) BOOL dismissOnMoviePlayback; 
@property (assign,nonatomic) BOOL dismissAnimatedOnOrientationChange; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)anyPopoversVisible;
+(double)defaultPopoverPlacementPadding;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(BOOL)popoverControllerShouldDismissPopover:(id)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)presentPopoverFromRect:(CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 animated:(BOOL)arg4 ;
-(void)dismissPopoverAnimated:(BOOL)arg1 ;
-(id)initWithContentViewController:(id)arg1 ;
-(void)p_orientationWillChange:(id)arg1 ;
-(void)p_willShowPopoverNotification:(id)arg1 ;
-(void)p_applicationDidEnterBackground:(id)arg1 ;
-(void)setDismissOnMoviePlayback:(BOOL)arg1 ;
-(void)setDismissAnimatedOnOrientationChange:(BOOL)arg1 ;
-(void)p_dismissPopoverAnimated:(BOOL)arg1 ;
-(void)p_sendPopoverHidDelegateMessage;
-(void)moviePlaybackWillBegin:(id)arg1 ;
-(BOOL)dismissOnMoviePlayback;
-(void)presentPopoverFromRect:(CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 animated:(BOOL)arg4 constrainToView:(BOOL)arg5 withPadding:(double)arg6 ;
-(BOOL)dismissOnUndo;
-(void)setDismissOnUndo:(BOOL)arg1 ;
-(BOOL)dismissAnimatedOnOrientationChange;
@end

