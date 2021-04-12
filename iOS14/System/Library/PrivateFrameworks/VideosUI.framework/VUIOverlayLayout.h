/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <TVMLKit/TVViewLayout.h>

@class VUITextLayout, VUITextBadgeLayout, TVImageLayout, VUIProgressBarLayout;

@interface VUIOverlayLayout : TVViewLayout {

	BOOL _isDarkTheme;
	long long _overlayType;
	VUITextLayout* _titleLayout;
	VUITextBadgeLayout* _textBadgeLayout;
	TVImageLayout* _badgeLayout;
	VUIProgressBarLayout* _progressBarLayout;

}

@property (assign,nonatomic) long long overlayType;                                 //@synthesize overlayType=_overlayType - In the implementation block
@property (nonatomic,retain) VUITextLayout * titleLayout;                           //@synthesize titleLayout=_titleLayout - In the implementation block
@property (nonatomic,retain) VUITextBadgeLayout * textBadgeLayout;                  //@synthesize textBadgeLayout=_textBadgeLayout - In the implementation block
@property (nonatomic,retain) TVImageLayout * badgeLayout;                           //@synthesize badgeLayout=_badgeLayout - In the implementation block
@property (nonatomic,retain) VUIProgressBarLayout * progressBarLayout;              //@synthesize progressBarLayout=_progressBarLayout - In the implementation block
+(id)layoutWithLayout:(id)arg1 overlayType:(long long)arg2 element:(id)arg3 ;
+(id)layoutWithLayout:(id)arg1 overlayType:(long long)arg2 mediaItem:(id)arg3 ;
-(long long)overlayType;
-(VUITextBadgeLayout *)textBadgeLayout;
-(TVImageLayout *)badgeLayout;
-(VUITextLayout *)titleLayout;
-(VUIProgressBarLayout *)progressBarLayout;
-(void)setTextBadgeLayout:(VUITextBadgeLayout *)arg1 ;
-(void)setProgressBarLayout:(VUIProgressBarLayout *)arg1 ;
-(void)setBadgeLayout:(TVImageLayout *)arg1 ;
-(void)setTitleLayout:(VUITextLayout *)arg1 ;
-(void)_updateLayoutWithElement:(id)arg1 andType:(long long)arg2 ;
-(void)_updateLayoutWithMediaItem:(id)arg1 type:(long long)arg2 ;
-(id)_navBrickTitleLayout;
-(id)_editorialTitleLayout;
-(id)_spotlightTitleLayout;
-(id)_ribbonTitleLayout;
-(void)setOverlayType:(long long)arg1 ;
@end

