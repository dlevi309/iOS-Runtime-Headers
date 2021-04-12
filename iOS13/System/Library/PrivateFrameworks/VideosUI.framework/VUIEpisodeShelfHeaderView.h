/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class VUISeasonPickerButton, IKViewElement;

@interface VUIEpisodeShelfHeaderView : UICollectionReusableView {

	VUISeasonPickerButton* _button;
	IKViewElement* _viewElement;

}

@property (nonatomic,retain) IKViewElement * viewElement;                   //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,readonly) VUISeasonPickerButton * button;              //@synthesize button=_button - In the implementation block
+(id)configureWithElement:(id)arg1 existingView:(id)arg2 ;
-(VUISeasonPickerButton *)button;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setButton:(VUISeasonPickerButton *)arg1 ;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(CGSize)_layoutWithSize:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
-(void)switchToIndex:(unsigned long long)arg1 ;
@end

