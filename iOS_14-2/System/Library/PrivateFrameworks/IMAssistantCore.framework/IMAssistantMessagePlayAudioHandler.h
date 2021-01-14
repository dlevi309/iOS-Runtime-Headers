/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
*/

#import <IMAssistantCore/IMAssistantMessageQueryHandler.h>
#import <IMAssistantCore/IMAssistantAudioPlayerDelegate.h>
#import <libobjc.A.dylib/INPlayAudioMessageIntentHandling.h>

@class IMAssistantAudioPlayer, NSString;

@interface IMAssistantMessagePlayAudioHandler : IMAssistantMessageQueryHandler <IMAssistantAudioPlayerDelegate, INPlayAudioMessageIntentHandling> {

	IMAssistantAudioPlayer* _audioPlayer;
	/*^block*/id _completionHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handlePlayAudioMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)confirmPlayAudioMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)imAssistantAudioPlayer:(id)arg1 didUpdateState:(long long)arg2 ;
-(id)createAudioPlayerWithIdentifier:(id)arg1 ;
-(void)queryAudioMessageURLForIntent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)activeAudioPlayer;
@end

