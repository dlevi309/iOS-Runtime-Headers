/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKPaletteMoreOptionsViewControllerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/PKEdgeLocatable.h>
#import <libobjc.A.dylib/PKPalettePopoverUpdating.h>
#import <libobjc.A.dylib/PKPalettePopoverDismissing.h>
#import <libobjc.A.dylib/PKPaletteViewSizeScaling.h>

@protocol PKPalettePopoverPresentingPKPaletteAdditionalOptionsViewDelegate;
@class UIStackView, PKPaletteButton, PKPaletteMoreOptionsViewController, UIViewController, NSLayoutConstraint, NSString;

@interface PKPaletteAdditionalOptionsView : UIView <PKPaletteMoreOptionsViewControllerDelegate, UIPopoverPresentationControllerDelegate, PKEdgeLocatable, PKPalettePopoverUpdating, PKPalettePopoverDismissing, PKPaletteViewSizeScaling> {

	BOOL _supportsAnnotationEditing;
	BOOL _autoHideOn;
	unsigned long long _edgeLocation;
	double _scalingFactor;
	id<PKPalettePopoverPresenting><PKPaletteAdditionalOptionsViewDelegate> _delegate;
	UIStackView* _stackView;
	PKPaletteButton* _plusButton;
	PKPaletteButton* _ellipsisButton;
	PKPaletteMoreOptionsViewController* _moreOptionsViewController;
	UIViewController* _presentedPopoverViewController;
	NSLayoutConstraint* _plusButtonWidthConstraint;
	NSLayoutConstraint* _plusButtonHeightConstraint;
	NSLayoutConstraint* _ellipsisButtonWidthConstraint;
	NSLayoutConstraint* _ellipsisButtonHeightConstraint;

}

@property (nonatomic,retain) UIStackView * stackView;                                                                             //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) PKPaletteButton * plusButton;                                                                        //@synthesize plusButton=_plusButton - In the implementation block
@property (nonatomic,retain) PKPaletteButton * ellipsisButton;                                                                    //@synthesize ellipsisButton=_ellipsisButton - In the implementation block
@property (nonatomic,retain) PKPaletteMoreOptionsViewController * moreOptionsViewController;                                      //@synthesize moreOptionsViewController=_moreOptionsViewController - In the implementation block
@property (nonatomic,retain) UIViewController * presentedPopoverViewController;                                                   //@synthesize presentedPopoverViewController=_presentedPopoverViewController - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * plusButtonWidthConstraint;                                                      //@synthesize plusButtonWidthConstraint=_plusButtonWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * plusButtonHeightConstraint;                                                     //@synthesize plusButtonHeightConstraint=_plusButtonHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * ellipsisButtonWidthConstraint;                                                  //@synthesize ellipsisButtonWidthConstraint=_ellipsisButtonWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * ellipsisButtonHeightConstraint;                                                 //@synthesize ellipsisButtonHeightConstraint=_ellipsisButtonHeightConstraint - In the implementation block
@property (assign,nonatomic,__weak) id<PKPalettePopoverPresenting><PKPaletteAdditionalOptionsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL supportsAnnotationEditing;                                                                      //@synthesize supportsAnnotationEditing=_supportsAnnotationEditing - In the implementation block
@property (assign,getter=isAutoHideOn,nonatomic) BOOL autoHideOn;                                                                 //@synthesize autoHideOn=_autoHideOn - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long edgeLocation;                                                                     //@synthesize edgeLocation=_edgeLocation - In the implementation block
@property (assign,nonatomic) double scalingFactor;                                                                                //@synthesize scalingFactor=_scalingFactor - In the implementation block
-(id<PKPalettePopoverPresenting><PKPaletteAdditionalOptionsViewDelegate>)delegate;
-(void)setDelegate:(id<PKPalettePopoverPresenting><PKPaletteAdditionalOptionsViewDelegate>)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIStackView *)stackView;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(void)setStackView:(UIStackView *)arg1 ;
-(void)_updateUI;
-(double)scalingFactor;
-(CGRect)plusButtonFrame;
-(void)dismissPalettePopoverWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)edgeLocation;
-(void)setEdgeLocation:(unsigned long long)arg1 ;
-(void)setScalingFactor:(double)arg1 ;
-(BOOL)supportsAnnotationEditing;
-(void)updatePopoverUI;
-(void)setSupportsAnnotationEditing:(BOOL)arg1 ;
-(void)setAutoHideOn:(BOOL)arg1 ;
-(BOOL)isAutoHideOn;
-(void)moreOptionsViewControllerDidToggleAutoHide:(id)arg1 ;
-(void)_didSelectPlusButton:(id)arg1 ;
-(void)_didSelectEllipsisButton:(id)arg1 ;
-(PKPaletteButton *)ellipsisButton;
-(PKPaletteButton *)plusButton;
-(NSLayoutConstraint *)plusButtonWidthConstraint;
-(NSLayoutConstraint *)plusButtonHeightConstraint;
-(NSLayoutConstraint *)ellipsisButtonWidthConstraint;
-(NSLayoutConstraint *)ellipsisButtonHeightConstraint;
-(UIViewController *)presentedPopoverViewController;
-(void)setMoreOptionsViewController:(PKPaletteMoreOptionsViewController *)arg1 ;
-(PKPaletteMoreOptionsViewController *)moreOptionsViewController;
-(void)setPresentedPopoverViewController:(UIViewController *)arg1 ;
-(double)_contentSizeWidth;
-(void)setPlusButton:(PKPaletteButton *)arg1 ;
-(void)setEllipsisButton:(PKPaletteButton *)arg1 ;
-(void)setPlusButtonWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setPlusButtonHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setEllipsisButtonWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setEllipsisButtonHeightConstraint:(NSLayoutConstraint *)arg1 ;
@end

