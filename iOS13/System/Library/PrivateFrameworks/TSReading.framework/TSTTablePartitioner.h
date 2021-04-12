/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDPartitioner.h>

@class TSTTableInfo, TSDInfoGeometry, TSTLayout, TSUPointerKeyDictionary, NSMutableDictionary;

@interface TSTTablePartitioner : NSObject <TSDPartitioner> {

	TSTTableInfo* mTableInfo;
	TSDInfoGeometry* mInfoGeometry;
	double mFirstPartitionWidth;
	CGSize mScaleToFit;
	TSTLayout* mScaledLayout;
	TSUPointerKeyDictionary* mHintMatricesByCanvas;
	NSMutableDictionary* mPartitioningPassCache;

}

@property (nonatomic,readonly) TSTLayout * scaledLayout; 
@property (nonatomic,readonly) TSTTableInfo * tableInfo; 
@property (nonatomic,readonly) double inlineTableWidth; 
@property (assign,nonatomic) CGSize scaleToFit; 
@property (nonatomic,readonly) BOOL scaleIsValid; 
@property (nonatomic,copy) TSDInfoGeometry * infoGeometry; 
-(void)dealloc;
-(id)initWithInfo:(id)arg1 ;
-(TSDInfoGeometry *)infoGeometry;
-(id)nextHintForSize:(CGSize)arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(BOOL)arg4 outFinished:(out BOOL*)arg5 ;
-(id)layoutForHint:(id)arg1 parentLayout:(id)arg2 ;
-(id)nextLayoutForSize:(CGSize)arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(BOOL)arg4 outFinished:(out BOOL*)arg5 ;
-(BOOL)didHint:(id)arg1 syncWithNextHint:(id)arg2 horizontally:(BOOL)arg3 delta:(int)arg4 ;
-(id)hintForLayout:(id)arg1 ;
-(TSTTableInfo *)tableInfo;
-(BOOL)scaleIsValid;
-(CGSize)scaleToFit;
-(TSTLayout *)scaledLayout;
-(void)setScaleToFit:(CGSize)arg1 ;
-(void)setInfoGeometry:(TSDInfoGeometry *)arg1 ;
-(void)validateScaledLayout;
-(BOOL)p_didFinishPartitioningHint:(id)arg1 horizontally:(BOOL)arg2 ;
-(SCD_Struct_TS142)measureCellRangeForNextPartitionOfSize:(CGSize)arg1 previousHint:(id)arg2 horizontally:(BOOL)arg3 ;
-(id)partitioningPassForHint:(id)arg1 withPreviousHint:(id)arg2 ;
-(id)hintCacheKeyForHint:(id)arg1 ;
-(BOOL)shouldReuseLayout:(id)arg1 forSize:(CGSize)arg2 parentLayout:(id)arg3 hint:(id)arg4 ;
-(void)p_flushCacheAfterPartitioningFinished:(id)arg1 lastHint:(id)arg2 horizontally:(BOOL)arg3 ;
-(id)partitioningPassForFirstPartitionSize:(CGSize)arg1 ;
-(id)hintCacheKeyForPartitioningPass:(id)arg1 andHintID:(SCD_Struct_TS140)arg2 ;
-(double)inlineTableWidth;
@end

