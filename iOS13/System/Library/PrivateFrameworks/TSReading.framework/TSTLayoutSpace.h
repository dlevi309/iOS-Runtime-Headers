/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@class TSTLayoutSpaceBundle, TSTCoordinateArray, TSTLayout, TSTMasterLayout;

@interface TSTLayoutSpace : NSObject {

	TSTLayoutSpaceBundle* mBundle;
	int mLayoutSpaceType;
	struct {
		BOOL coordinates;
		BOOL tableOffset;
	}  mInvalidFlags;
	SCD_Struct_TS176 mGridRange;
	BOOL mHeaderColumnsRepeat;
	BOOL mHeaderRowsRepeat;
	double mViewScale;
	CGAffineTransform mTransformToCanvas;
	CGAffineTransform mTransformFromCanvas;
	CGAffineTransform mTransformToDevice;
	CGAffineTransform mTransformFromDevice;
	BOOL mDrawBlackAndWhite;
	BOOL mDrawPreventAntialias;
	CGPoint mTableOffset;
	TSTCoordinateArray* mHeaderRowColumnCoordinates;
	TSTCoordinateArray* mBodyColumnCoordinates;
	TSTCoordinateArray* mHeaderColumnRowCoordinates;
	TSTCoordinateArray* mBodyRowCoordinates;
	CGRect mCachedFrame;
	CGRect mCachedAlignedFrame;
	CGRect mCachedStrokeFrame;
	CGRect mCachedAlignedStrokeFrame;
	BOOL mLayoutDirectionIsLeftToRight;
	opaque_pthread_rwlock_t mLock;

}

@property (nonatomic,readonly) TSTLayoutSpaceBundle * bundle; 
@property (nonatomic,readonly) int layoutSpaceType; 
@property (nonatomic,readonly) TSTLayout * layout; 
@property (nonatomic,readonly) TSTMasterLayout * masterLayout; 
@property (nonatomic,readonly) BOOL layoutDirectionIsLeftToRight; 
@property (nonatomic,readonly) BOOL isMain; 
@property (nonatomic,readonly) BOOL isFrozen; 
@property (nonatomic,readonly) BOOL isRepeat; 
@property (nonatomic,readonly) BOOL isColumns; 
@property (nonatomic,readonly) BOOL isRows; 
@property (nonatomic,readonly) BOOL isCorner; 
@property (assign,nonatomic) BOOL headerColumnsRepeat; 
@property (assign,nonatomic) BOOL headerRowsRepeat; 
@property (assign,nonatomic) double viewScale; 
@property (assign,nonatomic) CGAffineTransform transformToCanvas; 
@property (assign,nonatomic) CGAffineTransform transformFromCanvas; 
@property (assign,nonatomic) CGAffineTransform transformToDevice; 
@property (assign,nonatomic) CGAffineTransform transformFromDevice; 
@property (assign,nonatomic) BOOL drawBlackAndWhite; 
@property (assign,nonatomic) BOOL drawPreventAntialias; 
@property (assign,nonatomic) CGPoint tableOffset; 
-(void)dealloc;
-(id)description;
-(void)unlock;
-(TSTLayoutSpaceBundle *)bundle;
-(int)validate:(id)arg1 ;
-(TSTLayout *)layout;
-(BOOL)isFrozen;
-(void)setViewScale:(double)arg1 ;
-(BOOL)isMain;
-(BOOL)isCorner;
-(double)viewScale;
-(TSTMasterLayout *)masterLayout;
-(CGAffineTransform)transformToCanvas;
-(BOOL)isColumns;
-(BOOL)isRows;
-(CGAffineTransform)transformToDevice;
-(CGAffineTransform)transformFromCanvas;
-(void)lockForRead;
-(void)setDrawPreventAntialias:(BOOL)arg1 ;
-(void)setDrawBlackAndWhite:(BOOL)arg1 ;
-(BOOL)layoutDirectionIsLeftToRight;
-(BOOL)p_getLayoutDirectionLeftToRight;
-(void)lockForWrite;
-(void)validateCachedFrames;
-(int)validateCoordinateCache:(id)arg1 ;
-(int)validateTableOffset:(id)arg1 ;
-(CGPoint)tableOffset;
-(void)setTableOffset:(CGPoint)arg1 ;
-(BOOL)headerRowsRepeat;
-(int)layoutSpaceType;
-(BOOL)headerColumnsRepeat;
-(BOOL)drawPreventAntialias;
-(BOOL)isRepeat;
-(id)initWithLayoutSpaceBundle:(id)arg1 type:(int)arg2 ;
-(void)invalidateCoordinates;
-(void)invalidateTableOffset;
-(void)setTransformToCanvas:(CGAffineTransform)arg1 ;
-(void)setHeaderColumnsRepeat:(BOOL)arg1 ;
-(void)setHeaderRowsRepeat:(BOOL)arg1 ;
-(void)setTransformFromCanvas:(CGAffineTransform)arg1 ;
-(void)setTransformToDevice:(CGAffineTransform)arg1 ;
-(CGAffineTransform)transformFromDevice;
-(void)setTransformFromDevice:(CGAffineTransform)arg1 ;
-(BOOL)drawBlackAndWhite;
@end

