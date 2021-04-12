/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFVariableSubstitutableParameterState.h>

@class MPAVRoute;

@interface WFMediaRouteState : WFVariableSubstitutableParameterState {

	MPAVRoute* _route;

}

@property (nonatomic,readonly) MPAVRoute * route;              //@synthesize route=_route - In the implementation block
+(Class)processingValueClass;
+(id)serializedRepresentationFromValue:(id)arg1 ;
+(id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(MPAVRoute *)route;
-(id)initWithRoute:(id)arg1 ;
@end

