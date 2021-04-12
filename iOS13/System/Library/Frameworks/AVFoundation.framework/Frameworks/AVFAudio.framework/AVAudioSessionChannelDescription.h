/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/


#import <AVFAudio/AVFAudio-Structs.h>
@class NSString;

@interface AVAudioSessionChannelDescription : NSObject {

	void* _impl;

}

@property (readonly) NSString * channelName; 
@property (readonly) NSString * owningPortUID; 
@property (readonly) unsigned long long channelNumber; 
@property (readonly) unsigned channelLabel; 
+(id)privateCreate:(id)arg1 portUID:(id)arg2 channelNumber:(unsigned)arg3 ;
+(id)privateCreateArray:(id)arg1 portUID:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)channelNumber;
-(NSString *)owningPortUID;
-(unsigned)channelLabel;
-(ChannelDescriptionImpl*)privateGetImplementation;
-(BOOL)isEqualToChannel:(id)arg1 ;
-(NSString *)channelName;
@end

