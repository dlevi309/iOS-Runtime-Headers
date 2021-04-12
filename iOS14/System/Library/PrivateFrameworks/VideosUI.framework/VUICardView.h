/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUICardViewLayoutFactory, _TVImageView, NSArray, UIView, VUIButton, NSString;

@interface VUICardView : UIView {

	VUICardViewLayoutFactory* _layoutFactory;
	/*^block*/id _imageSize;
	_TVImageView* _imageView;
	_TVImageView* _appImageView;
	NSArray* _labelViews;
	UIView* _overlayView;
	VUIButton* _button;
	NSString* _debugString;

}

@property (nonatomic,readonly) VUICardViewLayoutFactory * layoutFactory;              //@synthesize layoutFactory=_layoutFactory - In the implementation block
@property (nonatomic,copy) id imageSize;                                              //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,retain) _TVImageView * imageView;                                //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) _TVImageView * appImageView;                             //@synthesize appImageView=_appImageView - In the implementation block
@property (nonatomic,copy) NSArray * labelViews;                                      //@synthesize labelViews=_labelViews - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                    //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) VUIButton * button;                                      //@synthesize button=_button - In the implementation block
@property (nonatomic,copy) NSString * debugString;                                    //@synthesize debugString=_debugString - In the implementation block
-(void)setImageView:(_TVImageView *)arg1 ;
-(id)imageSize;
-(VUIButton *)button;
-(UIView *)overlayView;
-(_TVImageView *)imageView;
-(void)setOverlayView:(UIView *)arg1 ;
-(NSString *)debugString;
-(void)setDebugString:(NSString *)arg1 ;
-(void)setButton:(VUIButton *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setImageSize:(id)arg1 ;
-(void)dealloc;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)prepareForCellReuse;
-(VUICardViewLayoutFactory *)layoutFactory;
-(void)_mainImageLoaded;
-(double)_maxTextWidthForImagePosition:(long long)arg1 width:(double)arg2 appImageLayout:(id)arg3 textLayout:(id)arg4 ;
-(id)initWithFrame:(CGRect)arg1 layoutFactory:(id)arg2 ;
-(void)setAppImageView:(_TVImageView *)arg1 ;
-(void)setLabelViews:(NSArray *)arg1 ;
-(_TVImageView *)appImageView;
-(NSArray *)labelViews;
@end

