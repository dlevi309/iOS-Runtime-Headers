/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(AMSBTLEPeripheral *)peripheral;
-(BOOL)isConnecting;
-(void)setPeripheral:(AMSBTLEPeripheral *)arg1 ;
-(void)dealloc;
-(void)setConnecting:(BOOL)arg1 ;
-(void)setTimeOutInterval:(unsigned long long)arg1 ;
-(id)initWithPeripheral:(id)arg1 isConnecting:(BOOL)arg2 ;
-(unsigned long long)timeOutInterval;
@end

