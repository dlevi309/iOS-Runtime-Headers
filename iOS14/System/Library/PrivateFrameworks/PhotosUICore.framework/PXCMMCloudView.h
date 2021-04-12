/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PXCMMCloudViewViewDelegate;
@class PXRoundedCornerOverlayView, UIButton, PXGradientView, UIImageView, UILabel;

@interface PXCMMCloudView : UIView {

	PXRoundedCornerOverlayView* _roundedCornerOverlayView;
	SCD_Struct_PX24 _delegateRespondsTo;
	id<PXCMMCloudViewViewDelegate> _delegate;
	UIButton* _dismissButton;
	PXGradientView* _graphicGradientView;
	UIImageView* _graphicImageView;
	UILabel* _bodyLabel;
	UIButton* _learnMoreButton;
	unsigned long long _style;

}

@property (nonatomic,readonly) UIButton * dismissButton;                                  //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,readonly) PXGradientView * graphicGradientView;                      //@synthesize graphicGradientView=_graphicGradientView - In the implementation block
@property (nonatomic,readonly) UIImageView * graphicImageView;                            //@synthesize graphicImageView=_graphicImageView - In the implementation block
@property (nonatomic,readonly) UILabel * bodyLabel;                                       //@synthesize bodyLabel=_bodyLabel - In the implementation block
@property (nonatomic,readonly) UIButton * learnMoreButton;                                //@synthesize learnMoreButton=_learnMoreButton - In the implementation block
@property (nonatomic,readonly) unsigned long long style;                                  //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) id<PXCMMCloudViewViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL disableDismissAction; 
-(id)_constrainedFontForTextStyle:(id)arg1 maximumContentSizeCategory:(id)arg2 ;
-(void)_updateFontAndStyle;
-(void)_learnMoreTapped:(id)arg1 ;
-(void)_didTapDismissButton:(id)arg1 ;
-(PXGradientView *)graphicGradientView;
-(UIImageView *)graphicImageView;
-(void)setDisableDismissAction:(BOOL)arg1 ;
-(BOOL)disableDismissAction;
-(id)initWithFrame:(CGRect)arg1 style:(unsigned long long)arg2 ;
-(id<PXCMMCloudViewViewDelegate>)delegate;
-(void)_setupSubviews;
-(void)setDelegate:(id<PXCMMCloudViewViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(UIButton *)learnMoreButton;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)bodyLabel;
-(CGSize)_performLayoutInRect:(CGRect)arg1 updateSubviewFrames:(BOOL)arg2 ;
-(UIButton *)dismissButton;
-(void)traitCollectionDidChange:(id)arg1 ;
-(unsigned long long)style;
@end

