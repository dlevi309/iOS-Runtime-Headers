/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class MFPGraphicsState;

@interface MFPGraphicsContainer : NSObject {

	MFPGraphicsState* mParentGraphicsState;
	CGAffineTransform mContainerTransform;

}
-(id)initWithParentGraphicsState:(id)arg1 containerTransform:(CGAffineTransform)arg2 ;
-(id)parentGraphicsState;
-(CGAffineTransform)containerTransform;
@end

