/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFMultipleValueParameterState.h>

@interface WFContactSubstitutableState : WFMultipleValueParameterState
+(Class)processingValueClass;
+(id)serializedRepresentationFromValue:(id)arg1 ;
+(id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(id)initWithValue:(id)arg1 ;
-(void)processWithContext:(id)arg1 userInputRequiredHandler:(/*^block*/id)arg2 valueHandler:(/*^block*/id)arg3 ;
-(id)collectionByConvertingStringItemsToHandles:(id)arg1 ;
-(void)processContentCollection:(id)arg1 fromVariable:(BOOL)arg2 valueHandler:(/*^block*/id)arg3 ;
-(BOOL)reinterpretsStringsAsContactHandlesFromVariable:(BOOL)arg1 ;
-(id)stringInterpretedAsContactHandle:(id)arg1 ;
-(id)valueItemClasses;
@end

