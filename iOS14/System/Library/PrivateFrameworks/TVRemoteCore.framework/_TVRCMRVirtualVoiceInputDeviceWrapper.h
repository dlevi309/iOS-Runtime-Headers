/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@class NSArray, NSDictionary;

@interface _TVRCMRVirtualVoiceInputDeviceWrapper : NSObject {

	void* _deviceDescriptor;

}

@property (nonatomic,copy) NSArray * supportedFormats; 
@property (nonatomic,copy) NSDictionary * defaultAudioFormat; 
-(NSArray *)supportedFormats;
-(id)init;
-(void)setSupportedFormats:(NSArray *)arg1 ;
-(void*)deviceDescriptor;
-(void)dealloc;
-(NSDictionary *)defaultAudioFormat;
-(void)setDefaultAudioFormat:(NSDictionary *)arg1 ;
@end

