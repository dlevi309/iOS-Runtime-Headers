/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>

@class NSUUID;

@interface HMDCameraRecordingLogEvent : HMDLogEvent {

	NSUUID* _sessionID;
	unsigned long long _sequenceNumber;
	NSUUID* _cameraID;

}

@property (copy,readonly) NSUUID * cameraID;                         //@synthesize cameraID=_cameraID - In the implementation block
@property (copy,readonly) NSUUID * sessionID;                        //@synthesize sessionID=_sessionID - In the implementation block
@property (assign) unsigned long long sequenceNumber;                //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (copy,readonly) NSUUID * ephemeralCameraID; 
@property (readonly) unsigned long long startTimestamp; 
@property (readonly) unsigned long long endTimestamp; 
-(NSUUID *)sessionID;
-(void)setSequenceNumber:(unsigned long long)arg1 ;
-(NSUUID *)cameraID;
-(unsigned long long)startTimestamp;
-(unsigned long long)sequenceNumber;
-(unsigned long long)endTimestamp;
-(id)attributeDescriptions;
-(id)initWithEventType:(id)arg1 sessionID:(id)arg2 cameraID:(id)arg3 sequenceNumber:(unsigned long long)arg4 ;
-(NSUUID *)ephemeralCameraID;
@end

