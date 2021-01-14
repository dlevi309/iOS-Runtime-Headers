/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IntentsServices.framework/IntentsServices
*/


@protocol INVCVoiceShortcutClient, OS_dispatch_queue;
@class INIntent, INCExtensionProxy, NSObject;

@interface INSExtensionServiceIntentExecutor : NSObject {

	id<INVCVoiceShortcutClient> _voiceShortcutClient;
	INIntent* _intent;
	INCExtensionProxy* _extensionProxy;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) id<INVCVoiceShortcutClient> voiceShortcutClient;              //@synthesize voiceShortcutClient=_voiceShortcutClient - In the implementation block
@property (nonatomic,retain) INIntent * intent;                                            //@synthesize intent=_intent - In the implementation block
@property (nonatomic,retain) INCExtensionProxy * extensionProxy;                           //@synthesize extensionProxy=_extensionProxy - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> queue;                           //@synthesize queue=_queue - In the implementation block
-(INIntent *)intent;
-(void)setIntent:(INIntent *)arg1 ;
-(id<INVCVoiceShortcutClient>)voiceShortcutClient;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(INCExtensionProxy *)extensionProxy;
-(id)initWithVoiceShortcutClient:(id)arg1 intent:(id)arg2 ;
-(id)initWithIntent:(id)arg1 extensionProxy:(id)arg2 queue:(id)arg3 ;
-(void)sendAceCommand:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setVoiceShortcutClient:(id<INVCVoiceShortcutClient>)arg1 ;
-(void)setExtensionProxy:(INCExtensionProxy *)arg1 ;
@end

