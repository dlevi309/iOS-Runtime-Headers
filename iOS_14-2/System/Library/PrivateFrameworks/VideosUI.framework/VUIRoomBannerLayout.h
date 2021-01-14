/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout, VUITextLayout;

@interface VUIRoomBannerLayout : TVViewLayout {

	TVImageLayout* _backgroundImageLayout;
	VUITextLayout* _titleTextLayout;
	VUITextLayout* _descriptionTextLayout;

}

@property (nonatomic,retain) TVImageLayout * backgroundImageLayout;              //@synthesize backgroundImageLayout=_backgroundImageLayout - In the implementation block
@property (nonatomic,retain) VUITextLayout * titleTextLayout;                    //@synthesize titleTextLayout=_titleTextLayout - In the implementation block
@property (nonatomic,retain) VUITextLayout * descriptionTextLayout;              //@synthesize descriptionTextLayout=_descriptionTextLayout - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
-(id)init;
-(VUITextLayout *)titleTextLayout;
-(VUITextLayout *)descriptionTextLayout;
-(void)setTitleTextLayout:(VUITextLayout *)arg1 ;
-(void)setDescriptionTextLayout:(VUITextLayout *)arg1 ;
-(TVImageLayout *)backgroundImageLayout;
-(void)setBackgroundImageLayout:(TVImageLayout *)arg1 ;
@end

