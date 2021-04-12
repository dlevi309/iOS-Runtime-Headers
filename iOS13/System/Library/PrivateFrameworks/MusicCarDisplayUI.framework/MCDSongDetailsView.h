/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
*/

#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
#import <UIKitCore/UIView.h>

@class MCDTitleView, UILabel, MCDLabelButton, NSString, UIStackView;

@interface MCDSongDetailsView : UIView {

	BOOL _isCompactHeight;
	unsigned long long _fontStyle;
	MCDTitleView* _titleView;
	UILabel* _artistLabel;
	MCDLabelButton* _albumArtistLabelButton;
	NSString* _trackTitle;
	NSString* _albumTitle;
	NSString* _artistName;
	UIStackView* _stackView;
	CGRect _infoRect;

}

@property (nonatomic,retain) UIStackView * stackView;                                //@synthesize stackView=_stackView - In the implementation block
@property (assign,nonatomic) CGRect infoRect;                                        //@synthesize infoRect=_infoRect - In the implementation block
@property (assign,nonatomic) BOOL isCompactHeight;                                   //@synthesize isCompactHeight=_isCompactHeight - In the implementation block
@property (assign,nonatomic) unsigned long long fontStyle;                           //@synthesize fontStyle=_fontStyle - In the implementation block
@property (nonatomic,readonly) MCDTitleView * titleView;                             //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) UILabel * artistLabel;                                  //@synthesize artistLabel=_artistLabel - In the implementation block
@property (nonatomic,readonly) MCDLabelButton * albumArtistLabelButton;              //@synthesize albumArtistLabelButton=_albumArtistLabelButton - In the implementation block
@property (nonatomic,retain) NSString * trackTitle;                                  //@synthesize trackTitle=_trackTitle - In the implementation block
@property (nonatomic,retain) NSString * albumTitle;                                  //@synthesize albumTitle=_albumTitle - In the implementation block
@property (nonatomic,retain) NSString * artistName;                                  //@synthesize artistName=_artistName - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(double)_preferredHeight;
-(UIStackView *)stackView;
-(MCDTitleView *)titleView;
-(void)setFontStyle:(unsigned long long)arg1 ;
-(void)setStackView:(UIStackView *)arg1 ;
-(unsigned long long)fontStyle;
-(NSString *)artistName;
-(void)setArtistName:(NSString *)arg1 ;
-(NSString *)albumTitle;
-(void)_updateFont;
-(void)setAlbumTitle:(NSString *)arg1 ;
-(BOOL)isCompactHeight;
-(MCDLabelButton *)albumArtistLabelButton;
-(void)setTrackTitle:(NSString *)arg1 ;
-(CGRect)infoRect;
-(void)setInfoRect:(CGRect)arg1 ;
-(void)setIsCompactHeight:(BOOL)arg1 ;
-(void)_updateNumberOfLines;
-(UILabel *)artistLabel;
-(void)setArtistLabel:(UILabel *)arg1 ;
-(NSString *)trackTitle;
@end

