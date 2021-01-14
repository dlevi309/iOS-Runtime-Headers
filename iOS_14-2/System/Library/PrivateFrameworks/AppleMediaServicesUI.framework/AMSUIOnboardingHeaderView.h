/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <UIKitCore/UIScrollView.h>

@class UIImageView, UILabel;

@interface AMSUIOnboardingHeaderView : UIScrollView {

	BOOL _isPresentedInFormSheet;
	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	double _containerHeight;

}

@property (nonatomic,retain) UIImageView * imageView;                  //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;               //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (assign,nonatomic) double containerHeight;                   //@synthesize containerHeight=_containerHeight - In the implementation block
@property (assign,nonatomic) BOOL isPresentedInFormSheet;              //@synthesize isPresentedInFormSheet=_isPresentedInFormSheet - In the implementation block
-(UILabel *)titleLabel;
-(void)setContainerHeight:(double)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(void)adjustedContentInsetDidChange;
-(void)updateContentSize;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UILabel *)descriptionLabel;
-(double)containerHeight;
-(BOOL)isPresentedInFormSheet;
-(void)setIsPresentedInFormSheet:(BOOL)arg1 ;
@end

