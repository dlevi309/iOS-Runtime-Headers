/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIColor;

@interface PUAlbumListSeparatorView : UIView {

	UIView* _separatorLine;
	UIColor* _lineColor;

}

@property (nonatomic,copy) UIColor * lineColor;              //@synthesize lineColor=_lineColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIColor *)lineColor;
-(void)setLineColor:(UIColor *)arg1 ;
@end

