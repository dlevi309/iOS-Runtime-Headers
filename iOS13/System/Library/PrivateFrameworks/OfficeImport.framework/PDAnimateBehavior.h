/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/PDTimeNode.h>

@class PDAnimationTarget, NSMutableArray;

@interface PDAnimateBehavior : PDTimeNode {

	PDAnimationTarget* mTgtElement;
	NSMutableArray* mAttributeNames;

}

@property (nonatomic,retain) NSMutableArray * attributeNames; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(NSMutableArray *)attributeNames;
-(void)setAttributeNames:(NSMutableArray *)arg1 ;
@end

