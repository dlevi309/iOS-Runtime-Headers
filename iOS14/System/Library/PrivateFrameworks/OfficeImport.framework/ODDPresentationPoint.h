/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/ODDPoint.h>

@class NSMutableArray;

@interface ODDPresentationPoint : ODDPoint {

	ODDPresentationPoint* mParent;
	NSMutableArray* mChildren;

}
-(id)children;
-(id)parent;
-(void)setType:(int)arg1 ;
-(void)addChild:(id)arg1 order:(unsigned long long)arg2 ;
@end

