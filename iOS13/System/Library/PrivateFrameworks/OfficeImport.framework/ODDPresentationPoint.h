/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/ODDPoint.h>

@class NSMutableArray;

@interface ODDPresentationPoint : ODDPoint {

	ODDPresentationPoint* mParent;
	NSMutableArray* mChildren;

}
-(id)parent;
-(void)setType:(int)arg1 ;
-(id)children;
-(void)addChild:(id)arg1 order:(unsigned long long)arg2 ;
@end

