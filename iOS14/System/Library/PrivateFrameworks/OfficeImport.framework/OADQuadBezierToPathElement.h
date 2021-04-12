/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

