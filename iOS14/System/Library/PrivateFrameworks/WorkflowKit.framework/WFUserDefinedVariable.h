/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFVariable.h>

@protocol WFVariableProvider;
@class NSString;

@interface WFUserDefinedVariable : WFVariable {

	id<WFVariableProvider> _variableProvider;

}

@property (nonatomic,readonly) NSString * name; 
-(BOOL)isAvailable;
-(id)UUID;
-(id)icon;
-(NSString *)name;
-(id)initWithDictionary:(id)arg1 variableProvider:(id)arg2 ;
-(void)retrieveContentCollectionWithVariableSource:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)possibleContentClassesWithContext:(id)arg1 ;
-(id)variableProvider;
-(BOOL)requiresModernVariableSupport;
-(void)variableProvider:(id)arg1 variableNameDidChangeTo:(id)arg2 ;
-(id)initWithName:(id)arg1 variableProvider:(id)arg2 aggrandizements:(id)arg3 ;
@end

