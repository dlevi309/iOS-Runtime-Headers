/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, HKQuantityType;

@interface WFHealthQuantityAdditionalPickerParameter : WFEnumerationParameter {

	NSArray* _possibleStates;
	HKQuantityType* _quantityType;

}

@property (nonatomic,retain) HKQuantityType * quantityType;              //@synthesize quantityType=_quantityType - In the implementation block
-(BOOL)isHidden;
-(id)localizedLabel;
-(HKQuantityType *)quantityType;
-(void)setQuantityType:(HKQuantityType *)arg1 ;
-(id)possibleStates;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(id)defaultSerializedRepresentation;
-(id)importQuestionBehavior;
-(void)updatePossibleStates;
@end

