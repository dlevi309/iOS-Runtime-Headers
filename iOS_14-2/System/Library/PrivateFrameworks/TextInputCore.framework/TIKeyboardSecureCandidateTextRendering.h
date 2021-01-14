/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


#import <TextInputCore/TextInputCore-Structs.h>
@interface TIKeyboardSecureCandidateTextRendering : NSObject
+(CGColorRef)_newCgColorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
+(id)truncatedWidthsForItemWidths:(id)arg1 availableWidth:(double)arg2 ;
+(BOOL)_textRunsHaveFixedFontSize:(id)arg1 ;
+(CFAttributedStringRef)_newAttributedStringWithText:(id)arg1 font:(CTFontRef)arg2 color:(CGColorRef)arg3 ;
+(void)_handleEllipsisTruncationForTextRuns:(id)arg1 textRunResponses:(id)arg2 inAvailableWidth:(double)arg3 ;
+(id)_requestLayoutForSimplifiedTextRuns:(id)arg1 inWidthGroups:(id)arg2 steps:(unsigned long long)arg3 ;
+(id)requestLayoutForTextRuns:(id)arg1 inWidthGroups:(id)arg2 steps:(unsigned long long)arg3 ;
+(double)_totalWidthForCell:(unsigned long long)arg1 fromTextRunResponses:(id)arg2 ;
+(id)_defaultLayoutTraitsForTraits:(id)arg1 ;
+(BOOL)_isAllSingleLineStrings:(id)arg1 ;
+(CGColorRef)_newCgColorWithTraitsColor:(id)arg1 ;
+(void)_drawLineFromCellAtIndex:(unsigned long long)arg1 ofResponse:(id)arg2 atYCoordinate:(double)arg3 inContext:(CGContextRef)arg4 withAvailableWidth:(double)arg5 ;
+(void)_drawTwoLineCellsWithSecureHeaders:(id)arg1 secureContents:(id)arg2 layoutTraits:(id)arg3 renderTraits:(id)arg4 contexts:(CFArrayRef)arg5 availableWidth:(double)arg6 truncationSentinel:(id)arg7 ;
+(BOOL)_drawSingleLineSecureHeaders:(id)arg1 secureContents:(id)arg2 layoutTraits:(id)arg3 renderTraits:(id)arg4 contexts:(CFArrayRef)arg5 availableWidth:(double)arg6 truncationSentinel:(id)arg7 abortInsteadOfTruncating:(BOOL)arg8 ;
+(void)drawSecureHeaders:(id)arg1 secureContents:(id)arg2 inContexts:(CFArrayRef)arg3 traits:(id)arg4 truncationSentinel:(id)arg5 ;
@end

