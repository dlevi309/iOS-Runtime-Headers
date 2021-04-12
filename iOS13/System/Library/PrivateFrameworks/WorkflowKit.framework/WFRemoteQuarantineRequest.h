/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

@class NSString;


@protocol WFRemoteQuarantineRequest <NSObject>
@property (nonatomic,readonly) NSString * policyFunctionName; 
@property (nonatomic,readonly) NSString * defaultLocalizedPromptTitle; 
@property (nonatomic,readonly) NSString * defaultLocalizedPromptMessage; 
@property (nonatomic,readonly) NSString * defaultLocalizedDeniedErrorTitle; 
@property (nonatomic,readonly) NSString * defaultLocalizedDeniedErrorMessage; 
@required
-(NSString *)policyFunctionName;
-(NSString *)defaultLocalizedPromptTitle;
-(NSString *)defaultLocalizedPromptMessage;
-(NSString *)defaultLocalizedDeniedErrorTitle;
-(NSString *)defaultLocalizedDeniedErrorMessage;
-(id)javaScriptCoreRepresentationWithError:(id*)arg1;

@end

