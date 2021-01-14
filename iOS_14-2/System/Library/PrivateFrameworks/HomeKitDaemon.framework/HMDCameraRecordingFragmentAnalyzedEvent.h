/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDCameraRecordingLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSUUID, NSString;

@interface HMDCameraRecordingFragmentAnalyzedEvent : HMDCameraRecordingLogEvent <HMDAWDLogEvent> {

	int _recordingReason;
	long long _analysisResultCode;
	NSUUID* _clipModelID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) long long analysisResultCode;                    //@synthesize analysisResultCode=_analysisResultCode - In the implementation block
@property (retain) NSUUID * clipModelID;                            //@synthesize clipModelID=_clipModelID - In the implementation block
@property (assign) int recordingReason;                             //@synthesize recordingReason=_recordingReason - In the implementation block
+(id)uuid;
-(id)attributeDescriptions;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(NSUUID *)clipModelID;
-(long long)analysisResultCode;
-(int)recordingReason;
-(id)initWithSessionID:(id)arg1 cameraID:(id)arg2 sequenceNumber:(unsigned long long)arg3 ;
-(void)setAnalysisResultCode:(long long)arg1 ;
-(void)setClipModelID:(NSUUID *)arg1 ;
-(void)setRecordingReason:(int)arg1 ;
@end

