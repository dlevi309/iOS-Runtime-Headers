/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCMediaControlInfo.h>

@interface VCMediaControlInfoFaceTimeVideo : VCMediaControlInfo {

	unsigned char _controlInfoCameraStatus;
	unsigned char _controlInfoLTRBits;
	unsigned _controlInfoLTRTimestamp;
	SCD_Struct_VC122 _controlInfoFrameExtensionData;
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
-(unsigned long long)serializedSize;
-(int)configureWithBuffer:(const char*)arg1 length:(unsigned long long)arg2 optionalControlInfo:(SCD_Struct_VC95*)arg3 ;
-(int)setInfo:(void*)arg1 size:(unsigned long long)arg2 type:(unsigned)arg3 ;
-(BOOL)hasInfoType:(unsigned)arg1 ;
-(int)getInfo:(void*)arg1 bufferLength:(unsigned long long)arg2 infoSize:(unsigned long long*)arg3 type:(unsigned)arg4 ;
-(int)serializeToBuffer:(char*)arg1 bufferLength:(unsigned long long)arg2 blobLength:(unsigned long long*)arg3 ;
-(int)handleOptionalControlInfo:(SCD_Struct_VC95*)arg1 ;
@end

