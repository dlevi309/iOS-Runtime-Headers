/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFResource.h>

@class INIntentExecutionInfo;

@interface WFIntentResultUIAvailableResource : WFResource {

	BOOL _eligibleForWidgets;
	BOOL _hasSuccessResponseWithDialog;
	INIntentExecutionInfo* _executionInfo;

}

@property (nonatomic,readonly) INIntentExecutionInfo * executionInfo;                            //@synthesize executionInfo=_executionInfo - In the implementation block
@property (getter=isEligibleForWidgets,nonatomic,readonly) BOOL eligibleForWidgets;              //@synthesize eligibleForWidgets=_eligibleForWidgets - In the implementation block
@property (nonatomic,readonly) BOOL hasSuccessResponseWithDialog;                                //@synthesize hasSuccessResponseWithDialog=_hasSuccessResponseWithDialog - In the implementation block
+(BOOL)mustBeAvailableForDisplay;
-(BOOL)isEligibleForWidgets;
-(id)initWithDefinition:(id)arg1 ;
-(void)refreshAvailability;
-(INIntentExecutionInfo *)executionInfo;
-(id)initWithDefinition:(id)arg1 intentExecutionInfo:(id)arg2 isEligibleForWidgets:(BOOL)arg3 hasSuccessResponseWithDialog:(BOOL)arg4 ;
-(BOOL)hasSuccessResponseWithDialog;
@end

