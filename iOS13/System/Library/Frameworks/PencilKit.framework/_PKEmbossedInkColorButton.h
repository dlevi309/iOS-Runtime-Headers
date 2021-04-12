/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

