/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/WFParameterState.h>

@class NSString, NSArray, HFTriggerActionSetsBuilder;

@interface WFHFTriggerActionSetsBuilderParameterState : NSObject <WFParameterState> {

	NSString* _homeIdentifier;
	NSArray* _serializedActionSets;

}

@property (nonatomic,copy,readonly) NSString * homeIdentifier;                                     //@synthesize homeIdentifier=_homeIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * serializedActionSets;                                //@synthesize serializedActionSets=_serializedActionSets - In the implementation block
@property (nonatomic,readonly) HFTriggerActionSetsBuilder * triggerActionSetsBuilder; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)serializedRepresentation;
-(NSString *)homeIdentifier;
-(unsigned long long)hash;
-(id)initWithTriggerActionSetsBuilder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(id)containedVariables;
-(void)processWithContext:(id)arg1 userInputRequiredHandler:(/*^block*/id)arg2 valueHandler:(/*^block*/id)arg3 ;
-(HFTriggerActionSetsBuilder *)triggerActionSetsBuilder;
-(NSArray *)serializedActionSets;
@end

