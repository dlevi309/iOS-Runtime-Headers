/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/


@protocol INVCVoiceShortcutClient;
@interface INVoiceShortcutCenter : NSObject {

	id<INVCVoiceShortcutClient> _voiceShortcutClient;

}

@property (setter=_setVoiceShortcutClient:,nonatomic,retain) id<INVCVoiceShortcutClient> voiceShortcutClient;              //@synthesize voiceShortcutClient=_voiceShortcutClient - In the implementation block
+(void)initialize;
+(id)sharedCenter;
-(id)init;
-(void)getVoiceShortcutWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_initWithVoiceShortcutClient:(id)arg1 ;
-(void)getAllVoiceShortcutsWithCompletion:(/*^block*/id)arg1 ;
-(void)setShortcutSuggestions:(id)arg1 ;
-(id<INVCVoiceShortcutClient>)voiceShortcutClient;
-(void)_setVoiceShortcutClient:(id)arg1 ;
@end

