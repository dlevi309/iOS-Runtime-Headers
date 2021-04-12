/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
-(unsigned)deviceID;
-(MRVirtualVoiceInputDeviceDescriptor *)descriptor;
-(void)setDescriptor:(MRVirtualVoiceInputDeviceDescriptor *)arg1 ;
-(unsigned)recordingState;
-(void)setRecordingState:(unsigned)arg1 ;
-(id)initWithDeviceID:(unsigned)arg1 ;
@end

