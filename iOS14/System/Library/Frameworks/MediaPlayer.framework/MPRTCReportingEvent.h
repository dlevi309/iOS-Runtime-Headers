/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)networkInterfaceType;
-(id)newRTCReportingPayloadDictionary;
-(void)setNetworkInterfaceType:(long long)arg1 ;
-(unsigned short)rtcReportingCategory;
-(unsigned short)rtcReportingType;
@end

