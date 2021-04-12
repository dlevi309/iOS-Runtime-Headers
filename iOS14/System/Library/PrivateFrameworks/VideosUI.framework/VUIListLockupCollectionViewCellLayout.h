/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
+(CGSize)_defaultImageSize;
+(CGSize)_defaultAppIconSize;
-(long long)imagePosition;
-(id)init;
-(void)setImagePosition:(long long)arg1 ;
-(VUITextLayout *)titleTextLayout;
-(VUITextLayout *)descriptionTextLayout;
-(TVImageLayout *)imageLayout;
-(void)setImageLayout:(TVImageLayout *)arg1 ;
-(TVImageLayout *)appIconLayout;
-(void)setAppIconLayout:(TVImageLayout *)arg1 ;
-(VUITextLayout *)subtitleTextLayout;
-(void)setTitleTextLayout:(VUITextLayout *)arg1 ;
-(void)setDescriptionTextLayout:(VUITextLayout *)arg1 ;
-(TVImageLayout *)monogramImageLayout;
-(void)setMonogramImageLayout:(TVImageLayout *)arg1 ;
-(void)setSubtitleTextLayout:(VUITextLayout *)arg1 ;
@end

