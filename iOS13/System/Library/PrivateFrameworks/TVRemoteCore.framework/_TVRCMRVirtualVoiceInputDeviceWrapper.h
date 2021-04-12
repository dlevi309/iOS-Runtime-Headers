/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@class NSArray, NSDictionary;

@interface _TVRCMRVirtualVoiceInputDeviceWrapper : NSObject {

	void* _deviceDescriptor;

}

@property (nonatomic,copy) NSArray * supportedFormats; 
@property (nonatomic,copy) NSDictionary * defaultAudioFormat; 
-(id)init;
-(void)dealloc;
-(NSArray *)supportedFormats;
-(void)setSupportedFormats:(NSArray *)arg1 ;
-(void*)deviceDescriptor;
-(NSDictionary *)defaultAudioFormat;
-(void)setDefaultAudioFormat:(NSDictionary *)arg1 ;
@end

