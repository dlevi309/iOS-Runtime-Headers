/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADPathElement.h>

@interface OADCubicBezierToPathElement : OADPathElement {

	OADAdjustPoint mControlPoint1;
	OADAdjustPoint mControlPoint2;
	OADAdjustPoint mToPoint;
	BOOL mRelative;

}
-(OADAdjustPoint)controlPoint1;
-(OADAdjustPoint)controlPoint2;
-(OADAdjustPoint)toPoint;
-(BOOL)relative;
-(id)initWithControlPoint1:(OADAdjustPoint)arg1 controlPoint2:(OADAdjustPoint)arg2 toPoint:(OADAdjustPoint)arg3 ;
-(void)setRelative:(BOOL)arg1 ;
@end

