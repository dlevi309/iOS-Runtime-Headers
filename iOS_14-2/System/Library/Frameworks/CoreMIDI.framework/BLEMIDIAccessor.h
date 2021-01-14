/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
*/


@interface BLEMIDIAccessor : NSObject
+(unsigned)nullDevice;
+(BOOL)deviceIsNullDevice:(unsigned)arg1 ;
+(BOOL)deviceIsLocalPeripheral:(unsigned)arg1 ;
+(unsigned)midiDeviceForUUID:(id)arg1 ;
+(BOOL)deviceIsOnline:(unsigned)arg1 ;
+(id)nameForMIDIDevice:(unsigned)arg1 ;
+(unsigned)localPeripheral;
+(unsigned)midiDeviceForUUID:(id)arg1 isLocalPeripheral:(BOOL)arg2 isRemotePeripheral:(BOOL)arg3 ;
+(id)localPeripheralName;
+(id)uuidForMIDIDevice:(unsigned)arg1 ;
+(BOOL)deviceIsRemotePeripheral:(unsigned)arg1 ;
+(BOOL)uuidIsForgettable:(id)arg1 ;
+(unsigned short)timeStampOffset:(unsigned long long)arg1 ;
+(unsigned short)reconstructWithHighByte:(unsigned char)arg1 lowByte:(unsigned char)arg2 overflow:(BOOL)arg3 ;
+(unsigned long long)timeStampWithEpoch:(unsigned long long)arg1 offset:(unsigned short)arg2 ;
+(void)splitOffset:(unsigned short)arg1 intoHeaderByte:(char*)arg2 timeStampByte:(char*)arg3 ;
+(void)logEvent:(char*)arg1 length:(unsigned short)arg2 timeStamp:(unsigned long long)arg3 intoBuffer:(char*)arg4 ;
@end

