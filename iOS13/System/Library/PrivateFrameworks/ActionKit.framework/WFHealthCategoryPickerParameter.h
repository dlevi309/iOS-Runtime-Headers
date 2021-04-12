/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, HKCategoryType;

@interface WFHealthCategoryPickerParameter : WFEnumerationParameter {

	NSArray* _possibleStates;
	HKCategoryType* _categoryType;

}

@property (nonatomic,retain) HKCategoryType * categoryType;              //@synthesize categoryType=_categoryType - In the implementation block
-(HKCategoryType *)categoryType;
-(BOOL)isHidden;
-(void)setCategoryType:(HKCategoryType *)arg1 ;
-(id)possibleStates;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(void)updatePossibleStates;
@end

