/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFParameter.h>

@protocol WFExpandingParameterHintProvider;
@class NSString;

@interface WFExpandingParameter : WFParameter {

	NSString* _hintLabel;
	id<WFExpandingParameterHintProvider> _hintProvider;

}

@property (assign,nonatomic,__weak) id<WFExpandingParameterHintProvider> hintProvider;              //@synthesize hintProvider=_hintProvider - In the implementation block
@property (nonatomic,readonly) NSString * hintLabel;                                                //@synthesize hintLabel=_hintLabel - In the implementation block
-(id)initWithDefinition:(id)arg1 ;
-(NSString *)hintLabel;
-(Class)singleStateClass;
-(id)defaultSupportedVariableTypes;
-(BOOL)supportsImportQuestions;
-(id<WFExpandingParameterHintProvider>)hintProvider;
-(void)setHintProvider:(id<WFExpandingParameterHintProvider>)arg1 ;
@end

