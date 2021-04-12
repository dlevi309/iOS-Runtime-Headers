/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <TVMLKit/TVViewLayout.h>

@class VUITextLayout, TVImageLayout, NSShadow;

@interface VUIButtonLayout : TVViewLayout {

	unsigned long long _type;
	unsigned long long _titleStyle;
	double _cornerRadius;
	VUITextLayout* _titleLayout;
	TVImageLayout* _imageLayout;
	NSShadow* _shadow;
	CGPoint _contentMotionTranslation;

}

@property (nonatomic,readonly) unsigned long long type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long titleStyle;                 //@synthesize titleStyle=_titleStyle - In the implementation block
@property (nonatomic,readonly) double cornerRadius;                           //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,retain) VUITextLayout * titleLayout;                     //@synthesize titleLayout=_titleLayout - In the implementation block
@property (nonatomic,retain) TVImageLayout * imageLayout;                     //@synthesize imageLayout=_imageLayout - In the implementation block
@property (nonatomic,retain) NSShadow * shadow;                               //@synthesize shadow=_shadow - In the implementation block
@property (nonatomic,readonly) CGPoint contentMotionTranslation;              //@synthesize contentMotionTranslation=_contentMotionTranslation - In the implementation block
+(id)standardTitleLayoutWithStyle:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(id)initWithType:(unsigned long long)arg1 ;
-(NSShadow *)shadow;
-(double)cornerRadius;
-(void)setShadow:(NSShadow *)arg1 ;
-(unsigned long long)titleStyle;
-(VUITextLayout *)titleLayout;
-(void)setTitleLayout:(VUITextLayout *)arg1 ;
-(TVImageLayout *)imageLayout;
-(void)setImageLayout:(TVImageLayout *)arg1 ;
-(id)initWithType:(unsigned long long)arg1 titleStyle:(unsigned long long)arg2 ;
-(void)_configurePrimaryButton;
-(void)_configureTextualButton;
-(void)_configureProductSecondaryButton;
-(void)_configureImageButton;
-(void)_configureRoundButton;
-(void)_configureBarButtonItem;
-(void)_configureFooterCellButton;
-(CGPoint)contentMotionTranslation;
@end

