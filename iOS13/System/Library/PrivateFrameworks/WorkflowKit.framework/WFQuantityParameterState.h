/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)serializedRepresentation;
-(NSString *)unitString;
-(id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(id)containedVariables;
-(void)processWithContext:(id)arg1 userInputRequiredHandler:(/*^block*/id)arg2 valueHandler:(/*^block*/id)arg3 ;
-(id)initWithMagnitudeState:(id)arg1 unitString:(id)arg2 ;
-(WFNumberStringSubstitutableState *)magnitudeState;
@end

