/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFVariable.h>

@protocol WFVariableProvider;
@class NSString;

@interface WFUserDefinedVariable : WFVariable {

	id<WFVariableProvider> _variableProvider;

}

@property (nonatomic,readonly) NSString * name; 
-(NSString *)name;
-(id)UUID;
-(BOOL)isAvailable;
-(id)icon;
-(BOOL)requiresModernVariableSupport;
-(id)initWithDictionary:(id)arg1 variableProvider:(id)arg2 ;
-(void)retrieveContentCollectionWithVariableSource:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)possibleContentClassesWithContext:(id)arg1 ;
-(id)variableProvider;
-(void)variableProvider:(id)arg1 variableNameDidChangeTo:(id)arg2 ;
-(id)initWithName:(id)arg1 variableProvider:(id)arg2 aggrandizements:(id)arg3 ;
@end

