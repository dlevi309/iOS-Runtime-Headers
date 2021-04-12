/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)serializedRepresentation;
-(NSString *)homeIdentifier;
-(id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(id)containedVariables;
-(void)processWithContext:(id)arg1 userInputRequiredHandler:(/*^block*/id)arg2 valueHandler:(/*^block*/id)arg3 ;
-(HFTriggerActionSetsBuilder *)triggerActionSetsBuilder;
-(id)initWithTriggerActionSetsBuilder:(id)arg1 ;
-(NSArray *)serializedActionSets;
@end

