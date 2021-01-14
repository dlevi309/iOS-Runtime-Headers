/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioSession.framework/AudioSession
*/


#import <AudioSession/AudioSession-Structs.h>
@class NSString, NSArray, AVAudioSessionDataSourceDescription;

@interface AVAudioSessionPortDescription : NSObject {

	void* _impl;

}

@property (nonatomic,readonly) NSString * portType; 
@property (nonatomic,readonly) NSString * portName; 
@property (nonatomic,readonly) NSString * UID; 
@property (readonly) BOOL hasHardwareVoiceCallProcessing; 
@property (nonatomic,readonly) NSArray * channels; 
@property (nonatomic,readonly) NSArray * dataSources; 
@property (nonatomic,readonly) AVAudioSessionDataSourceDescription * selectedDataSource; 
@property (nonatomic,readonly) AVAudioSessionDataSourceDescription * preferredDataSource; 
+(id)privateCreateArray:(id)arg1 owningSession:(id)arg2 ;
-(NSArray *)dataSources;
-(AVAudioSessionDataSourceDescription *)selectedDataSource;
-(id)initWithSession:(id)arg1 ;
-(NSString *)portType;
-(BOOL)isHeadphones;
-(BOOL)isEqualToPort:(id)arg1 compareStrict:(BOOL)arg2 ;
-(NSString *)UID;
-(BOOL)setPreferredDataSource:(id)arg1 error:(id*)arg2 ;
-(id)description;
-(unsigned long long)endpointType;
-(PortDescriptionImpl*)privateGetImplementation;
-(AVAudioSessionDataSourceDescription *)preferredDataSource;
-(id)initWithRawPortDescription:(id)arg1 owningSession:(id)arg2 ;
-(BOOL)hasHardwareVoiceCallProcessing;
-(BOOL)isLiveListenSupported;
-(unsigned long long)hash;
-(BOOL)isLowLatencyAirPlay;
-(id)privateGetID;
-(NSArray *)channels;
-(NSString *)portName;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)configureChannelsAndDataSources:(id)arg1 ;
@end

