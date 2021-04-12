/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(OADAdjustPoint)controlPoint2;
-(OADAdjustPoint)toPoint;
-(OADAdjustPoint)controlPoint1;
-(BOOL)relative;
-(id)initWithControlPoint1:(OADAdjustPoint)arg1 controlPoint2:(OADAdjustPoint)arg2 toPoint:(OADAdjustPoint)arg3 ;
-(void)setRelative:(BOOL)arg1 ;
@end

