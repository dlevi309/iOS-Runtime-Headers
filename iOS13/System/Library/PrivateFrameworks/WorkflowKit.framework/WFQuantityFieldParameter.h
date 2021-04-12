/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFNumberFieldParameter.h>

@class NSArray;

@interface WFQuantityFieldParameter : WFNumberFieldParameter {

	NSArray* _possibleUnits;

}

@property (nonatomic,copy) NSArray * possibleUnits;              //@synthesize possibleUnits=_possibleUnits - In the implementation block
+(BOOL)defaultAllowsNegativeNumbers;
+(BOOL)defaultAllowsDecimalNumbers;
-(id)initWithDefinition:(id)arg1 ;
-(Class)singleStateClass;
-(id)defaultSerializedRepresentation;
-(void)setPossibleUnits:(NSArray *)arg1 ;
-(id)localizedLabelForPossibleUnit:(id)arg1 magnitude:(id)arg2 style:(unsigned long long)arg3 ;
-(NSArray *)possibleUnits;
@end

