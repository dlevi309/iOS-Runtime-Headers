/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

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
-(NSString *)name;
-(id)UUID;
-(WFAction *)action;
-(BOOL)isAvailable;
-(id)icon;
-(id)initWithOutputUUID:(id)arg1 outputName:(id)arg2 variableProvider:(id)arg3 aggrandizements:(id)arg4 ;
-(NSString *)outputUUID;
-(id)initWithDictionary:(id)arg1 variableProvider:(id)arg2 ;
-(void)retrieveContentCollectionWithVariableSource:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)possibleContentClassesWithContext:(id)arg1 ;
-(id)variableProvider;
-(id)initWithAction:(id)arg1 variableProvider:(id)arg2 aggrandizements:(id)arg3 ;
-(void)variableProvider:(id)arg1 variableNameDidChangeTo:(id)arg2 ;
@end

