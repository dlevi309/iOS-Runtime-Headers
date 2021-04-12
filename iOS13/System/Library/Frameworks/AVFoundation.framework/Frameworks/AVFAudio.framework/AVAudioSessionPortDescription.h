/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/


#import <AVFAudio/AVFAudio-Structs.h>
@class NSString, NSArray, AVAudioSessionDataSourceDescription;

@interface AVAudioSessionPortDescription : NSObject {

	void* _impl;

}

@property (readonly) NSString * portType; 
@property (readonly) NSString * portName; 
@property (readonly) NSString * UID; 
@property (readonly) BOOL hasHardwareVoiceCallProcessing; 
@property (readonly) NSArray * channels; 
@property (readonly) NSArray * dataSources; 
@property (readonly) AVAudioSessionDataSourceDescription * selectedDataSource; 
@property (readonly) AVAudioSessionDataSourceDescription * preferredDataSource; 
+(id)privateCreateArray:(id)arg1 owningSession:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)portType;
-(NSString *)portName;
-(NSArray *)channels;
-(NSArray *)dataSources;
-(AVAudioSessionDataSourceDescription *)selectedDataSource;
-(AVAudioSessionDataSourceDescription *)preferredDataSource;
-(id)initWithSession:(id)arg1 ;
-(unsigned long long)endpointType;
-(NSString *)UID;
-(PortDescriptionImpl*)privateGetImplementation;
-(BOOL)isEqualToPort:(id)arg1 compareStrict:(BOOL)arg2 ;
-(BOOL)hasHardwareVoiceCallProcessing;
-(BOOL)isLiveListenSupported;
-(BOOL)isHeadphones;
-(BOOL)setPreferredDataSource:(id)arg1 error:(id*)arg2 ;
-(id)privateGetID;
-(id)initWithRawPortDescription:(id)arg1 owningSession:(id)arg2 ;
-(void)configureChannelsAndDataSources:(id)arg1 ;
@end

