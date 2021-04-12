/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@interface MPRTCReportingEvent : NSObject {

	unsigned short _rtcReportingCategory;
	unsigned short _rtcReportingType;
	long long _networkInterfaceType;

}

@property (nonatomic,readonly) unsigned short rtcReportingCategory;              //@synthesize rtcReportingCategory=_rtcReportingCategory - In the implementation block
@property (nonatomic,readonly) unsigned short rtcReportingType;                  //@synthesize rtcReportingType=_rtcReportingType - In the implementation block
@property (assign,nonatomic) long long networkInterfaceType;                     //@synthesize networkInterfaceType=_networkInterfaceType - In the implementation block
-(id)newRTCReportingMessageDictionary;
-(id)newRTCReportingPayloadDictionary;
-(long long)networkInterfaceType;
-(void)setNetworkInterfaceType:(long long)arg1 ;
-(unsigned short)rtcReportingCategory;
-(unsigned short)rtcReportingType;
@end

