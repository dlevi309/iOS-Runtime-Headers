/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)hintLabel;
-(id)initWithDefinition:(id)arg1 ;
-(Class)singleStateClass;
-(id)defaultSupportedVariableTypes;
-(id)importQuestionBehavior;
-(id<WFExpandingParameterHintProvider>)hintProvider;
-(void)setHintProvider:(id<WFExpandingParameterHintProvider>)arg1 ;
@end

