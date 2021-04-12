/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <TVMLKit/TVViewLayout.h>

@class VUIScoreboardLayout, VUITextBadgeLayout, TVImageLayout;

@interface VUISportsOverlayLayout : TVViewLayout {

	VUIScoreboardLayout* _scoreboardLayout;
	VUITextBadgeLayout* _textBadgeLayout;
	TVImageLayout* _appImageLayout;
	TVImageLayout* _logoImageLayout;

}

@property (nonatomic,retain) VUIScoreboardLayout * scoreboardLayout;              //@synthesize scoreboardLayout=_scoreboardLayout - In the implementation block
@property (nonatomic,retain) VUITextBadgeLayout * textBadgeLayout;                //@synthesize textBadgeLayout=_textBadgeLayout - In the implementation block
@property (nonatomic,retain) TVImageLayout * appImageLayout;                      //@synthesize appImageLayout=_appImageLayout - In the implementation block
@property (nonatomic,retain) TVImageLayout * logoImageLayout;                     //@synthesize logoImageLayout=_logoImageLayout - In the implementation block
+(id)overlayLayoutForElement:(id)arg1 cardLayoutType:(long long)arg2 ;
+(long long)_scoreboardTypeForElement:(id)arg1 ;
+(id)_sportsOverlayALayoutWithElement:(id)arg1 ;
+(id)_sportsOverlayBLayoutWithElement:(id)arg1 ;
+(id)_sportsOverlayCLayoutWithElement:(id)arg1 ;
-(TVImageLayout *)logoImageLayout;
-(TVImageLayout *)appImageLayout;
-(VUIScoreboardLayout *)scoreboardLayout;
-(void)setScoreboardLayout:(VUIScoreboardLayout *)arg1 ;
-(VUITextBadgeLayout *)textBadgeLayout;
-(void)setTextBadgeLayout:(VUITextBadgeLayout *)arg1 ;
-(void)setAppImageLayout:(TVImageLayout *)arg1 ;
-(void)setLogoImageLayout:(TVImageLayout *)arg1 ;
@end

