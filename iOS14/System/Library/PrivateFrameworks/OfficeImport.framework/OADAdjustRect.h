/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OADAdjustRect : NSObject {

	OADAdjustCoord mLeft;
	OADAdjustCoord mTop;
	OADAdjustCoord mRight;
	OADAdjustCoord mBottom;

}
-(OADAdjustCoord)left;
-(OADAdjustCoord)right;
-(id)description;
-(OADAdjustCoord)bottom;
-(OADAdjustCoord)top;
-(id)initWithLeft:(OADAdjustCoord)arg1 top:(OADAdjustCoord)arg2 right:(OADAdjustCoord)arg3 bottom:(OADAdjustCoord)arg4 ;
@end

