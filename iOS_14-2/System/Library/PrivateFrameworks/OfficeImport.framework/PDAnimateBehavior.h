/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/PDTimeNode.h>

@class PDAnimationTarget, NSMutableArray;

@interface PDAnimateBehavior : PDTimeNode {

	PDAnimationTarget* mTgtElement;
	NSMutableArray* mAttributeNames;

}

@property (nonatomic,retain) NSMutableArray * attributeNames; 
-(void)setTarget:(id)arg1 ;
-(id)init;
-(id)description;
-(NSMutableArray *)attributeNames;
-(unsigned long long)hash;
-(id)target;
-(BOOL)isEqual:(id)arg1 ;
-(void)setAttributeNames:(NSMutableArray *)arg1 ;
@end

