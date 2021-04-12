/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class NSTextTableBlock;

@interface NSTextBlockLayoutHelper : NSObject {

	NSTextTableBlock* _block;
	NSRange _charRange;
	NSRange _glyphRange;
	CGRect _layoutRect;
	CGRect _boundsRect;
	double _lMargin;
	double _lBorder;
	double _lPadding;
	double _tMargin;
	double _tBorder;
	double _tPadding;
	double _width;
	double _height;
	double _rPadding;
	double _rBorder;
	double _rMargin;
	double _bPadding;
	double _bBorder;
	double _bMargin;

}

@property (readonly) NSTextTableBlock * block; 
-(void)dealloc;
-(id)description;
-(NSTextTableBlock *)block;
-(id)initWithTextBlock:(id)arg1 charRange:(NSRange)arg2 glyphRange:(NSRange)arg3 layoutRect:(CGRect)arg4 boundsRect:(CGRect)arg5 containerWidth:(double)arg6 allowMargins:(BOOL)arg7 collapseBorders:(BOOL)arg8 allowPadding:(BOOL)arg9 ;
-(id)initWithTextBlock:(id)arg1 charRange:(NSRange)arg2 text:(id)arg3 layoutManager:(id)arg4 containerWidth:(double)arg5 collapseBorders:(BOOL)arg6 ;
-(id)initWithTextBlock:(id)arg1 charIndex:(unsigned long long)arg2 text:(id)arg3 layoutManager:(id)arg4 containerWidth:(double)arg5 collapseBorders:(BOOL)arg6 ;
-(id)initWithTextTable:(id)arg1 charIndex:(unsigned long long)arg2 text:(id)arg3 layoutManager:(id)arg4 containerWidth:(double)arg5 collapseBorders:(BOOL)arg6 ;
@end

