/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@protocol PXPhotosGlobalFooterViewDelegate, PXPhotosGlobalFooterViewLayoutDelegate;
@class UIView, PXFooterAnimatedIconView, PXGradientView, UILabel, UITextView, UIProgressView, PXFooterViewModel, NSString;

@interface PXPhotosGlobalFooterView : UICollectionReusableView <UITextViewDelegate, PXChangeObserver> {

	UIView* _accessoryView;
	UIView* _filterView;
	BOOL _hasAnimatedIconView;
	PXFooterAnimatedIconView* _animatedIconView;
	PXGradientView* _backgroundView;
	UILabel* _titleLabel;
	UITextView* _subtitle1TextView;
	UILabel* _subtitle2Label;
	UIProgressView* _progressView;
	BOOL _isPresentingAlert;
	SCD_Struct_PX38 _delegateRespondsTo;
	BOOL _isPerformingChanges;
	BOOL _needsWorkaroundFor53444616;
	double _currentHeight;
	PXFooterViewModel* _viewModel;
	id<PXPhotosGlobalFooterViewDelegate> _delegate;
	id<PXPhotosGlobalFooterViewLayoutDelegate> _layoutDelegate;

}

@property (nonatomic,readonly) BOOL needsWorkaroundFor53444616;                                             //@synthesize needsWorkaroundFor53444616=_needsWorkaroundFor53444616 - In the implementation block
@property (nonatomic,retain) PXFooterViewModel * viewModel;                                                 //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic,__weak) id<PXPhotosGlobalFooterViewDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<PXPhotosGlobalFooterViewLayoutDelegate> layoutDelegate;              //@synthesize layoutDelegate=_layoutDelegate - In the implementation block
@property (nonatomic,readonly) double currentHeight;                                                        //@synthesize currentHeight=_currentHeight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateAccessory;
-(void)_updateTitle;
-(id<PXPhotosGlobalFooterViewLayoutDelegate>)layoutDelegate;
-(void)setLayoutDelegate:(id<PXPhotosGlobalFooterViewLayoutDelegate>)arg1 ;
-(id)_photoCollectionGlobalFooterSubtitleTextViewAttributesDisabled:(BOOL)arg1 ;
-(void)_updateFilterView;
-(void)_updateProgressAnimated:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_configurePhotoCollectionGlobalFooterSubtitleLabel:(id)arg1 ;
-(BOOL)needsWorkaroundFor53444616;
-(id<PXPhotosGlobalFooterViewDelegate>)delegate;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(PXFooterViewModel *)viewModel;
-(void)setDelegate:(id<PXPhotosGlobalFooterViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setViewModel:(PXFooterViewModel *)arg1 ;
-(id)_photoCollectionGlobalFooterSubtitleTextViewLinkTextAttributes_Font;
-(void)_configurePhotoCollectionGlobalFooterLabel:(id)arg1 withFont:(id)arg2 textColor:(id)arg3 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_configurePhotoCollectionGlobalFooterSubtitleTextView:(id)arg1 ;
-(void)_animatedIconCrossedGridCycleBoundary;
-(id)_photoCollectionGlobalFooterSubtitleTextViewLinkTextAttributes_Color;
-(void)_configurePhotoCollectionGlobalFooterProgressView:(id)arg1 paused:(BOOL)arg2 ;
-(void)_updateSubtitle2;
-(void)_updateSubtitle1;
-(double)currentHeight;
-(void)_configurePhotoCollectionGlobalFooterTitleLabel:(id)arg1 ;
-(void)_updateAnimatedIcon;
-(CGSize)_performLayoutInWidth:(double)arg1 updateSubviewFrames:(BOOL)arg2 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 ;
@end

