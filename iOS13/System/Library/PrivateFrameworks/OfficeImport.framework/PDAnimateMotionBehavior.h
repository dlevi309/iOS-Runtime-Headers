/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/PDAnimateScaleBehavior.h>

@class OITSUBezierPath, NSString;

@interface PDAnimateMotionBehavior : PDAnimateScaleBehavior {

	OITSUBezierPath* mPath;
	BOOL mHasAngle;
	double mAngle;
	NSString* mPointsTypes;
	BOOL mHasOriginType;
	int mOriginType;
	BOOL mHasRotationCenter;
	CGPoint mRotationCenter;
	BOOL mHasPathEditMode;
	int mPathEditMode;

}
+(id)bezierPathFromNSString:(id)arg1 ;
+(id)NSStringForBezierPath:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)path;
-(void)setPath:(id)arg1 ;
-(double)angle;
-(void)setAngle:(double)arg1 ;
-(BOOL)hasPath;
-(BOOL)hasAngle;
-(void)setOriginType:(int)arg1 ;
-(id)pointsTypes;
-(BOOL)hasOriginType;
-(int)originType;
-(BOOL)hasRotationCenter;
-(CGPoint)rotationCenter;
-(BOOL)hasPathEditMode;
-(int)pathEditMode;
-(void)setPointsTypes:(id)arg1 ;
-(void)setRotationCenter:(CGPoint)arg1 ;
-(void)setPathEditMode:(int)arg1 ;
@end

