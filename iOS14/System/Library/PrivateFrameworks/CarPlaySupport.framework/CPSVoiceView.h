/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CPSAbridgableLabel *)titleLabel;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setTitleLabel:(CPSAbridgableLabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(id)_titleFont;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

