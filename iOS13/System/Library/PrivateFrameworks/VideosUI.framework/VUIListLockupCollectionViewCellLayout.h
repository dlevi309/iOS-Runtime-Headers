/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <TVMLKit/TVViewLayout.h>

@class VUITextLayout, TVImageLayout;

@interface VUIListLockupCollectionViewCellLayout : TVViewLayout {

	long long _imagePosition;
	VUITextLayout* _titleTextLayout;
	VUITextLayout* _subtitleTextLayout;
	VUITextLayout* _descriptionTextLayout;
	TVImageLayout* _imageLayout;
	TVImageLayout* _appIconLayout;
	TVImageLayout* _monogramImageLayout;

}

@property (assign,nonatomic) long long imagePosition;                            //@synthesize imagePosition=_imagePosition - In the implementation block
@property (nonatomic,retain) VUITextLayout * titleTextLayout;                    //@synthesize titleTextLayout=_titleTextLayout - In the implementation block
@property (nonatomic,retain) VUITextLayout * subtitleTextLayout;                 //@synthesize subtitleTextLayout=_subtitleTextLayout - In the implementation block
@property (nonatomic,retain) VUITextLayout * descriptionTextLayout;              //@synthesize descriptionTextLayout=_descriptionTextLayout - In the implementation block
@property (nonatomic,retain) TVImageLayout * imageLayout;                        //@synthesize imageLayout=_imageLayout - In the implementation block
@property (nonatomic,retain) TVImageLayout * appIconLayout;                      //@synthesize appIconLayout=_appIconLayout - In the implementation block
@property (nonatomic,retain) TVImageLayout * monogramImageLayout;                //@synthesize monogramImageLayout=_monogramImageLayout - In the implementation block
+(CGSize)_defaultImageSize;
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
+(CGSize)_defaultAppIconSize;
-(id)init;
-(long long)imagePosition;
-(void)setImagePosition:(long long)arg1 ;
-(TVImageLayout *)imageLayout;
-(VUITextLayout *)titleTextLayout;
-(VUITextLayout *)descriptionTextLayout;
-(void)setImageLayout:(TVImageLayout *)arg1 ;
-(TVImageLayout *)appIconLayout;
-(void)setAppIconLayout:(TVImageLayout *)arg1 ;
-(VUITextLayout *)subtitleTextLayout;
-(TVImageLayout *)monogramImageLayout;
-(void)setTitleTextLayout:(VUITextLayout *)arg1 ;
-(void)setSubtitleTextLayout:(VUITextLayout *)arg1 ;
-(void)setDescriptionTextLayout:(VUITextLayout *)arg1 ;
-(void)setMonogramImageLayout:(TVImageLayout *)arg1 ;
@end

