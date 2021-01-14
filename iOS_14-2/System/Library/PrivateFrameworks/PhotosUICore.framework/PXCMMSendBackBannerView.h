/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class PXCapsuleButton, NSString, PXCMMImageView, UILabel, PXUpdater;

@interface PXCMMSendBackBannerView : UIView {

	PXCapsuleButton* _actionButton;
	NSString* _actionButtonTitle;
	/*^block*/id _actionButtonAction;
	PXCMMImageView* _imageView;
	UILabel* _captionLabel;
	UILabel* _headlineLabel;
	PXUpdater* _updater;

}
+(id)_headlineLabelFont;
+(double)bottomInset;
+(id)captionLabelFont;
+(double)captionLabelTopInset;
-(id)new;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)_updateLabels;
-(void)layoutSubviews;
-(id)initWithMessage:(id)arg1 ;
-(void)setActionButtonWithTitle:(id)arg1 actionBlock:(/*^block*/id)arg2 ;
-(void)_updateActionButton;
-(void)_actionButtonTapped:(id)arg1 ;
-(id)_headlineStringAttributes;
-(id)_actionButtonWithTitle:(id)arg1 action:(SEL)arg2 enabled:(BOOL)arg3 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setAsset:(id)arg1 mediaProvider:(id)arg2 ;
-(CGSize)_performLayoutInWidth:(double)arg1 updateSubviewFrames:(BOOL)arg2 ;
-(id)_attributedStringWithString:(id)arg1 ;
@end

