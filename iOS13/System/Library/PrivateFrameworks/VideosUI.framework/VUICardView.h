/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUICardViewLayoutFactory, _TVImageView, NSArray, UIView, VUIButton, NSString;

@interface VUICardView : UIView {

	VUICardViewLayoutFactory* _layoutFactory;
	_TVImageView* _imageView;
	_TVImageView* _appImageView;
	NSArray* _labelViews;
	UIView* _overlayView;
	VUIButton* _button;
	NSString* _debugString;
	CGSize _imageSize;

}

@property (nonatomic,readonly) VUICardViewLayoutFactory * layoutFactory;              //@synthesize layoutFactory=_layoutFactory - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                                        //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,retain) _TVImageView * imageView;                                //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) _TVImageView * appImageView;                             //@synthesize appImageView=_appImageView - In the implementation block
@property (nonatomic,copy) NSArray * labelViews;                                      //@synthesize labelViews=_labelViews - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                    //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) VUIButton * button;                                      //@synthesize button=_button - In the implementation block
@property (nonatomic,copy) NSString * debugString;                                    //@synthesize debugString=_debugString - In the implementation block
-(void)dealloc;
-(VUIButton *)button;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(_TVImageView *)imageView;
-(void)setHighlighted:(BOOL)arg1 ;
-(CGSize)imageSize;
-(void)setOverlayView:(UIView *)arg1 ;
-(void)setImageView:(_TVImageView *)arg1 ;
-(void)setButton:(VUIButton *)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
-(UIView *)overlayView;
-(NSString *)debugString;
-(void)setDebugString:(NSString *)arg1 ;
-(NSArray *)labelViews;
-(void)setLabelViews:(NSArray *)arg1 ;
-(void)prepareForCellReuse;
-(VUICardViewLayoutFactory *)layoutFactory;
-(void)_mainImageLoaded;
-(double)_maxTextWidthForImagePosition:(long long)arg1 width:(double)arg2 appImageLayout:(id)arg3 textLayout:(id)arg4 ;
-(id)initWithFrame:(CGRect)arg1 layoutFactory:(id)arg2 ;
-(void)setAppImageView:(_TVImageView *)arg1 ;
-(_TVImageView *)appImageView;
@end

