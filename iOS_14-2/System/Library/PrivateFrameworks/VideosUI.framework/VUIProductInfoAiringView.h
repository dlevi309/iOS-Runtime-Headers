/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUIProductInfoAiringLayout, VUILabel, _TVImageView;

@interface VUIProductInfoAiringView : UIView {

	VUIProductInfoAiringLayout* _layout;
	VUILabel* _infoLabel;
	_TVImageView* _logo;

}

@property (nonatomic,retain) VUIProductInfoAiringLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) VUILabel * infoLabel;                             //@synthesize infoLabel=_infoLabel - In the implementation block
@property (nonatomic,retain) _TVImageView * logo;                              //@synthesize logo=_logo - In the implementation block
+(id)configureViewWithElement:(id)arg1 existingView:(id)arg2 ;
+(id)airingTextWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3 ;
+(id)_tintColorForDataSource:(id)arg1 interfaceStyle:(long long)arg2 ;
+(id)airingLogoWithImageDictionary:(id)arg1 layout:(id)arg2 existingView:(id)arg3 ;
-(_TVImageView *)logo;
-(void)setLogo:(_TVImageView *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(VUILabel *)infoLabel;
-(void)setInfoLabel:(VUILabel *)arg1 ;
-(void)setLayout:(VUIProductInfoAiringLayout *)arg1 ;
-(VUIProductInfoAiringLayout *)layout;
-(CGSize)layoutSubviewsWithSize:(CGSize)arg1 computationOnly:(BOOL)arg2 ;
@end

