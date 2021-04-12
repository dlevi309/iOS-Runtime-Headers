/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <CoverSheet/CSCoverSheetViewControllerBase.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/WKWallpaperLocketViewControllerDelegate.h>
#import <libobjc.A.dylib/CSDismissableModalViewControllerDelegate.h>

@protocol CSLocketViewControllerDelegate;
@class NSSet, UIView, UIViewFloatAnimatableProperty, SBFFluidBehaviorSettings, NSString;

@interface CSLocketViewController : CSCoverSheetViewControllerBase <UIGestureRecognizerDelegate, WKWallpaperLocketViewControllerDelegate, CSDismissableModalViewControllerDelegate> {

	NSSet* _componentTypes;
	UIView* _scaleView;
	CGPoint _previousTranslation;
	UIViewFloatAnimatableProperty* _scaleProperty;
	SBFFluidBehaviorSettings* _scaleSettings;
	BOOL _dismissing;
	id<CSLocketViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSLocketViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CSLocketViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CSLocketViewControllerDelegate>)arg1 ;
-(void)loadView;
-(BOOL)handleEvent:(id)arg1 ;
-(void)_dismiss:(BOOL)arg1 ;
-(void)_createProperties;
-(void)aggregateAppearance:(id)arg1 ;
-(void)aggregateBehavior:(id)arg1 ;
-(void)handleBottomEdgeGestureBegan:(id)arg1 ;
-(void)handleBottomEdgeGestureChanged:(id)arg1 ;
-(void)handleBottomEdgeGestureEnded:(id)arg1 ;
-(void)addGrabberView:(id)arg1 ;
-(void)dismissForHomeButton;
-(id)initWithComponentTypes:(id)arg1 ;
-(void)_updateForPropertyChanged;
-(void)_setCornerRounded:(BOOL)arg1 ;
-(void)_updateLocketScale:(double)arg1 interactive:(BOOL)arg2 ;
-(BOOL)_shouldCancelInteractiveDismissGesture;
-(void)wallpaperLocketViewControllerDidTapOnDoneButton:(id)arg1 ;
@end

