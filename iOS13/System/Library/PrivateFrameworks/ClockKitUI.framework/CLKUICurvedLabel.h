/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
*/

#import <ClockKitUI/ClockKitUI-Structs.h>
#import <UIKitCore/UILabel.h>
#import <libobjc.A.dylib/CLKUILabel.h>

@class NSTextStorage, NSLayoutManager, NSTextContainer, NSNumber, UIColor, NSAttributedString, UIFont, UIView, NSString;

@interface CLKUICurvedLabel : UILabel <CLKUILabel> {

	NSTextStorage* _textStorage;
	NSLayoutManager* _layoutManager;
	NSTextContainer* _textContainer;
	BOOL _storageIsNonAttributedText;
	double _maxTextWidth;
	NSNumber* _isTextTruncated;
	CGRect _cachedBounds;
	CGRect _cachedGlyphsBoundingRect;
	CGSize _cachedSize;
	BOOL _cachedSizeIsValid;
	UIColor* _textColor;
	NSAttributedString* _attributedStringWithoutColorModification;
	NSAttributedString* _attributedStringUnmodified;
	double _viewAlpha;
	UIFont* _font;
	BOOL _hasMonospacedNumbers;
	BOOL _interior;
	BOOL _attributedTextProvidesColor;
	double _circleRadius;
	double _centerAngle;
	double _maxAngularWidth;
	double _tracking;
	unsigned long long _imagePlacement;
	double _imagePadding;
	UIView* _imageView;
	double _animationAlpha;

}

@property (assign,nonatomic) double circleRadius;                            //@synthesize circleRadius=_circleRadius - In the implementation block
@property (assign,nonatomic) BOOL interior;                                  //@synthesize interior=_interior - In the implementation block
@property (assign,nonatomic) double centerAngle;                             //@synthesize centerAngle=_centerAngle - In the implementation block
@property (assign,nonatomic) double maxAngularWidth;                         //@synthesize maxAngularWidth=_maxAngularWidth - In the implementation block
@property (nonatomic,readonly) double maxLinearWidth; 
@property (nonatomic,readonly) double maxLinearTextWidth; 
@property (nonatomic,readonly) BOOL isTextTruncated; 
@property (assign,nonatomic) double tracking;                                //@synthesize tracking=_tracking - In the implementation block
@property (assign,nonatomic) BOOL attributedTextProvidesColor;               //@synthesize attributedTextProvidesColor=_attributedTextProvidesColor - In the implementation block
@property (nonatomic,readonly) CGRect textBoundingRect; 
@property (assign,nonatomic) unsigned long long imagePlacement;              //@synthesize imagePlacement=_imagePlacement - In the implementation block
@property (assign,nonatomic) double imagePadding;                            //@synthesize imagePadding=_imagePadding - In the implementation block
@property (assign,nonatomic,__weak) UIView * imageView;                      //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) double animationAlpha;                          //@synthesize animationAlpha=_animationAlpha - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) long long textAlignment; 
@property (nonatomic,readonly) double _lastLineBaseline; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (nonatomic,readonly) UIEdgeInsets opticalInsets; 
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)alpha;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)layoutSubviews;
-(UIView *)imageView;
-(UIFont *)font;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedText;
-(UIColor *)textColor;
-(double)_lastLineBaseline;
-(void)setTracking:(double)arg1 ;
-(double)_distance;
-(void)setImageView:(UIView *)arg1 ;
-(void)drawTextInRect:(CGRect)arg1 ;
-(void)_setAttributedText:(id)arg1 ;
-(BOOL)_hasImage;
-(double)tracking;
-(void)_updateTextColor;
-(void)setImagePadding:(double)arg1 ;
-(double)imagePadding;
-(void)invalidateCachedSize;
-(void)_updateMaxSize;
-(CGRect)_glyphsBoundingRect;
-(CGPoint)_offsetOfBoundingRect:(CGRect)arg1 inRect:(CGRect)arg2 ;
-(CTLineRef)_newLineFromDrawableTextStorage;
-(void)_enumerateTransformsForDrawableCharacters:(/*^block*/id)arg1 ;
-(NSRange)_drawableCharacterRange:(NSRange*)arg1 ;
-(void)setInterior:(BOOL)arg1 ;
-(void)setCircleRadius:(double)arg1 ;
-(void)setCenterAngle:(double)arg1 ;
-(void)setMaxAngularWidth:(double)arg1 ;
-(CGRect)textBoundingRect;
-(double)circleRadius;
-(BOOL)interior;
-(double)centerAngle;
-(double)maxAngularWidth;
-(UIEdgeInsets)opticalInsets;
-(void)_updateTracking;
-(double)_extraWidthForImage;
-(BOOL)attributedTextProvidesColor;
-(void)_transformForImage:(/*^block*/id)arg1 ;
-(unsigned long long)imagePlacement;
-(void)_enumerateTransforms:(BOOL)arg1 callback:(/*^block*/id)arg2 ;
-(double)maxLinearWidth;
-(double)maxLinearTextWidth;
-(BOOL)isTextTruncated;
-(void)setAnimationAlpha:(double)arg1 ;
-(void)setImagePlacement:(unsigned long long)arg1 ;
-(void)setImageView:(id)arg1 placement:(unsigned long long)arg2 padding:(double)arg3 ;
-(void)getTextCenter:(CGPoint*)arg1 startAngle:(double*)arg2 endAngle:(double*)arg3 ;
-(void)setAttributedTextProvidesColor:(BOOL)arg1 ;
-(double)animationAlpha;
@end

