/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUIErrorLayout, VUILabel;

@interface VUIErrorView : UIView {

	VUIErrorLayout* _layout;
	VUILabel* _titleLabel;
	VUILabel* _descriptionLabel;
	VUILabel* _debugTextLabel;
	VUILabel* _debugTextLabel2;

}

@property (nonatomic,retain) VUIErrorLayout * layout;                  //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) VUILabel * titleLabel;                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) VUILabel * descriptionLabel;              //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) VUILabel * debugTextLabel;                //@synthesize debugTextLabel=_debugTextLabel - In the implementation block
@property (nonatomic,retain) VUILabel * debugTextLabel2;               //@synthesize debugTextLabel2=_debugTextLabel2 - In the implementation block
-(VUILabel *)titleLabel;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setDescriptionLabel:(VUILabel *)arg1 ;
-(void)setLayout:(VUIErrorLayout *)arg1 ;
-(VUILabel *)descriptionLabel;
-(VUIErrorLayout *)layout;
-(VUILabel *)debugTextLabel;
-(void)setDebugTextLabel:(VUILabel *)arg1 ;
-(void)setDebugTextLabel2:(VUILabel *)arg1 ;
-(CGSize)layoutSubviewsWithSize:(CGSize)arg1 computationOnly:(BOOL)arg2 ;
-(VUILabel *)debugTextLabel2;
@end

