/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/ODDLayoutObject.h>

@class NSMutableArray, ODDOtherwise;

@interface ODDChoose : ODDLayoutObject {

	NSMutableArray* mWhens;
	ODDOtherwise* mOtherwise;

}
-(id)init;
-(id)whens;
-(id)description;
-(void)addWhen:(id)arg1 ;
-(id)otherwise;
-(void)setOtherwise:(id)arg1 ;
@end

