/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
*/


@class AVAudioSessionChannelDescription, NSString;

@interface TTSAudioSessionChannel : NSObject {

	unsigned _channelLabel;
	AVAudioSessionChannelDescription* _channel;
	NSString* _channelName;
	unsigned long long _channelNumber;
	NSString* _owningPortUID;

}

@property (nonatomic,retain) AVAudioSessionChannelDescription * channel;              //@synthesize channel=_channel - In the implementation block
@property (nonatomic,retain) NSString * channelName;                                  //@synthesize channelName=_channelName - In the implementation block
@property (assign,nonatomic) unsigned long long channelNumber;                        //@synthesize channelNumber=_channelNumber - In the implementation block
@property (assign,nonatomic) unsigned channelLabel;                                   //@synthesize channelLabel=_channelLabel - In the implementation block
@property (nonatomic,retain) NSString * owningPortUID;                                //@synthesize owningPortUID=_owningPortUID - In the implementation block
+(id)channelWithChannel:(id)arg1 ;
+(id)convertChannels:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(AVAudioSessionChannelDescription *)channel;
-(void)setChannel:(AVAudioSessionChannelDescription *)arg1 ;
-(unsigned long long)channelNumber;
-(void)setChannelNumber:(unsigned long long)arg1 ;
-(NSString *)owningPortUID;
-(unsigned)channelLabel;
-(NSString *)channelName;
-(void)setChannelName:(NSString *)arg1 ;
-(void)setChannelLabel:(unsigned)arg1 ;
-(void)setOwningPortUID:(NSString *)arg1 ;
@end

