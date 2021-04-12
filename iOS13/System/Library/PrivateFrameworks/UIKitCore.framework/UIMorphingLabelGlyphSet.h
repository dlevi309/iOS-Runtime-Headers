/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIMorphingLabel, NSAttributedString, NSMutableArray, NSArray;

@interface UIMorphingLabelGlyphSet : NSObject {

	UIMorphingLabel* _label;
	NSAttributedString* _attributedString;
	CTLineRef _line;
	NSMutableArray* _glyphViews;
	unsigned long long _glyphCount;
	unsigned short* _glyphs;
	CGRect* _glyphFrames;
	CGPoint* _glyphPositions;
	CGPoint _lineOrigin;
	double _lineWidth;

}

@property (nonatomic,readonly) unsigned long long glyphCount;                      //@synthesize glyphCount=_glyphCount - In the implementation block
@property (nonatomic,readonly) const unsigned short* glyphs;                       //@synthesize glyphs=_glyphs - In the implementation block
@property (nonatomic,readonly) const CGRect* glyphFrames;                          //@synthesize glyphFrames=_glyphFrames - In the implementation block
@property (nonatomic,readonly) const CGPoint* glyphPositions;                      //@synthesize glyphPositions=_glyphPositions - In the implementation block
@property (nonatomic,readonly) NSArray * glyphViews;                               //@synthesize glyphViews=_glyphViews - In the implementation block
@property (nonatomic,readonly) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,readonly) CGPoint lineOrigin;                                 //@synthesize lineOrigin=_lineOrigin - In the implementation block
@property (nonatomic,readonly) double lineWidth;                                   //@synthesize lineWidth=_lineWidth - In the implementation block
-(void)dealloc;
-(NSAttributedString *)attributedString;
-(double)lineWidth;
-(void)buildGlyphViews;
-(id)initWithLabel:(id)arg1 attributedString:(id)arg2 ;
-(void)removeGlyphs;
-(void)placeGlyphs;
-(CGRect)boundingRectForGlyphsInRange:(NSRange)arg1 ;
-(unsigned long long)glyphCount;
-(const unsigned short*)glyphs;
-(const CGRect*)glyphFrames;
-(const CGPoint*)glyphPositions;
-(NSArray *)glyphViews;
-(CGPoint)lineOrigin;
@end

