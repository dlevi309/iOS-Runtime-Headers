/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <UIKitCore/UIView.h>

@class CPSAbridgableLabel, UIImageView;

@interface CPSVoiceView : UIView {

	CPSAbridgableLabel* _titleLabel;
	UIImageView* _imageView;

}

@property (nonatomic,retain) CPSAbridgableLabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                      //@synthesize imageView=_imageView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CPSAbridgableLabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIImageView *)imageView;
-(id)_titleFont;
-(void)setTitleLabel:(CPSAbridgableLabel *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
@end

