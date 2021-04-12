/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(VUITextLayout *)titleLayout;
-(void)setBorderRadii:(TVCornerRadii)arg1 ;
@end

