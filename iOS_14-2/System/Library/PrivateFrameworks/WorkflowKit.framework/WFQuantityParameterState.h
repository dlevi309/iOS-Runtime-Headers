/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/WFParameterState.h>

@class WFNumberStringSubstitutableState, NSString;

@interface WFQuantityParameterState : NSObject <WFParameterState> {

	WFNumberStringSubstitutableState* _magnitudeState;
	NSString* _unitString;

}

@property (nonatomic,readonly) WFNumberStringSubstitutableState * magnitudeState;              //@synthesize magnitudeState=_magnitudeState - In the implementation block
@property (nonatomic,copy,readonly) NSString * unitString;                                     //@synthesize unitString=_unitString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)processingValueClass;
-(id)serializedRepresentation;
-(NSString *)unitString;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(id)containedVariables;
-(void)processWithContext:(id)arg1 userInputRequiredHandler:(/*^block*/id)arg2 valueHandler:(/*^block*/id)arg3 ;
-(id)initWithMagnitudeState:(id)arg1 unitString:(id)arg2 ;
-(WFNumberStringSubstitutableState *)magnitudeState;
@end

