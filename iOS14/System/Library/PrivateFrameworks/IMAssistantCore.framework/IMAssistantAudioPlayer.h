/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
*/

#import <libobjc.A.dylib/AVAudioPlayerDelegate.h>

@protocol IMAssistantAudioPlayerDelegate;
@class NSString, AVAudioPlayer;

@interface IMAssistantAudioPlayer : NSObject <AVAudioPlayerDelegate> {

	id<IMAssistantAudioPlayerDelegate> _delegate;
	NSString* _identifier;
	AVAudioPlayer* _player;

}

@property (nonatomic,readonly) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2 ;
-(id)initWithDelegate:(id)arg1 identifier:(id)arg2 ;
-(void)stopPlaying;
-(NSString *)identifier;
-(long long)playerState;
-(BOOL)setupAudioSession;
-(void)cleanupAudioSession;
-(BOOL)startPlayingAudioURL:(id)arg1 ;
@end

