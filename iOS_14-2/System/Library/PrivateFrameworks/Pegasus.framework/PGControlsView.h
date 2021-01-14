/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
*/

#import <Pegasus/Pegasus-Structs.h>
#import <Pegasus/PGLayoutContainerView.h>
#import <libobjc.A.dylib/PGButtonViewDelegate.h>

@class PGControlsViewModel, PGButtonView, UIActivityIndicatorView, UIView, PGLayoutContainerView, PGCABackdropLayerView, PGProgressIndicator, PGPrerollIndicatorView, NSArray, NSString, PGDisplayLink;

@interface PGControlsView : PGLayoutContainerView <PGButtonViewDelegate> {

	PGControlsViewModel* _viewModel;
	PGButtonView* _restoreButton;
	PGButtonView* _cancelButton;
	PGButtonView* _skipBackButton;
	PGButtonView* _actionButton;
	PGButtonView* _skipForwardButton;
	PGButtonView* _liveIndicatorBadgeButton;
	UIActivityIndicatorView* _contentLoadingIndicator;
	UIView* _contentLoadingIndicatorContainerView;
	PGLayoutContainerView* _hidableItemsLayoutContainerView;
	PGCABackdropLayerView* _captureOnlyView;
	PGProgressIndicator* _progressIndicator;
	PGPrerollIndicatorView* _prerollIndicatorView;
	UIView* _gradientView;
	NSArray* _allButtons;
	NSString* _groupNameBase;
	PGDisplayLink* _displayLinkForProgressUpdates;
	BOOL _prefersControlsHidden;

}

@property (assign,nonatomic) BOOL prefersControlsHidden;              //@synthesize prefersControlsHidden=_prefersControlsHidden - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)PG_preferredVisibilityForView:(id)arg1 ;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(id)initWithCoder:(id)arg1 ;
-(void)updateProgress;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 viewModel:(id)arg2 ;
-(void)buttonViewDidReceiveTouchUpInside:(id)arg1 ;
-(CGRect)buttonView:(id)arg1 imageRectForContentRect:(CGRect)arg2 proposedRect:(CGRect)arg3 ;
-(CGRect)buttonView:(id)arg1 titleRectForContentRect:(CGRect)arg2 proposedRect:(CGRect)arg3 ;
-(UIEdgeInsets)buttonView:(id)arg1 contentEdgeInsetsForProposedInsets:(UIEdgeInsets)arg2 ;
-(BOOL)prefersControlsHidden;
-(void)viewModelDidUpdateValuesFromOldValues:(id)arg1 ;
-(void)setPrefersControlsHidden:(BOOL)arg1 ;
-(void)updateControlsAlpha;
-(id)PG_backdropGroupLeader;
-(CGRect)_progressIndicatorFrameWithScaling:(double)arg1 ;
-(BOOL)_showsGradientView;
-(CGRect)_prerollIndicatorFrameWithScaling:(double)arg1 ;
-(void)updateControlsHidden;
@end

