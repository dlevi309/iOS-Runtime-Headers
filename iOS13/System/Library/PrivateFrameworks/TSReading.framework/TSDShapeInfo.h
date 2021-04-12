/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDStyledInfo.h>
#import <TSReading/TSSThemedObject.h>
#import <TSReading/TSDMixing.h>
#import <TSReading/TSDReducableInfo.h>
#import <TSReading/TSKSearchable.h>

@class TSDPathSource, TSDShapeStyle, TSDLineEnd, TSDFill, NSString;

@interface TSDShapeInfo : TSDStyledInfo <TSSThemedObject, TSDMixing, TSDReducableInfo, TSKSearchable> {

	TSDPathSource* mPathSource;
	TSDShapeStyle* mStyle;
	TSDLineEnd* mHeadLineEnd;
	TSDLineEnd* mTailLineEnd;

}

@property (nonatomic,retain) TSDPathSource * pathSource; 
@property (nonatomic,readonly) TSDShapeStyle * shapeStyle; 
@property (nonatomic,copy) TSDFill * fill; 
@property (nonatomic,retain) TSDLineEnd * headLineEnd; 
@property (nonatomic,retain) TSDLineEnd * tailLineEnd; 
@property (nonatomic,readonly) BOOL supportsTextInset; 
@property (nonatomic,readonly) BOOL supportsShrinkTextToFit; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)style;
-(void)setStyle:(id)arg1 ;
-(TSDFill *)fill;
-(int)elementKind;
-(void)setGeometry:(id)arg1 ;
-(id)objectForProperty:(int)arg1 ;
-(TSDShapeStyle *)shapeStyle;
-(Class)layoutClass;
-(TSDLineEnd *)headLineEnd;
-(TSDLineEnd *)tailLineEnd;
-(void)setHeadLineEnd:(TSDLineEnd *)arg1 ;
-(void)setTailLineEnd:(TSDLineEnd *)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(Class)repClass;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 ;
-(void)setValuesForProperties:(id)arg1 ;
-(id)animationFilters;
-(long long)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(void)setPathSource:(TSDPathSource *)arg1 ;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4 ;
-(TSDPathSource *)pathSource;
-(id)imageDatasForReducingFileSizeWithAssociatedHints;
-(CGSize)targetSizeForImageData:(id)arg1 associatedHint:(id)arg2 ;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 ;
-(Class)styleClass;
-(BOOL)supportsTextInset;
-(BOOL)supportsShrinkTextToFit;
-(void)setFill:(TSDFill *)arg1 ;
@end

