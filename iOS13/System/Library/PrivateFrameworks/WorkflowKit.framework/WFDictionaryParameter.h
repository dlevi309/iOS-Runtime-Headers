/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFParameter.h>

@class NSString, NSSet;

@interface WFDictionaryParameter : WFParameter {

	NSString* _localizedItemTypeName;
	NSString* _localizedNewItemTypeName;
	NSSet* _allowedValueTypes;

}

@property (nonatomic,readonly) NSString * localizedItemTypeName;                 //@synthesize localizedItemTypeName=_localizedItemTypeName - In the implementation block
@property (nonatomic,readonly) NSString * localizedNewItemTypeName;              //@synthesize localizedNewItemTypeName=_localizedNewItemTypeName - In the implementation block
@property (nonatomic,readonly) NSSet * allowedValueTypes;                        //@synthesize allowedValueTypes=_allowedValueTypes - In the implementation block
-(id)initWithDefinition:(id)arg1 ;
-(Class)singleStateClass;
-(id)defaultSupportedVariableTypes;
-(NSString *)localizedItemTypeName;
-(NSString *)localizedNewItemTypeName;
-(NSSet *)allowedValueTypes;
@end

