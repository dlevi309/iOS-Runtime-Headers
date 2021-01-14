/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, HKCategoryType;

@interface WFHealthCategoryAdditionalPickerParameter : WFEnumerationParameter {

	NSArray* _possibleStates;
	HKCategoryType* _categoryType;

}

@property (nonatomic,retain) HKCategoryType * categoryType;              //@synthesize categoryType=_categoryType - In the implementation block
-(HKCategoryType *)categoryType;
-(BOOL)isHidden;
-(id)localizedLabel;
-(void)setCategoryType:(HKCategoryType *)arg1 ;
-(id)possibleStates;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(void)updatePossibleStates;
@end

