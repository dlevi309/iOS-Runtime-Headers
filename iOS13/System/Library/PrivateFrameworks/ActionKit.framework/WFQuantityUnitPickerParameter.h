/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFEnumerationParameter.h>

@protocol OS_dispatch_group;
@class NSArray, HKQuantityType, NSObject;

@interface WFQuantityUnitPickerParameter : WFEnumerationParameter {

	NSArray* _possibleStates;
	HKQuantityType* _quantityType;
	NSObject*<OS_dispatch_group> _possibleStateLoadingGroup;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_group> possibleStateLoadingGroup;              //@synthesize possibleStateLoadingGroup=_possibleStateLoadingGroup - In the implementation block
@property (nonatomic,retain) HKQuantityType * quantityType;                                         //@synthesize quantityType=_quantityType - In the implementation block
-(HKQuantityType *)quantityType;
-(void)setQuantityType:(HKQuantityType *)arg1 ;
-(id)initWithDefinition:(id)arg1 ;
-(id)possibleStates;
-(Class)singleStateClass;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(id)defaultSerializedRepresentation;
-(void)updatePossibleStates;
-(NSObject*<OS_dispatch_group>)possibleStateLoadingGroup;
@end

