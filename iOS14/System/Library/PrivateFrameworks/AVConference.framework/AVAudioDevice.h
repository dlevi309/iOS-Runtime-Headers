/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@class NSString, NSNumber;

@interface AVAudioDevice : NSObject {

	NSString* _deviceName;
	NSNumber* _deviceID;
	NSString* _UID;
	BOOL _inputAvailable;
	BOOL _outputAvailable;
	BOOL _preferredDevice;
	BOOL _isBluetoothDevice;
	BOOL _isLineIn;

}

@property (nonatomic,readonly) NSString * deviceName;                                      //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) NSNumber * deviceID;                                        //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,readonly) NSString * UID;                                             //@synthesize UID=_UID - In the implementation block
@property (nonatomic,readonly) BOOL inputAvailable;                                        //@synthesize inputAvailable=_inputAvailable - In the implementation block
@property (nonatomic,readonly) BOOL outputAvailable;                                       //@synthesize outputAvailable=_outputAvailable - In the implementation block
@property (getter=isPreferredDevice,nonatomic,readonly) BOOL preferredDevice;              //@synthesize preferredDevice=_preferredDevice - In the implementation block
@property (nonatomic,readonly) BOOL isBluetoothDevice; 
-(NSString *)deviceName;
-(NSNumber *)deviceID;
-(NSString *)UID;
-(id)initWithDeviceID:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(BOOL)outputAvailable;
-(BOOL)isBluetoothDevice;
-(void)createName;
-(void)createUID;
-(BOOL)isSomethingConnectedToJack;
-(void)createNameForScope:(unsigned)arg1 ;
-(BOOL)isValidDevice;
-(BOOL)isValidInputDevice;
-(BOOL)isBuiltInDevice;
-(unsigned*)allocDeviceControlListAndSize:(unsigned*)arg1 ;
-(unsigned)getDataSourceControlID;
-(BOOL)isStreamAvailableForScope:(unsigned)arg1 ;
-(BOOL)inputAvailable;
-(BOOL)isPreferredDevice;
@end

