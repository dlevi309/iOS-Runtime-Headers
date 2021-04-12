/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UILabel.h>

@class NSTextStorage, NSLayoutManager, NSTextContainer, UIColor, UIFont, NSDictionary;

@interface PKCurvedTextLabel : UILabel {

	NSTextStorage* _textStorage;
	NSLayoutManager* _layoutManager;
	NSTextContainer* _textContainer;
	double _textWidth;
	CGRect _cachedBounds;
	CGRect _cachedGlyphsBoundingRect;
	CGSize _cachedSize;
	BOOL _cachedSizeIsValid;
	UIColor* _textColor;
	UIFont* _font;
	BOOL _hasMonospacedNumbers;
	BOOL _interior;
	double _circleRadius;
	double _centerAngle;
	double _maxAngularWidth;

}

@property (assign,nonatomic) double circleRadius;                               //@synthesize circleRadius=_circleRadius - In the implementation block
@property (assign,nonatomic) BOOL interior;                                     //@synthesize interior=_interior - In the implementation block
@property (assign,nonatomic) double centerAngle;                                //@synthesize centerAngle=_centerAngle - In the implementation block
@property (assign,nonatomic) double maxAngularWidth;                            //@synthesize maxAngularWidth=_maxAngularWidth - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * textAttributes; 
@property (nonatomic,readonly) double linearWidth; 
@property (nonatomic,readonly) CGRect textBoundingRect; 
-(id)attributedText;
-(void)_updateTextColor;
-(id)textColor;
-(void)setAttributedText:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(void)drawTextInRect:(CGRect)arg1 ;
-(NSDictionary *)textAttributes;
-(BOOL)interior;
-(double)_distance;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)text;
-(void)_updateMaxSize;
-(void)invalidateCachedSize;
-(CGRect)_glyphsBoundingRect;
-(CGPoint)_offsetOfBoundingRect:(CGRect)arg1 inRect:(CGRect)arg2 ;
-(CTLineRef)_newLineFromDrawableTextStorage;
-(void)_enumerateTransformsForDrawableCharacters:(/*^block*/id)arg1 ;
-(NSRange)_drawableCharacterRange:(NSRange*)arg1 ;
-(void)setInterior:(BOOL)arg1 ;
-(void)setCircleRadius:(double)arg1 ;
-(void)setCenterAngle:(double)arg1 ;
-(void)setMaxAngularWidth:(double)arg1 ;
-(double)linearWidth;
-(CGRect)textBoundingRect;
-(double)circleRadius;
-(double)centerAngle;
-(double)maxAngularWidth;
-(id)font;
@end

