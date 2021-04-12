/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <libobjc.A.dylib/_LTSpeechTranslationDelegate.h>

@protocol OS_dispatch_queue, _LTTranslationService;
@class NSObject, NSMutableDictionary, _LTSafariLatencyLoggingRequest, NSString, NSURL, _LTTranslator;

@interface _LTTranslationSession : NSObject <_LTSpeechTranslationDelegate> {

	NSObject*<OS_dispatch_queue> _translationQueue;
	NSMutableDictionary* _outstandingRequests;
	_LTSafariLatencyLoggingRequest* _logging;
	NSString* _sessionID;
	NSURL* _URL;
	_LTTranslator* _translator;
	id<_LTTranslationService> _service;

}

@property (nonatomic,retain) _LTTranslator * translator;                     //@synthesize translator=_translator - In the implementation block
@property (nonatomic,retain) id<_LTTranslationService> service;              //@synthesize service=_service - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                      //@synthesize URL=_URL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setURL:(NSURL *)arg1 ;
-(void)paragraphTranslation:(id)arg1 result:(id)arg2 error:(id)arg3 ;
-(void)markPageComplete;
-(void)markFirstParagraphComplete;
-(void)translate:(id)arg1 ;
-(void)_ensureServiceConnection:(/*^block*/id)arg1 ;
-(id)initWithTranslator:(id)arg1 ;
-(void)provideFeedback:(id)arg1 ;
-(_LTTranslator *)translator;
-(void)setTranslator:(_LTTranslator *)arg1 ;
-(void)setService:(id<_LTTranslationService>)arg1 ;
-(NSURL *)URL;
-(id<_LTTranslationService>)service;
@end

