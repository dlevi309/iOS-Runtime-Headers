/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)processingValueClasses;
-(id)serializedRepresentation;
-(id)initWithValue:(id)arg1 ;
-(NSString *)debugDescription;
-(id)initWithVariable:(id)arg1 ;
-(unsigned long long)hash;
-(WFVariable *)variable;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<NSObject>)value;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(id)containedVariables;
-(void)processWithContext:(id)arg1 userInputRequiredHandler:(/*^block*/id)arg2 valueHandler:(/*^block*/id)arg3 ;
-(BOOL)willProcessToSameValue:(id)arg1 ;
@end

