/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/WFParameterState.h>

@class WFVariableString, NSString;

@interface WFVariableStringParameterState : NSObject <WFParameterState> {

	WFVariableString* _variableString;
	long long _userInputInsertionIndex;

}

@property (nonatomic,copy,readonly) WFVariableString * variableString;              //@synthesize variableString=_variableString - In the implementation block
@property (nonatomic,readonly) long long userInputInsertionIndex;                   //@synthesize userInputInsertionIndex=_userInputInsertionIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)processingValueClass;
-(id)serializedRepresentation;
-(id)initWithVariable:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(id)containedVariables;
-(void)processWithContext:(id)arg1 userInputRequiredHandler:(/*^block*/id)arg2 valueHandler:(/*^block*/id)arg3 ;
-(id)initWithVariableString:(id)arg1 userInputInsertionIndex:(long long)arg2 ;
-(id)initWithVariableString:(id)arg1 ;
-(id)parameterStateByRemovingAskVariablesAndPopulatingInsertionIndex;
-(WFVariableString *)variableString;
-(long long)userInputInsertionIndex;
@end

