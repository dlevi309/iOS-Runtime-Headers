/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@protocol PXCMMInvitationViewDelegate;
@class PXCMMPosterHeaderView, UILabel, PXRoundedCornerOverlayView, PXCMMInvitationViewModel, UIView, NSString;

@interface PXCMMInvitationView : UICollectionViewCell <PXChangeObserver> {

	PXCMMPosterHeaderView* _headerView;
	UILabel* _titleLabel;
	UILabel* _subtitle1Label;
	UILabel* _subtitle2Label;
	PXRoundedCornerOverlayView* _roundedCornerOverlayView;
	id<PXCMMInvitationViewDelegate> _delegate;
	PXCMMInvitationViewModel* _viewModel;

}

@property (nonatomic,retain) PXCMMInvitationViewModel * viewModel;                         //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic,__weak) id<PXCMMInvitationViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CGRect headerViewBounds; 
@property (nonatomic,readonly) UIView * previewView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)titleFont;
+(long long)subtitle2TextStyle;
+(id)subtitle2Font;
+(long long)subtitle1TextStyle;
+(id)subtitle1Font;
+(long long)titleTextStyle;
+(CGSize)posterHeaderViewSizeForSize:(CGSize)arg1 scale:(double)arg2 ;
+(id)titleEmphasizedFont;
+(CGSize)sizeThatFits:(CGSize)arg1 viewModel:(id)arg2 ;
+(CGSize)posterImageSizeThatFits:(CGSize)arg1 scale:(double)arg2 ;
+(id)titleBulletColor;
+(id)subtitle1Color;
+(id)subtitle2Color;
-(BOOL)_updateTitle;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<PXCMMInvitationViewDelegate>)delegate;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(PXCMMInvitationViewModel *)viewModel;
-(UIView *)previewView;
-(void)setDelegate:(id<PXCMMInvitationViewDelegate>)arg1 ;
-(id)test_subtitle1;
-(CGRect)headerViewBounds;
-(void)_updateOpaqueAncestorBackgroundColor;
-(id)test_subtitle2;
-(BOOL)test_selected;
-(void)layoutSubviews;
-(void)_tapGesture:(id)arg1 ;
-(void)setViewModel:(PXCMMInvitationViewModel *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_updateHeaderView;
-(BOOL)_updateSubtitle2;
-(BOOL)_updateSubtitle1;
-(id)test_title;
-(CGSize)_performLayoutInWidth:(double)arg1 updateSubviewFrames:(BOOL)arg2 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

