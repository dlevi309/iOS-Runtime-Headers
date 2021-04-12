/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDCameraRecordingLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSString;

@interface HMDCameraRecordingClipNotificationEvent : HMDCameraRecordingLogEvent <HMDAWDLogEvent> {

	unsigned long long _recordingEventTriggers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long recordingEventTriggers;              //@synthesize recordingEventTriggers=_recordingEventTriggers - In the implementation block
+(id)uuid;
-(id)attributeDescriptions;
-(unsigned long long)recordingEventTriggers;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(id)initWithSessionID:(id)arg1 cameraID:(id)arg2 sequenceNumber:(unsigned long long)arg3 recordingEventTriggers:(unsigned long long)arg4 ;
@end

