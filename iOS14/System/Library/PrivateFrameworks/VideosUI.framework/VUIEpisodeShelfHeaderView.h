/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setButton:(VUISeasonPickerButton *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(CGSize)_layoutWithSize:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
-(void)switchToIndex:(unsigned long long)arg1 ;
@end

