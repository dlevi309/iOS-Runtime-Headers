/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
*/


@class AMSBTLEPeripheral;

@interface CABTMIDIIncompleteConnectionInfo : NSObject {

	BOOL _connecting;
	unsigned long long _timeOutInterval;
	AMSBTLEPeripheral* _peripheral;

}

@property (getter=isConnecting) BOOL connecting;                          //@synthesize connecting=_connecting - In the implementation block
@property (assign) unsigned long long timeOutInterval;                    //@synthesize timeOutInterval=_timeOutInterval - In the implementation block
@property (nonatomic,retain) AMSBTLEPeripheral * peripheral;              //@synthesize peripheral=_peripheral - In the implementation block
-(void)dealloc;
-(BOOL)isConnecting;
-(AMSBTLEPeripheral *)peripheral;
-(void)setPeripheral:(AMSBTLEPeripheral *)arg1 ;
-(void)setConnecting:(BOOL)arg1 ;
-(void)setTimeOutInterval:(unsigned long long)arg1 ;
-(id)initWithPeripheral:(id)arg1 isConnecting:(BOOL)arg2 ;
-(unsigned long long)timeOutInterval;
@end

