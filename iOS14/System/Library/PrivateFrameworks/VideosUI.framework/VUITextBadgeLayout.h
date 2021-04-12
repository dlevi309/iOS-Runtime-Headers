/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <TVMLKit/TVViewLayout.h>

@class NSArray, VUITextLayout, TVImageLayout;

@interface VUITextBadgeLayout : TVViewLayout {

	unsigned long long _badgeKind;
	double _cornerRadius;
	NSArray* _gradientBgColors;
	VUITextLayout* _textLayout;
	TVImageLayout* _imageLayout;

}

@property (assign,nonatomic) unsigned long long badgeKind;              //@synthesize badgeKind=_badgeKind - In the implementation block
@property (assign,nonatomic) double cornerRadius;                       //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,retain) NSArray * gradientBgColors;                //@synthesize gradientBgColors=_gradientBgColors - In the implementation block
@property (nonatomic,retain) VUITextLayout * textLayout;                //@synthesize textLayout=_textLayout - In the implementation block
@property (nonatomic,retain) TVImageLayout * imageLayout;               //@synthesize imageLayout=_imageLayout - In the implementation block
+(unsigned long long)textBadgeTypeFromString:(id)arg1 ;
+(id)layoutWithViewElement:(id)arg1 withTextBadgeType:(unsigned long long)arg2 ;
+(id)_spotlightBadgeLayoutWithViewElement:(id)arg1 ;
+(id)_textBadgeLayoutWithViewElement:(id)arg1 withBadgeType:(unsigned long long)arg2 ;
+(long long)_badgeSizeForElement:(id)arg1 ;
+(id)_glyphImageLayoutWithTintColor:(id)arg1 viewElement:(id)arg2 ;
+(id)layoutWithViewElement:(id)arg1 ;
-(double)cornerRadius;
-(VUITextLayout *)textLayout;
-(void)setTextLayout:(VUITextLayout *)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TVImageLayout *)imageLayout;
-(void)setImageLayout:(TVImageLayout *)arg1 ;
-(void)setBadgeKind:(unsigned long long)arg1 ;
-(void)_updateTextColorWithViewElement:(id)arg1 defaultColor:(id)arg2 ;
-(void)_updateBgColorWithViewElement:(id)arg1 defaultColor:(id)arg2 ;
-(void)setGradientBgColors:(NSArray *)arg1 ;
-(unsigned long long)badgeKind;
-(NSArray *)gradientBgColors;
@end

