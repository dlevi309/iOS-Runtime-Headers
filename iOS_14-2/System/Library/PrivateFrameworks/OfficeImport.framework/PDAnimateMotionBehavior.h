/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)angle;
-(void)setPath:(id)arg1 ;
-(id)path;
-(BOOL)hasPath;
-(void)setAngle:(double)arg1 ;
-(BOOL)hasAngle;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
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

