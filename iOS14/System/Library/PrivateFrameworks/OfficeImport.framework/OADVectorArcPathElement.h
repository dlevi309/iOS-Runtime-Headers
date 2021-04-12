/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADPathElement.h>

@interface OADVectorArcPathElement : OADPathElement {

	OADAdjustCoord mLeft;
	OADAdjustCoord mTop;
	OADAdjustCoord mRight;
	OADAdjustCoord mBottom;
	OADAdjustPoint mStartVector;
	OADAdjustPoint mEndVector;
	BOOL mClockwise;
	BOOL mConnectedToPrevious;

}
-(OADAdjustCoord)left;
-(OADAdjustCoord)right;
-(OADAdjustCoord)bottom;
-(OADAdjustCoord)top;
-(BOOL)clockwise;
-(id)initWithLeft:(OADAdjustCoord)arg1 top:(OADAdjustCoord)arg2 right:(OADAdjustCoord)arg3 bottom:(OADAdjustCoord)arg4 startVector:(OADAdjustPoint)arg5 endVector:(OADAdjustPoint)arg6 clockwise:(BOOL)arg7 connectedToPrevious:(BOOL)arg8 ;
-(BOOL)connectedToPrevious;
-(OADAdjustPoint)startVector;
-(OADAdjustPoint)endVector;
@end

