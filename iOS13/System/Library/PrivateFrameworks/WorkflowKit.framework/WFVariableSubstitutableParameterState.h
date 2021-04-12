/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/WFParameterState.h>

@protocol NSObject;
@class WFVariable, NSString;

@interface WFVariableSubstitutableParameterState : NSObject <WFParameterState> {

	id<NSObject> _value;
	WFVariable* _variable;

}

@property (nonatomic,readonly) id<NSObject> value;                  //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) WFVariable * variable;               //@synthesize variable=_variable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)processingValueClass;
+(id)serializedRepresentationFromValue:(id)arg1 ;
+(id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<NSObject>)value;
-(WFVariable *)variable;
-(id)initWithVariable:(id)arg1 ;
-(id)serializedRepresentation;
-(id)initWithValue:(id)arg1 ;
-(BOOL)willProcessToSameValue:(id)arg1 ;
-(id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(id)containedVariables;
-(void)processWithContext:(id)arg1 userInputRequiredHandler:(/*^block*/id)arg2 valueHandler:(/*^block*/id)arg3 ;
@end

