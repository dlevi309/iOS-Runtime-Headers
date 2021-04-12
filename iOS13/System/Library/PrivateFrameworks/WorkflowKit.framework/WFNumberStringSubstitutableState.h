/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFStringSubstitutableState.h>

@class NSNumber, NSDecimalNumber;

@interface WFNumberStringSubstitutableState : WFStringSubstitutableState {

	NSNumber* _legacyNumber;

}

@property (nonatomic,retain) NSNumber * legacyNumber;                        //@synthesize legacyNumber=_legacyNumber - In the implementation block
@property (nonatomic,readonly) NSDecimalNumber * decimalNumber; 
+(Class)processingValueClass;
+(id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(id)serializedRepresentation;
-(id)initWithValue:(id)arg1 ;
-(void)processWithContext:(id)arg1 userInputRequiredHandler:(/*^block*/id)arg2 valueHandler:(/*^block*/id)arg3 ;
-(NSDecimalNumber *)decimalNumber;
-(NSNumber *)legacyNumber;
-(void)setLegacyNumber:(NSNumber *)arg1 ;
@end

