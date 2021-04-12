/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@class AVInternalDeviceList;

@interface AVAudioDeviceList : NSObject {

	AVInternalDeviceList* _internalList;

}

@property (nonatomic,copy) id changeListener; 
+(id)currentInputDevice;
+(BOOL)setInputDevice:(id)arg1 ;
+(id)defaultInputDevice;
+(id)defaultOutputDevice;
+(id)deviceForUID:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)devices;
-(id)inputDevices;
-(id)outputDevices;
-(void)setChangeListener:(id)arg1 ;
-(id)changeListener;
@end

