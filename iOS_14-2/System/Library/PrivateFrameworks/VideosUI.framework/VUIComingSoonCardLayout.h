/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <TVMLKit/TVViewLayout.h>

@class VUITextLayout;

@interface VUIComingSoonCardLayout : TVViewLayout {

	VUITextLayout* _titleLayout;
	VUITextLayout* _textLayout;
	TVCornerRadii _borderRadii;

}

@property (nonatomic,readonly) VUITextLayout * titleLayout;              //@synthesize titleLayout=_titleLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * textLayout;               //@synthesize textLayout=_textLayout - In the implementation block
@property (assign,nonatomic) TVCornerRadii borderRadii;                  //@synthesize borderRadii=_borderRadii - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
-(id)init;
-(VUITextLayout *)textLayout;
-(TVCornerRadii)borderRadii;
-(void)setBorderRadii:(TVCornerRadii)arg1 ;
-(VUITextLayout *)titleLayout;
@end

