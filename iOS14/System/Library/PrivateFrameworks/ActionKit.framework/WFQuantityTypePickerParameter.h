/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray;

@interface WFQuantityTypePickerParameter : WFEnumerationParameter {

	NSArray* _possibleStates;

}

@property (nonatomic,readonly) NSArray * possibleStates;              //@synthesize possibleStates=_possibleStates - In the implementation block
-(NSArray *)possibleStates;
-(Class)singleStateClass;
-(id)localizedLabelForPossibleState:(id)arg1 ;
@end

