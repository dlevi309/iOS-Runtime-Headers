/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class VUIAppleTVChannelLogoLayout, VUITextLayout, VUIButtonLayout;

@interface VUIFeaturedCellOverlayLayout : NSObject {

	long long _overlayType;
	VUIAppleTVChannelLogoLayout* _channelLogoLayout;
	VUITextLayout* _titleLayout;
	VUITextLayout* _subtitleLayout;
	VUITextLayout* _disclaimerLayout;
	VUIButtonLayout* _buttonLayout;
	VUIButtonLayout* _textButtonLayout;

}

@property (assign,nonatomic) long long overlayType;                                        //@synthesize overlayType=_overlayType - In the implementation block
@property (nonatomic,retain) VUIAppleTVChannelLogoLayout * channelLogoLayout;              //@synthesize channelLogoLayout=_channelLogoLayout - In the implementation block
@property (nonatomic,retain) VUITextLayout * titleLayout;                                  //@synthesize titleLayout=_titleLayout - In the implementation block
@property (nonatomic,retain) VUITextLayout * subtitleLayout;                               //@synthesize subtitleLayout=_subtitleLayout - In the implementation block
@property (nonatomic,retain) VUITextLayout * disclaimerLayout;                             //@synthesize disclaimerLayout=_disclaimerLayout - In the implementation block
@property (nonatomic,retain) VUIButtonLayout * buttonLayout;                               //@synthesize buttonLayout=_buttonLayout - In the implementation block
@property (nonatomic,retain) VUIButtonLayout * textButtonLayout;                           //@synthesize textButtonLayout=_textButtonLayout - In the implementation block
+(id)layoutWithLayout:(id)arg1 overlayType:(long long)arg2 element:(id)arg3 ;
-(long long)overlayType;
-(VUITextLayout *)titleLayout;
-(void)setTitleLayout:(VUITextLayout *)arg1 ;
-(VUITextLayout *)subtitleLayout;
-(void)setSubtitleLayout:(VUITextLayout *)arg1 ;
-(void)setOverlayType:(long long)arg1 ;
-(VUIAppleTVChannelLogoLayout *)channelLogoLayout;
-(VUIButtonLayout *)buttonLayout;
-(void)setChannelLogoLayout:(VUIAppleTVChannelLogoLayout *)arg1 ;
-(void)_setupLayouts;
-(id)initWithOverlayType:(long long)arg1 ;
-(VUITextLayout *)disclaimerLayout;
-(void)setDisclaimerLayout:(VUITextLayout *)arg1 ;
-(void)setButtonLayout:(VUIButtonLayout *)arg1 ;
-(VUIButtonLayout *)textButtonLayout;
-(void)setTextButtonLayout:(VUIButtonLayout *)arg1 ;
@end

