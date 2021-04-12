/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

