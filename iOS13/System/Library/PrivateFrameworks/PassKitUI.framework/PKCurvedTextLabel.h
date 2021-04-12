/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)text;
-(void)setText:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)font;
-(void)setAttributedText:(id)arg1 ;
-(id)attributedText;
-(NSDictionary *)textAttributes;
-(id)textColor;
-(double)_distance;
-(void)drawTextInRect:(CGRect)arg1 ;
-(void)_updateTextColor;
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
-(double)linearWidth;
-(CGRect)textBoundingRect;
-(double)circleRadius;
-(BOOL)interior;
-(double)centerAngle;
-(double)maxAngularWidth;
@end

