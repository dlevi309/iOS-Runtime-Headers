/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(VUIProductInfoAiringLayout *)layout;
-(void)setLayout:(VUIProductInfoAiringLayout *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(_TVImageView *)logo;
-(void)setLogo:(_TVImageView *)arg1 ;
-(VUILabel *)infoLabel;
-(void)setInfoLabel:(VUILabel *)arg1 ;
-(CGSize)layoutSubviewsWithSize:(CGSize)arg1 computationOnly:(BOOL)arg2 ;
@end

