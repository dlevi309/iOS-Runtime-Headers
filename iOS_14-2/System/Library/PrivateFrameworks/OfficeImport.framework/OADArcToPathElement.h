/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

