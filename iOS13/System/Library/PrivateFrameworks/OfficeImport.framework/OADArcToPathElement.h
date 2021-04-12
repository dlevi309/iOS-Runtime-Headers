/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADPathElement.h>

@interface OADArcToPathElement : OADPathElement {

	OADAdjustPoint mSemiaxes;
	OADAdjustCoord mStartAngle;
	OADAdjustCoord mAngleLength;

}
-(OADAdjustCoord)startAngle;
-(id)initWithSemiaxes:(OADAdjustPoint)arg1 startAngle:(OADAdjustCoord)arg2 angleLength:(OADAdjustCoord)arg3 ;
-(OADAdjustPoint)semiaxes;
-(OADAdjustCoord)angleLength;
@end

