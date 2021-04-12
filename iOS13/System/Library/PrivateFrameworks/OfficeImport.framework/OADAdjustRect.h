/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OADAdjustRect : NSObject {

	OADAdjustCoord mLeft;
	OADAdjustCoord mTop;
	OADAdjustCoord mRight;
	OADAdjustCoord mBottom;

}
-(id)description;
-(OADAdjustCoord)left;
-(OADAdjustCoord)top;
-(OADAdjustCoord)bottom;
-(OADAdjustCoord)right;
-(id)initWithLeft:(OADAdjustCoord)arg1 top:(OADAdjustCoord)arg2 right:(OADAdjustCoord)arg3 bottom:(OADAdjustCoord)arg4 ;
@end

