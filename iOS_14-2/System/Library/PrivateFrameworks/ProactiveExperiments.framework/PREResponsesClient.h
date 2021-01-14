/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperiments.framework/ProactiveExperiments
*/

#import <libobjc.A.dylib/PREResponsesProtocol.h>

@class PREXPCClientHelpers;

@interface PREResponsesClient : NSObject <PREResponsesProtocol> {

	PREXPCClientHelpers* _clientHelpers;

}
+(id)sharedInstance;
-(id)init;
-(id)_remoteObjectProxy;
-(void)preResponseItemsForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 conversationHistory:(id)arg3 forContext:(id)arg4 time:(id)arg5 language:(id)arg6 recipientHandles:(id)arg7 modelFilePath:(id)arg8 modelConfigPath:(id)arg9 espressoBinFilePath:(id)arg10 lexiconFilePath:(id)arg11 registerDisplayed:(BOOL)arg12 completion:(/*^block*/id)arg13 ;
-(void)registerResponse:(id)arg1 position:(id)arg2 isCanned:(BOOL)arg3 isUsingQuickResponses:(BOOL)arg4 locale:(id)arg5 modelConfigPath:(id)arg6 ;
@end

