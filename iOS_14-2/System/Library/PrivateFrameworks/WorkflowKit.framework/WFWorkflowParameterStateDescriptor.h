/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface WFWorkflowParameterStateDescriptor : MTLModel <MTLJSONSerializing, NSSecureCoding> {

	BOOL _isSelf;
	NSString* _workflowName;
	NSString* _workflowIdentifier;
	NSString* _cachedDisplayName;

}

@property (nonatomic,readonly) NSString * cachedDisplayName;                     //@synthesize cachedDisplayName=_cachedDisplayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * workflowName;                     //@synthesize workflowName=_workflowName - In the implementation block
@property (nonatomic,copy,readonly) NSString * workflowIdentifier;               //@synthesize workflowIdentifier=_workflowIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL isSelf;                                      //@synthesize isSelf=_isSelf - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;
+(unsigned long long)storageBehaviorForPropertyWithKey:(id)arg1 ;
-(BOOL)isSelf;
-(NSString *)cachedDisplayName;
-(NSString *)workflowIdentifier;
-(NSString *)workflowName;
-(id)initWithWorkflowName:(id)arg1 workflowIdentifier:(id)arg2 isSelf:(BOOL)arg3 ;
-(id)initWithWorkflowReference:(id)arg1 isSelf:(BOOL)arg2 ;
-(id)displayNameWithDatabase:(id)arg1 containingWorkflow:(id)arg2 ;
-(id)matchingWorkflowInDatabase:(id)arg1 containingWorkflow:(id)arg2 ;
@end

