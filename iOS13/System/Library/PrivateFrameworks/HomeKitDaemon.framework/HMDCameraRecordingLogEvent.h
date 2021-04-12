/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setSequenceNumber:(unsigned long long)arg1 ;
-(unsigned long long)sequenceNumber;
-(NSUUID *)sessionID;
-(unsigned long long)startTimestamp;
-(unsigned long long)endTimestamp;
-(id)attributeDescriptions;
-(NSUUID *)cameraID;
-(id)initWithEventType:(id)arg1 sessionID:(id)arg2 cameraID:(id)arg3 sequenceNumber:(unsigned long long)arg4 ;
-(NSUUID *)ephemeralCameraID;
@end

