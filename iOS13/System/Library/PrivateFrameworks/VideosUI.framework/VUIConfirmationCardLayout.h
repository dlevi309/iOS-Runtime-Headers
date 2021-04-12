/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout, VUITextLayout;

@interface VUIConfirmationCardLayout : TVViewLayout {

	TVImageLayout* _badgeLayout;
	VUITextLayout* _textLayout;
	TVCornerRadii _borderRadii;

}

@property (assign,nonatomic) TVCornerRadii borderRadii;                  //@synthesize borderRadii=_borderRadii - In the implementation block
@property (nonatomic,readonly) TVImageLayout * badgeLayout;              //@synthesize badgeLayout=_badgeLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * textLayout;               //@synthesize textLayout=_textLayout - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
-(id)init;
-(VUITextLayout *)textLayout;
-(TVCornerRadii)borderRadii;
-(void)setBorderRadii:(TVCornerRadii)arg1 ;
-(TVImageLayout *)badgeLayout;
@end

