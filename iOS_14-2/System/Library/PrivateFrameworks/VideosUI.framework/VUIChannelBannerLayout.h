/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <TVMLKit/TVViewLayout.h>

@class VUIAppleTVChannelLogoLayout, VUITextLayout, VUIButtonLayout, VUIProductUberBackgroundViewLayout;

@interface VUIChannelBannerLayout : TVViewLayout {

	BOOL _isSubscribed;
	BOOL _descriptionPreferredOnPhoneSizeClass;
	VUIAppleTVChannelLogoLayout* _channelLogoLayout;
	VUITextLayout* _descriptionTextLayout;
	VUITextLayout* _textLayout;
	VUITextLayout* _disclaimerTextLayout;
	VUIButtonLayout* _subscribeButtonLayout;
	VUIProductUberBackgroundViewLayout* _uberBackgroundViewLayout;

}

@property (assign,nonatomic) BOOL isSubscribed;                                                          //@synthesize isSubscribed=_isSubscribed - In the implementation block
@property (assign,nonatomic) BOOL descriptionPreferredOnPhoneSizeClass;                                  //@synthesize descriptionPreferredOnPhoneSizeClass=_descriptionPreferredOnPhoneSizeClass - In the implementation block
@property (nonatomic,retain) VUIAppleTVChannelLogoLayout * channelLogoLayout;                            //@synthesize channelLogoLayout=_channelLogoLayout - In the implementation block
@property (nonatomic,retain) VUITextLayout * descriptionTextLayout;                                      //@synthesize descriptionTextLayout=_descriptionTextLayout - In the implementation block
@property (nonatomic,retain) VUITextLayout * textLayout;                                                 //@synthesize textLayout=_textLayout - In the implementation block
@property (nonatomic,retain) VUITextLayout * disclaimerTextLayout;                                       //@synthesize disclaimerTextLayout=_disclaimerTextLayout - In the implementation block
@property (nonatomic,retain) VUIButtonLayout * subscribeButtonLayout;                                    //@synthesize subscribeButtonLayout=_subscribeButtonLayout - In the implementation block
@property (nonatomic,retain) VUIProductUberBackgroundViewLayout * uberBackgroundViewLayout;              //@synthesize uberBackgroundViewLayout=_uberBackgroundViewLayout - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
+(void)_updateTextColorForDisclaimerLayout:(id)arg1 hasBgImage:(BOOL)arg2 ;
+(void)_updateTextColorForDescriptionLayout:(id)arg1 hasBgImage:(BOOL)arg2 ;
-(id)init;
-(VUITextLayout *)textLayout;
-(BOOL)isSubscribed;
-(void)setTextLayout:(VUITextLayout *)arg1 ;
-(void)setIsSubscribed:(BOOL)arg1 ;
-(VUITextLayout *)descriptionTextLayout;
-(void)setDescriptionTextLayout:(VUITextLayout *)arg1 ;
-(VUIProductUberBackgroundViewLayout *)uberBackgroundViewLayout;
-(void)setDescriptionPreferredOnPhoneSizeClass:(BOOL)arg1 ;
-(VUIAppleTVChannelLogoLayout *)channelLogoLayout;
-(VUITextLayout *)disclaimerTextLayout;
-(VUIButtonLayout *)subscribeButtonLayout;
-(BOOL)descriptionPreferredOnPhoneSizeClass;
-(void)setChannelLogoLayout:(VUIAppleTVChannelLogoLayout *)arg1 ;
-(void)setDisclaimerTextLayout:(VUITextLayout *)arg1 ;
-(void)setSubscribeButtonLayout:(VUIButtonLayout *)arg1 ;
-(void)setUberBackgroundViewLayout:(VUIProductUberBackgroundViewLayout *)arg1 ;
@end

