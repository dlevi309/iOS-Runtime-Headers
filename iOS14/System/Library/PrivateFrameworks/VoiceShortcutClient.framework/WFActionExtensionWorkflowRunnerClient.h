/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
*/

#import <VoiceShortcutClient/WFWorkflowRunnerClient.h>

@class NSDictionary;

@interface WFActionExtensionWorkflowRunnerClient : WFWorkflowRunnerClient {

	NSDictionary* _javaScriptRunners;

}

@property (nonatomic,copy) NSDictionary * javaScriptRunners;              //@synthesize javaScriptRunners=_javaScriptRunners - In the implementation block
-(NSDictionary *)javaScriptRunners;
-(id)initWithWorkflowIdentifier:(id)arg1 input:(id)arg2 javaScriptRunners:(id)arg3 ;
-(void)setJavaScriptRunners:(NSDictionary *)arg1 ;
@end

