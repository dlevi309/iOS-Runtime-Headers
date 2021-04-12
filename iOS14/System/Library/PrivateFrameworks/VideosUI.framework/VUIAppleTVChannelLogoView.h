/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class _TVImageView, VUIAppleTVChannelLogoLayout, VUILabel;

@interface VUIAppleTVChannelLogoView : UIView {

	_TVImageView* _channelLogoView;
	VUIAppleTVChannelLogoLayout* _layout;
	_TVImageView* _appleTVImageView;
	VUILabel* _channelsLabel;

}

@property (nonatomic,retain) VUIAppleTVChannelLogoLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) _TVImageView * appleTVImageView;                   //@synthesize appleTVImageView=_appleTVImageView - In the implementation block
@property (nonatomic,retain) VUILabel * channelsLabel;                          //@synthesize channelsLabel=_channelsLabel - In the implementation block
@property (nonatomic,retain) _TVImageView * channelLogoView;                    //@synthesize channelLogoView=_channelLogoView - In the implementation block
+(id)logoViewWithChannelImageElement:(id)arg1 layout:(id)arg2 existingView:(id)arg3 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setLayout:(VUIAppleTVChannelLogoLayout *)arg1 ;
-(VUIAppleTVChannelLogoLayout *)layout;
-(CGSize)_layoutSubviewsWithSize:(CGSize)arg1 computationOnly:(BOOL)arg2 ;
-(_TVImageView *)channelLogoView;
-(void)setChannelLogoView:(_TVImageView *)arg1 ;
-(void)setAppleTVImageView:(_TVImageView *)arg1 ;
-(void)setChannelsLabel:(VUILabel *)arg1 ;
-(_TVImageView *)appleTVImageView;
-(VUILabel *)channelsLabel;
@end

