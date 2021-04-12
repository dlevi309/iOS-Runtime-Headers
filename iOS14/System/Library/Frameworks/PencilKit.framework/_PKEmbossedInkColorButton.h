/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/_PKInkColorButton.h>

@class UIImageView;

@interface _PKEmbossedInkColorButton : _PKInkColorButton {

	UIImageView* _colorImageView;
	UIImageView* _embossImageView;

}

@property (nonatomic,retain) UIImageView * colorImageView;               //@synthesize colorImageView=_colorImageView - In the implementation block
@property (nonatomic,retain) UIImageView * embossImageView;              //@synthesize embossImageView=_embossImageView - In the implementation block
+(id)colorFillImageIsCompact:(BOOL)arg1 ;
-(void)layoutSubviews;
-(id)initWithColor:(id)arg1 isCompact:(BOOL)arg2 ;
-(UIImageView *)embossImageView;
-(void)setEmbossImageView:(UIImageView *)arg1 ;
-(UIImageView *)colorImageView;
-(void)setColorImageView:(UIImageView *)arg1 ;
@end

