/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADPathElement.h>

@interface OADQuadBezierToPathElement : OADPathElement {

	OADAdjustPoint mControlPoint;
	OADAdjustPoint mToPoint;

}
-(OADAdjustPoint)toPoint;
-(OADAdjustPoint)controlPoint;
-(id)initWithControlPoint:(OADAdjustPoint)arg1 toPoint:(OADAdjustPoint)arg2 ;
@end

