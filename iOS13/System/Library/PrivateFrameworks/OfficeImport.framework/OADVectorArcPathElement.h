/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(OADAdjustCoord)top;
-(OADAdjustCoord)bottom;
-(OADAdjustCoord)right;
-(id)initWithLeft:(OADAdjustCoord)arg1 top:(OADAdjustCoord)arg2 right:(OADAdjustCoord)arg3 bottom:(OADAdjustCoord)arg4 startVector:(OADAdjustPoint)arg5 endVector:(OADAdjustPoint)arg6 clockwise:(BOOL)arg7 connectedToPrevious:(BOOL)arg8 ;
-(BOOL)connectedToPrevious;
-(OADAdjustPoint)startVector;
-(OADAdjustPoint)endVector;
-(BOOL)clockwise;
@end

