/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@protocol PXCMMSuggestionViewDelegate;
@class PXCMMPosterHeaderView, UILabel, UIImageView, PXRoundedCornerOverlayView, UIFont, PXCMMSuggestionViewModel, UIView, NSString;

@interface PXCMMSuggestionView : UICollectionViewCell <PXChangeObserver> {

	PXCMMPosterHeaderView* _headerView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIImageView* _combinedFaceTileImageView;
	PXRoundedCornerOverlayView* _roundedCornerOverlayView;
	UIFont* _titleFont;
	UIFont* _titleBoldFont;
	id<PXCMMSuggestionViewDelegate> _delegate;
	PXCMMSuggestionViewModel* _viewModel;

}

@property (nonatomic,retain) PXCMMSuggestionViewModel * viewModel;                         //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic,__weak) id<PXCMMSuggestionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CGRect headerViewBounds; 
@property (nonatomic,readonly) UIView * previewView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)posterHeaderViewSizeForSize:(CGSize)arg1 scale:(double)arg2 ;
+(CGSize)sizeThatFits:(CGSize)arg1 viewModel:(id)arg2 ;
+(CGSize)posterImageSizeThatFits:(CGSize)arg1 scale:(double)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<PXCMMSuggestionViewDelegate>)delegate;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(PXCMMSuggestionViewModel *)viewModel;
-(UIView *)previewView;
-(void)setDelegate:(id<PXCMMSuggestionViewDelegate>)arg1 ;
-(BOOL)_updateCombinedFaceTileImage;
-(CGRect)headerViewBounds;
-(void)_updateOpaqueAncestorBackgroundColor;
-(BOOL)test_selected;
-(void)layoutSubviews;
-(void)_tapGesture:(id)arg1 ;
-(void)setViewModel:(PXCMMSuggestionViewModel *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)test_subtitle;
-(void)_updateFonts;
-(void)_updateHeaderView;
-(id)test_title;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)_updateSubtitle;
-(CGSize)_performLayoutInWidth:(double)arg1 updateSubviewFrames:(BOOL)arg2 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

