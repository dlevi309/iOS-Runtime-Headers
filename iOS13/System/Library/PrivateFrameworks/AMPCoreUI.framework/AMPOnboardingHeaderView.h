/*
* Generated on Monday, March 1, 2021 at 2:34:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AMPCoreUI.framework/AMPCoreUI
*/

#import <AMPCoreUI/AMPCoreUI-Structs.h>
#import <UIKitCore/UIScrollView.h>

@class UIImageView, UILabel;

@interface AMPOnboardingHeaderView : UIScrollView {

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
-(void)updateContentSize;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(UILabel *)descriptionLabel;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)adjustedContentInsetDidChange;
-(void)setContainerHeight:(double)arg1 ;
-(double)containerHeight;
-(BOOL)isPresentedInFormSheet;
-(void)setIsPresentedInFormSheet:(BOOL)arg1 ;
@end

