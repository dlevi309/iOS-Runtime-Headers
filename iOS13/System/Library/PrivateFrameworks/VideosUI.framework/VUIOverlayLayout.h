/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(VUITextLayout *)titleLayout;
-(void)setTitleLayout:(VUITextLayout *)arg1 ;
-(long long)overlayType;
-(VUITextBadgeLayout *)textBadgeLayout;
-(TVImageLayout *)badgeLayout;
-(VUIProgressBarLayout *)progressBarLayout;
-(void)setTextBadgeLayout:(VUITextBadgeLayout *)arg1 ;
-(void)setProgressBarLayout:(VUIProgressBarLayout *)arg1 ;
-(void)setBadgeLayout:(TVImageLayout *)arg1 ;
-(void)_updateLayoutWithElement:(id)arg1 andType:(long long)arg2 ;
-(void)_updateLayoutWithMediaItem:(id)arg1 type:(long long)arg2 ;
-(id)_navBrickTitleLayout;
-(id)_editorialTitleLayout;
-(id)_spotlightTitleLayout;
-(id)_ribbonTitleLayout;
-(void)setOverlayType:(long long)arg1 ;
@end

