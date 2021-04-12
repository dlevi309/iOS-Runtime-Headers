/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioSession.framework/AudioSession
*/


#import <AudioSession/AudioSession-Structs.h>
@class NSString;

@interface AVAudioSessionChannelDescription : NSObject {

	void* _impl;

}

@property (nonatomic,readonly) NSString * channelName; 
@property (nonatomic,readonly) NSString * owningPortUID; 
@property (nonatomic,readonly) unsigned long long channelNumber; 
@property (nonatomic,readonly) unsigned channelLabel; 
+(id)privateCreateArray:(id)arg1 portUID:(id)arg2 ;
+(id)privateCreate:(id)arg1 portUID:(id)arg2 channelNumber:(unsigned)arg3 ;
-(id)init;
-(id)description;
-(ChannelDescriptionImpl*)privateGetImplementation;
-(unsigned long long)hash;
-(unsigned long long)channelNumber;
-(BOOL)isEqualToChannel:(id)arg1 ;
-(NSString *)channelName;
-(unsigned)channelLabel;
-(NSString *)owningPortUID;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

