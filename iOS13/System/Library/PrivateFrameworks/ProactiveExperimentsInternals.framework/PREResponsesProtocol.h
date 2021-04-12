/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperimentsInternals.framework/ProactiveExperimentsInternals
*/


@protocol PREResponsesProtocol
@required
-(void)preResponseItemsForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 conversationHistory:(id)arg3 forContext:(id)arg4 time:(id)arg5 language:(id)arg6 modelFilePath:(id)arg7 modelConfigPath:(id)arg8 espressoBinFilePath:(id)arg9 espressoShapeFilePath:(id)arg10 lexiconFilePath:(id)arg11 registerDisplayed:(BOOL)arg12 completion:(/*^block*/id)arg13;
-(void)registerResponse:(id)arg1 position:(id)arg2 isCanned:(BOOL)arg3 isUsingQuickResponses:(BOOL)arg4 locale:(id)arg5 modelConfigPath:(id)arg6;

@end

