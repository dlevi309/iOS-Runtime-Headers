/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCMediaControlInfo.h>

@interface VCMediaControlInfoFaceTimeVideo : VCMediaControlInfo {

	unsigned char _controlInfoCameraStatus;
	unsigned char _controlInfoLTRBits;
	unsigned _controlInfoLTRTimestamp;
	SCD_Struct_VC101 _controlInfoFrameExtensionData;
	unsigned char _controlInfoFEC[36];
	unsigned long long _controlInfoFECLength;
	unsigned _controlInfoProbe;
	unsigned _controlInfoReceivedKbits;
	unsigned _controlInfoReceivedPackets;
	unsigned _controlInfoVideoPacketSize;
	unsigned _controlInfoVideoTimestamp;
	double _controlInfoVideoArrivalTime;

}
-(id)description;
-(int)configureWithBuffer:(const char*)arg1 length:(unsigned long long)arg2 optionalControlInfo:(SCD_Struct_VC78*)arg3 ;
-(int)setInfo:(void*)arg1 size:(unsigned long long)arg2 type:(unsigned)arg3 ;
-(BOOL)hasInfoType:(unsigned)arg1 ;
-(int)getInfo:(void*)arg1 bufferLength:(unsigned long long)arg2 infoSize:(unsigned long long*)arg3 type:(unsigned)arg4 ;
-(int)serializeToBuffer:(char*)arg1 bufferLength:(unsigned long long)arg2 blobLength:(unsigned long long*)arg3 ;
-(unsigned long long)serializedSize;
-(int)handleOptionalControlInfo:(SCD_Struct_VC78*)arg1 ;
@end

