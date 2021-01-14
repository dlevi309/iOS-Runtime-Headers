/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)lineWidth;
-(void)placeGlyphs;
-(CGRect)boundingRectForGlyphsInRange:(NSRange)arg1 ;
-(void)buildGlyphViews;
-(const CGPoint*)glyphPositions;
-(NSAttributedString *)attributedString;
-(const unsigned short*)glyphs;
-(const CGRect*)glyphFrames;
-(CGPoint)lineOrigin;
-(void)removeGlyphs;
-(NSArray *)glyphViews;
-(unsigned long long)glyphCount;
-(id)initWithLabel:(id)arg1 attributedString:(id)arg2 ;
-(void)dealloc;
@end

