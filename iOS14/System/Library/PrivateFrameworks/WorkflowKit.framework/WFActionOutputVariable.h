/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFVariable.h>

@protocol WFVariableProvider;
@class WFAction, NSString;

@interface WFActionOutputVariable : WFVariable {

	id<WFVariableProvider> _variableProvider;
	WFAction* _action;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * outputUUID; 
@property (nonatomic,__weak,readonly) WFAction * action;              //@synthesize action=_action - In the implementation block
-(BOOL)isAvailable;
-(id)UUID;
-(id)icon;
-(WFAction *)action;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 variableProvider:(id)arg2 ;
-(void)retrieveContentCollectionWithVariableSource:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)possibleContentClassesWithContext:(id)arg1 ;
-(id)variableProvider;
-(void)variableProvider:(id)arg1 variableNameDidChangeTo:(id)arg2 ;
-(id)initWithAction:(id)arg1 variableProvider:(id)arg2 aggrandizements:(id)arg3 ;
-(id)initWithOutputUUID:(id)arg1 outputName:(id)arg2 variableProvider:(id)arg3 aggrandizements:(id)arg4 ;
-(NSString *)outputUUID;
@end

