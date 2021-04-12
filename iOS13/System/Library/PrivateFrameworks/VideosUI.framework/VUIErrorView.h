/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(VUIErrorLayout *)layout;
-(void)setLayout:(VUIErrorLayout *)arg1 ;
-(VUILabel *)titleLabel;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(void)setDescriptionLabel:(VUILabel *)arg1 ;
-(VUILabel *)descriptionLabel;
-(VUILabel *)debugTextLabel;
-(void)setDebugTextLabel:(VUILabel *)arg1 ;
-(void)setDebugTextLabel2:(VUILabel *)arg1 ;
-(CGSize)layoutSubviewsWithSize:(CGSize)arg1 computationOnly:(BOOL)arg2 ;
-(VUILabel *)debugTextLabel2;
@end

