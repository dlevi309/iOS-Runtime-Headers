/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@interface CHDView3D : NSObject {

	int mRotationX;
	int mRotationY;
	int mDepthPercent;
	int mGapDepthPercent;
	int mHeightPercent;
	int mPerspective;
	BOOL mRightAngleAxes;
	BOOL mCluster;
	BOOL mAutoscale;

}
-(id)init;
-(id)description;
-(BOOL)isCluster;
-(int)rotationX;
-(int)rotationY;
-(void)setRotationX:(int)arg1 ;
-(void)setRotationY:(int)arg1 ;
-(void)setPerspective:(int)arg1 ;
-(void)setRightAngleAxes:(BOOL)arg1 ;
-(void)setDepthPercent:(int)arg1 ;
-(void)setGapDepthPercent:(int)arg1 ;
-(void)setHeightPercent:(int)arg1 ;
-(void)setAutoscale:(BOOL)arg1 ;
-(void)setCluster:(BOOL)arg1 ;
-(int)depthPercent;
-(int)gapDepthPercent;
-(int)perspective;
-(int)heightPercent;
-(BOOL)isAutoscale;
-(BOOL)isRightAngleAxes;
@end

