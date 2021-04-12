/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/

#import <Sleep/HKSPChange.h>

@interface HKSPRelationshipChange : HKSPChange

@property (nonatomic,readonly) id<HKSPMutableObject> changedValue; 
@property (nonatomic,readonly) id<HKSPObject> originalValue; 
@property (nonatomic,readonly) BOOL isAdd; 
@property (nonatomic,readonly) BOOL isUpdate; 
@property (nonatomic,readonly) BOOL isRemove; 
-(BOOL)isUpdate;
-(BOOL)isAdd;
-(BOOL)isRemove;
-(id)initWithProperty:(id)arg1 changedObject:(id)arg2 originalObject:(id)arg3 ;
@end

