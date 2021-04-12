/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class NSATSTypesetter;

@interface NSATSLineFragment : NSObject {

	void* _line;
	NSATSTypesetter* _typesetter;
	NSRange _glyphRange;
	NSRange _characterRange;
	double _minPosition;
	double _maxPosition;
	long long _elasticCharIndex;
	double _elasticRangeWidth;
	unsigned _hyphenGlyph;
	double _hyphenGlyphWidth;
	struct {
		unsigned _directionState : 2;
		unsigned _drawsOutside : 1;
		unsigned _standaloneAttachment : 1;
		unsigned _reserved : 28;
	}  _flags;

}
-(void)finalize;
-(void)dealloc;
@end

