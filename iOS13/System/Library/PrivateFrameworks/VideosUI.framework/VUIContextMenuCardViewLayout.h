/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <TVMLKit/TVViewLayout.h>

@class VUITextLayout, TVImageLayout;

@interface VUIContextMenuCardViewLayout : TVViewLayout {

	VUITextLayout* _titleTextViewLayout;
	VUITextLayout* _subTitleTextViewLayout;
	TVImageLayout* _coverImageViewLayout;
	TVImageLayout* _badgeImageViewLayout;

}

@property (nonatomic,retain) VUITextLayout * titleTextViewLayout;                 //@synthesize titleTextViewLayout=_titleTextViewLayout - In the implementation block
@property (nonatomic,retain) VUITextLayout * subTitleTextViewLayout;              //@synthesize subTitleTextViewLayout=_subTitleTextViewLayout - In the implementation block
@property (nonatomic,retain) TVImageLayout * coverImageViewLayout;                //@synthesize coverImageViewLayout=_coverImageViewLayout - In the implementation block
@property (nonatomic,retain) TVImageLayout * badgeImageViewLayout;                //@synthesize badgeImageViewLayout=_badgeImageViewLayout - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
-(id)init;
-(VUITextLayout *)titleTextViewLayout;
-(VUITextLayout *)subTitleTextViewLayout;
-(TVImageLayout *)coverImageViewLayout;
-(void)setCoverImageViewLayout:(TVImageLayout *)arg1 ;
-(TVImageLayout *)badgeImageViewLayout;
-(void)setBadgeImageViewLayout:(TVImageLayout *)arg1 ;
-(void)setTitleTextViewLayout:(VUITextLayout *)arg1 ;
-(void)setSubTitleTextViewLayout:(VUITextLayout *)arg1 ;
@end

