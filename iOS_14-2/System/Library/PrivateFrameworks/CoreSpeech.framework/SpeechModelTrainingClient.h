/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@class NSXPCConnection;

@interface SpeechModelTrainingClient : NSObject {

	NSXPCConnection* _smtConnection;

}
+(void)initialize;
-(id)init;
-(id)initWithServiceName:(id)arg1 ;
-(void)invalidate;
-(void)dealloc;
-(id)_serviceProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)trainPersonalizedLMWithLanguage:(id)arg1 configuration:(id)arg2 asset:(id)arg3 fides:(BOOL)arg4 activity:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)trainPersonalizedLMWithLanguage:(id)arg1 configuration:(id)arg2 asset:(id)arg3 directory:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)trainPersonalizedLMWithLanguage:(id)arg1 configuration:(id)arg2 fides:(BOOL)arg3 activity:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)trainGlobalNNLMwithFidesRecipe:(id)arg1 attachments:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)trainGlobalNNLMwithFidesSessionURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)upperCaseString:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)trainPersonalizedLMWithLanguage:(id)arg1 directory:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

