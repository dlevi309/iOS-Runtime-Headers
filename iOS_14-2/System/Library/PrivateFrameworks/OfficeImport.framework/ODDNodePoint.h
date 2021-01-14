/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/ODDDataPoint.h>

@class NSMutableArray, ODDTransitionPoint;

@interface ODDNodePoint : ODDDataPoint {

	ODDNodePoint* mParent;
	NSMutableArray* mChildren;
	ODDTransitionPoint* mParentTransition;
	ODDTransitionPoint* mSiblingTransition;

}
-(id)children;
-(id)parent;
-(void)setType:(int)arg1 ;
-(id)siblingTransition;
-(id)parentTransition;
-(void)addChild:(id)arg1 order:(unsigned long long)arg2 ;
-(void)setParentTransition:(id)arg1 ;
-(void)setSiblingTransition:(id)arg1 ;
@end

