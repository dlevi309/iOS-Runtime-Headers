/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@class NSData, NSUUID;

@interface AFMyriadAdvertisementContextRecord : NSObject {

	unsigned char _advertisementContextVersion;
	long long _advertisementRecordType;
	double _voiceTriggerEndTime;
	NSData* _advertisementPayload;
	NSUUID* _deviceID;
	double _advertisementDispatchTime;

}

@property (nonatomic,readonly) unsigned char advertisementContextVersion;              //@synthesize advertisementContextVersion=_advertisementContextVersion - In the implementation block
@property (nonatomic,readonly) long long advertisementRecordType;                      //@synthesize advertisementRecordType=_advertisementRecordType - In the implementation block
@property (nonatomic,readonly) double voiceTriggerEndTime;                             //@synthesize voiceTriggerEndTime=_voiceTriggerEndTime - In the implementation block
@property (nonatomic,copy,readonly) NSData * advertisementPayload;                     //@synthesize advertisementPayload=_advertisementPayload - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * deviceID;                                 //@synthesize deviceID=_deviceID - In the implementation block
@property (assign,nonatomic) double advertisementDispatchTime;                         //@synthesize advertisementDispatchTime=_advertisementDispatchTime - In the implementation block
-(NSUUID *)deviceID;
-(id)description;
-(id)initWithMyriadAdvertisementContextRecordData:(id)arg1 ;
-(void)_initializeMyriadAdvertisementContextRecordFromData:(id)arg1 ;
-(unsigned long long)_advertismentPayloadSizeForVersion:(unsigned char)arg1 ;
-(id)_deviceIDFromBytes:(const unsigned char*)arg1 ;
-(char)_getAdvertismentRecordTypeForVersion:(unsigned char)arg1 data:(id)arg2 ;
-(double)_getVoiceTriggerEndTimeForVersion:(unsigned char)arg1 data:(id)arg2 ;
-(id)_getMyriadAdvertisementDataForVersion:(unsigned char)arg1 data:(id)arg2 ;
-(id)recordForDeviceId:(id)arg1 ;
-(id)_getDeviceIdForVersion:(unsigned char)arg1 data:(id)arg2 ;
-(id)myriadAdvertisementContextAsData;
-(unsigned char)advertisementContextVersion;
-(id)initWithAdvertisementRecordType:(long long)arg1 voiceTriggerEndTime:(double)arg2 advertisementPayload:(id)arg3 deviceID:(id)arg4 ;
-(BOOL)isSaneForVoiceTriggerEndTime:(double)arg1 endtimeDistanceThreshold:(double)arg2 ;
-(BOOL)compareAdvertisementPayload:(id)arg1 ;
-(long long)advertisementRecordType;
-(double)voiceTriggerEndTime;
-(NSData *)advertisementPayload;
-(double)advertisementDispatchTime;
-(void)setAdvertisementDispatchTime:(double)arg1 ;
@end

