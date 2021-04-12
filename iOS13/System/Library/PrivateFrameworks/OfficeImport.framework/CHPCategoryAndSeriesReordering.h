/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/EDProcessor.h>

@interface CHPCategoryAndSeriesReordering : EDProcessor
-(BOOL)isObjectSupported:(id)arg1 ;
-(void)applyProcessorToObject:(id)arg1 sheet:(id)arg2 ;
-(void)reorderCategoryAndSeries:(id)arg1 sheet:(id)arg2 clearAxisReversedFlag:(BOOL)arg3 ;
-(void)applyCategoryReorderingPreprocessor:(id)arg1 ;
-(BOOL)isObjectSupportedForSeriesReorderingPreprocessor:(id)arg1 isCategoryOrderReversed:(BOOL)arg2 ;
-(void)applySeriesReorderingPreprocessor:(id)arg1 ;
-(void)reorderSeriesCategory:(id)arg1 dataPointCount:(unsigned long long)arg2 byRow:(BOOL)arg3 ;
-(void)reorderData:(id)arg1 dataPointCount:(unsigned long long)arg2 byRow:(BOOL)arg3 ;
-(void)reorderValueProperties:(id)arg1 dataPointCount:(unsigned long long)arg2 ;
-(long long)reorderDataValues:(id)arg1 dataPointCount:(unsigned long long)arg2 ;
-(void)reorderDataFormula:(id)arg1 dataPointCount:(unsigned long long)arg2 byRow:(BOOL)arg3 ;
@end

