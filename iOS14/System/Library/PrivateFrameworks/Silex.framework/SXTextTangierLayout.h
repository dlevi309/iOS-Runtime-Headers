/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <TSReading/TSDContainerLayout.h>
#import <libobjc.A.dylib/TSWPLayoutParent.h>
#import <libobjc.A.dylib/TSWPColumnMetrics.h>
#import <libobjc.A.dylib/TSWPExteriorTextWrap.h>

@class SXTextTangierTextWrapper, TSWPPadding;

@interface SXTextTangierLayout : TSDContainerLayout <TSWPLayoutParent, TSWPColumnMetrics, TSWPExteriorTextWrap> {

	SXTextTangierTextWrapper* _textWrapper;

}

@property (nonatomic,retain) SXTextTangierTextWrapper * textWrapper;              //@synthesize textWrapper=_textWrapper - In the implementation block
@property (nonatomic,readonly) CGSize adjustedInsets; 
@property (nonatomic,readonly) TSWPPadding * layoutMargins; 
@property (nonatomic,readonly) unsigned long long columnCount; 
@property (nonatomic,readonly) BOOL alwaysStartsNewTarget; 
@property (nonatomic,readonly) BOOL shrinkTextToFit; 
@property (nonatomic,readonly) BOOL columnsAreLeftToRight; 
@property (nonatomic,readonly) double textScaleFactor; 
-(TSWPPadding *)layoutMargins;
-(unsigned long long)columnCount;
-(void)invalidate;
-(unsigned)autosizeFlagsForTextLayout:(id)arg1 ;
-(unsigned)verticalAlignmentForTextLayout:(id)arg1 ;
-(void)invalidateForAutosizingTextLayout:(id)arg1 ;
-(CGRect)nonAutosizedFrameForTextLayout:(id)arg1 ;
-(CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(CGSize)arg2 ;
-(id)dependentsOfTextLayout:(id)arg1 ;
-(Class)repClassForTextLayout:(id)arg1 ;
-(CGSize)initialTextSize;
-(BOOL)shouldHyphenateTextLayout:(id)arg1 ;
-(double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 ;
-(double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 ;
-(double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 outWidth:(double*)arg3 outGap:(double*)arg4 ;
-(CGSize)adjustedInsets;
-(BOOL)alwaysStartsNewTarget;
-(BOOL)shrinkTextToFit;
-(BOOL)columnsAreLeftToRight;
-(void)setTextWrapper:(SXTextTangierTextWrapper *)arg1 ;
-(SXTextTangierTextWrapper *)textWrapper;
-(id)textWrapperForExteriorWrap;
-(id)additionalReliedOnLayoutsForTextWrap;
@end

