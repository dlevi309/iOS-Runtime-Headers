/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setChannel:(AVAudioSessionChannelDescription *)arg1 ;
-(AVAudioSessionChannelDescription *)channel;
-(id)description;
-(unsigned long long)channelNumber;
-(void)setChannelNumber:(unsigned long long)arg1 ;
-(NSString *)channelName;
-(unsigned)channelLabel;
-(NSString *)owningPortUID;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setChannelName:(NSString *)arg1 ;
-(void)setChannelLabel:(unsigned)arg1 ;
-(void)setOwningPortUID:(NSString *)arg1 ;
@end

