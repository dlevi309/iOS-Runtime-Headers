/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol VUITextBadgeViewDelegate;
@class UIImage, _TVImageView, VUITextBadgeLayout, NSAttributedString, IKViewElement, NSTimer;

@interface VUITextBadgeView : UIView {

	double _strokeSize;
	UIImage* _backgroundImage;
	_TVImageView* _imageView;
	VUITextBadgeLayout* _badgeLayout;
	id<VUITextBadgeViewDelegate> _delegate;
	NSAttributedString* _attributedTitle;
	IKViewElement* _viewElement;
	NSTimer* _expiryUpdateTimer;
	CGSize _glyphSize;

}

@property (nonatomic,copy) NSAttributedString * attributedTitle;                        //@synthesize attributedTitle=_attributedTitle - In the implementation block
@property (assign,nonatomic) CGSize glyphSize;                                          //@synthesize glyphSize=_glyphSize - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;                               //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) NSTimer * expiryUpdateTimer;                               //@synthesize expiryUpdateTimer=_expiryUpdateTimer - In the implementation block
@property (assign,nonatomic) double strokeSize;                                         //@synthesize strokeSize=_strokeSize - In the implementation block
@property (nonatomic,retain) UIImage * backgroundImage;                                 //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) _TVImageView * imageView;                                  //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) VUITextBadgeLayout * badgeLayout;                          //@synthesize badgeLayout=_badgeLayout - In the implementation block
@property (assign,nonatomic,__weak) id<VUITextBadgeViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)badgeElementHasContent:(id)arg1 ;
-(void)dealloc;
-(id<VUITextBadgeViewDelegate>)delegate;
-(void)setDelegate:(id<VUITextBadgeViewDelegate>)arg1 ;
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedTitle;
-(void)reset;
-(UIImage *)backgroundImage;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(void)_invalidateTimer;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(_TVImageView *)imageView;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)glyphSize;
-(void)setImageView:(_TVImageView *)arg1 ;
-(CGSize)_textSize;
-(void)_imageLoaded;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(void)setGlyphSize:(CGSize)arg1 ;
-(void)setElement:(id)arg1 withBadgeLayout:(id)arg2 ;
-(VUITextBadgeLayout *)badgeLayout;
-(void)setBadgeLayout:(VUITextBadgeLayout *)arg1 ;
-(NSTimer *)expiryUpdateTimer;
-(void)setExpiryUpdateTimer:(NSTimer *)arg1 ;
-(void)setStrokeSize:(double)arg1 ;
-(double)strokeSize;
@end

