/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUI.framework/CarPlayUI
*/

#import <CarPlayUI/CarPlayUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CPUITitleView, UILabel, CPUILabelButton, NSString, UIStackView;

@interface CPUISongDetailsView : UIView {

	unsigned long long _fontStyle;
	CPUITitleView* _titleView;
	UILabel* _artistLabel;
	CPUILabelButton* _albumArtistLabelButton;
	NSString* _trackTitle;
	NSString* _albumTitle;
	NSString* _artistName;
	UIStackView* _stackView;
	CGSize _maximumTitleViewSize;

}

@property (nonatomic,retain) UIStackView * stackView;                                 //@synthesize stackView=_stackView - In the implementation block
@property (assign,nonatomic) unsigned long long fontStyle;                            //@synthesize fontStyle=_fontStyle - In the implementation block
@property (nonatomic,readonly) CPUITitleView * titleView;                             //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) UILabel * artistLabel;                                   //@synthesize artistLabel=_artistLabel - In the implementation block
@property (nonatomic,readonly) CPUILabelButton * albumArtistLabelButton;              //@synthesize albumArtistLabelButton=_albumArtistLabelButton - In the implementation block
@property (nonatomic,retain) NSString * trackTitle;                                   //@synthesize trackTitle=_trackTitle - In the implementation block
@property (nonatomic,retain) NSString * albumTitle;                                   //@synthesize albumTitle=_albumTitle - In the implementation block
@property (nonatomic,retain) NSString * artistName;                                   //@synthesize artistName=_artistName - In the implementation block
@property (assign,nonatomic) CGSize maximumTitleViewSize;                             //@synthesize maximumTitleViewSize=_maximumTitleViewSize - In the implementation block
+(double)minimumHeightForTrackInfoFontStyle:(unsigned long long)arg1 ;
+(double)maximumHeightForTrackInfoFontStyle:(unsigned long long)arg1 ;
-(void)setFontStyle:(unsigned long long)arg1 ;
-(CGSize)intrinsicContentSize;
-(CPUITitleView *)titleView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setArtistName:(NSString *)arg1 ;
-(UIStackView *)stackView;
-(NSString *)artistName;
-(unsigned long long)fontStyle;
-(NSString *)albumTitle;
-(void)setAlbumTitle:(NSString *)arg1 ;
-(void)_updateFont;
-(void)setStackView:(UIStackView *)arg1 ;
-(void)_updateNumberOfLines;
-(CPUILabelButton *)albumArtistLabelButton;
-(CGSize)maximumTitleViewSize;
-(UILabel *)artistLabel;
-(void)setTrackTitle:(NSString *)arg1 ;
-(void)setMaximumTitleViewSize:(CGSize)arg1 ;
-(void)setArtistLabel:(UILabel *)arg1 ;
-(NSString *)trackTitle;
@end

