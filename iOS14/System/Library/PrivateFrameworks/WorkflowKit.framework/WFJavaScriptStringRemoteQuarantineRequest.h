/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFBaseRemoteQuarantineRequest.h>

@class NSURL, NSDictionary, NSString, NSArray;

@interface WFJavaScriptStringRemoteQuarantineRequest : WFBaseRemoteQuarantineRequest {

	unsigned long long _runtimeType;
	NSURL* _targetURL;
	NSDictionary* _preRuntimeJavaScriptSerializedRepresentation;
	NSString* _preRuntimeJavaScriptString;
	NSString* _runtimeJavaScriptString;
	NSArray* _actionList;

}

@property (assign,nonatomic) unsigned long long runtimeType;                                             //@synthesize runtimeType=_runtimeType - In the implementation block
@property (nonatomic,retain) NSURL * targetURL;                                                          //@synthesize targetURL=_targetURL - In the implementation block
@property (nonatomic,readonly) NSDictionary * preRuntimeJavaScriptSerializedRepresentation;              //@synthesize preRuntimeJavaScriptSerializedRepresentation=_preRuntimeJavaScriptSerializedRepresentation - In the implementation block
@property (nonatomic,readonly) NSString * preRuntimeJavaScriptString;                                    //@synthesize preRuntimeJavaScriptString=_preRuntimeJavaScriptString - In the implementation block
@property (nonatomic,copy) NSString * runtimeJavaScriptString;                                           //@synthesize runtimeJavaScriptString=_runtimeJavaScriptString - In the implementation block
@property (nonatomic,copy) NSArray * actionList;                                                         //@synthesize actionList=_actionList - In the implementation block
+(id)JSONKeyPathsByPropertyKey;
-(void)setTargetURL:(NSURL *)arg1 ;
-(NSURL *)targetURL;
-(id)initWithWorkflow:(id)arg1 runtimeType:(unsigned long long)arg2 targetURL:(id)arg3 preRuntimeVariableString:(id)arg4 runtimeString:(id)arg5 ;
-(id)policyFunctionName;
-(id)defaultLocalizedPromptTitle;
-(id)defaultLocalizedPromptMessage;
-(id)defaultLocalizedDeniedErrorTitle;
-(id)defaultLocalizedDeniedErrorMessage;
-(unsigned long long)runtimeType;
-(void)setRuntimeType:(unsigned long long)arg1 ;
-(NSDictionary *)preRuntimeJavaScriptSerializedRepresentation;
-(NSString *)preRuntimeJavaScriptString;
-(NSString *)runtimeJavaScriptString;
-(void)setRuntimeJavaScriptString:(NSString *)arg1 ;
-(NSArray *)actionList;
-(void)setActionList:(NSArray *)arg1 ;
@end

