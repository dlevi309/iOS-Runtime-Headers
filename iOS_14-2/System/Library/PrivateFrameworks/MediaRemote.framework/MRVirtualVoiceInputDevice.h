/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@class MRVirtualVoiceInputDeviceDescriptor, NSData;

@interface MRVirtualVoiceInputDevice : NSObject {

	unsigned _deviceID;
	unsigned _recordingState;
	MRVirtualVoiceInputDeviceDescriptor* _descriptor;

}

@property (nonatomic,readonly) unsigned deviceID;                                         //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,copy) MRVirtualVoiceInputDeviceDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (assign,nonatomic) unsigned recordingState;                                     //@synthesize recordingState=_recordingState - In the implementation block
@property (nonatomic,readonly) NSData * data; 
-(unsigned)deviceID;
-(id)initWithDeviceID:(unsigned)arg1 ;
-(id)initWithData:(id)arg1 ;
-(MRVirtualVoiceInputDeviceDescriptor *)descriptor;
-(id)description;
-(NSData *)data;
-(unsigned)recordingState;
-(void)setRecordingState:(unsigned)arg1 ;
-(void)setDescriptor:(MRVirtualVoiceInputDeviceDescriptor *)arg1 ;
@end

