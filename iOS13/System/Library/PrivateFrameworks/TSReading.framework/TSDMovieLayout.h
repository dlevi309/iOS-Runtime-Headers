/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDMediaLayout.h>

@class TSDInfoGeometry;

@interface TSDMovieLayout : TSDMediaLayout {

	TSDInfoGeometry* mDynamicInfoGeometry;

}
-(void)dealloc;
-(id)initWithInfo:(id)arg1 ;
-(id)movieInfo;
-(id)computeLayoutGeometry;
-(id)layoutGeometryFromInfo;
-(id)i_computeWrapPath;
-(void)processChangedProperty:(int)arg1 ;
-(void)beginDynamicOperation;
-(void)endDynamicOperation;
-(BOOL)supportsRotation;
-(void)takeRotationFromTracker:(id)arg1 ;
-(void)p_createDynamicCopies;
-(void)p_destroyDynamicCopies;
-(CGRect)computeAlignmentFrameInRoot:(BOOL)arg1 ;
-(CGRect)fullReflectionFrame;
-(CGRect)fullReflectionBoundsForRect:(CGRect)arg1 ;
@end

