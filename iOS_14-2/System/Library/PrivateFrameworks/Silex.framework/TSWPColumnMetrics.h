/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

@class TSWPPadding;


@protocol TSWPColumnMetrics
@property (nonatomic,readonly) CGSize adjustedInsets; 
@property (nonatomic,readonly) TSWPPadding * layoutMargins; 
@property (nonatomic,readonly) unsigned long long columnCount; 
@property (nonatomic,readonly) BOOL alwaysStartsNewTarget; 
@property (nonatomic,readonly) BOOL shrinkTextToFit; 
@property (nonatomic,readonly) BOOL columnsAreLeftToRight; 
@property (nonatomic,readonly) double textScaleFactor; 
@optional
-(double)textScaleFactor;

@required
-(TSWPPadding *)layoutMargins;
-(unsigned long long)columnCount;
-(double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
-(double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
-(double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 outWidth:(double*)arg3 outGap:(double*)arg4;
-(CGSize)adjustedInsets;
-(BOOL)alwaysStartsNewTarget;
-(BOOL)shrinkTextToFit;
-(BOOL)columnsAreLeftToRight;

@end

