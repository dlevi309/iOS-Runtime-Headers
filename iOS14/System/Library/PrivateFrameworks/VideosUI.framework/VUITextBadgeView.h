/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol VUITextBadgeViewDelegate;
@class NSAttributedString, UIImage, _TVImageView, VUITextBadgeLayout, VUIRentalExpirationLabel, IKViewElement, NSTimer;

@interface VUITextBadgeView : UIView {

	NSAttributedString* _attributedTitle;
	double _strokeSize;
	UIImage* _backgroundImage;
	_TVImageView* _imageView;
	VUITextBadgeLayout* _badgeLayout;
	VUIRentalExpirationLabel* _rentalExpirationLabel;
	id<VUITextBadgeViewDelegate> _delegate;
	IKViewElement* _viewElement;
	NSTimer* _expiryUpdateTimer;
	CGSize _glyphSize;

}

@property (assign,nonatomic) CGSize glyphSize;                                              //@synthesize glyphSize=_glyphSize - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;                                   //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) NSTimer * expiryUpdateTimer;                                   //@synthesize expiryUpdateTimer=_expiryUpdateTimer - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedTitle;                            //@synthesize attributedTitle=_attributedTitle - In the implementation block
@property (assign,nonatomic) double strokeSize;                                             //@synthesize strokeSize=_strokeSize - In the implementation block
@property (nonatomic,retain) UIImage * backgroundImage;                                     //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) _TVImageView * imageView;                                      //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) VUITextBadgeLayout * badgeLayout;                              //@synthesize badgeLayout=_badgeLayout - In the implementation block
@property (nonatomic,retain) VUIRentalExpirationLabel * rentalExpirationLabel;              //@synthesize rentalExpirationLabel=_rentalExpirationLabel - In the implementation block
@property (assign,nonatomic,__weak) id<VUITextBadgeViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
+(BOOL)badgeElementHasContent:(id)arg1 ;
-(NSAttributedString *)attributedTitle;
-(void)setImageView:(_TVImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(_TVImageView *)imageView;
-(id<VUITextBadgeViewDelegate>)delegate;
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(CGSize)_textSize;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id<VUITextBadgeViewDelegate>)arg1 ;
-(CGSize)glyphSize;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)reset;
-(void)_invalidateTimer;
-(UIImage *)backgroundImage;
-(void)_imageLoaded;
-(void)dealloc;
-(void)setGlyphSize:(CGSize)arg1 ;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(void)setElement:(id)arg1 withBadgeLayout:(id)arg2 ;
-(VUITextBadgeLayout *)badgeLayout;
-(void)rentalExpirationLabelNeedsRelayout:(id)arg1 ;
-(void)setBadgeLayout:(VUITextBadgeLayout *)arg1 ;
-(NSTimer *)expiryUpdateTimer;
-(void)setExpiryUpdateTimer:(NSTimer *)arg1 ;
-(void)setStrokeSize:(double)arg1 ;
-(void)setRentalExpirationLabel:(VUIRentalExpirationLabel *)arg1 ;
-(double)strokeSize;
-(VUIRentalExpirationLabel *)rentalExpirationLabel;
@end

