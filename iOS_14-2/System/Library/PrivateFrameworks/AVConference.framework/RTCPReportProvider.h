/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol RTCPReportProvider <NSObject>
@optional
-(unsigned)getRTCPReportNTPTimeMiddle32ForReportId:(unsigned char)arg1;
-(unsigned)getExtendedSequenceNumberForSequenceNumber:(unsigned short)arg1;

@required
-(BOOL)generateReceptionReportList:(RTCP_RECEPTION_REPORT*)arg1 reportCount:(char*)arg2;

@end

