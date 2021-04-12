/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/EQKitBox.h>

@class NSArray;

@interface EQKitCompoundBox : EQKitBox {

	NSArray* mChildBoxes;
	double mHeight;
	double mDepth;
	double mWidth;
	BOOL mDimensionsValid;
	CGRect mErasableBounds;
	BOOL mErasableBoundsValid;

}

@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) double depth; 
@property (nonatomic,readonly) double width; 
@property (nonatomic,readonly) NSArray * childBoxes; 
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)depth;
-(double)width;
-(double)height;
-(CGRect)erasableBounds;
-(CGRect)p_cacheErasableBounds;
-(id)initWithChildBoxes:(id)arg1 ;
-(NSArray *)childBoxes;
-(void)p_cacheDimensionsForHeight:(double*)arg1 depth:(double*)arg2 width:(double*)arg3 ;
@end

