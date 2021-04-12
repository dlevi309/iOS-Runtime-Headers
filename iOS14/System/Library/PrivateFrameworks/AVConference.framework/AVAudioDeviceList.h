/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@class AVInternalDeviceList;

@interface AVAudioDeviceList : NSObject {

	AVInternalDeviceList* _internalList;

}

@property (nonatomic,copy) id changeListener; 
+(id)currentInputDevice;
+(id)defaultOutputDevice;
+(id)defaultInputDevice;
+(BOOL)setInputDevice:(id)arg1 ;
+(id)deviceForUID:(id)arg1 ;
-(id)devices;
-(id)init;
-(id)inputDevices;
-(id)outputDevices;
-(void)dealloc;
-(void)setChangeListener:(id)arg1 ;
-(id)changeListener;
@end

