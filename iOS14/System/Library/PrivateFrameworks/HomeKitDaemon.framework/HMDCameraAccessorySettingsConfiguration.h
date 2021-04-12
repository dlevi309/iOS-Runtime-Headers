/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSMutableArray;

@interface HMDCameraAccessorySettingsConfiguration : HMFObject {

	BOOL _isRecordingCapable;
	BOOL _isRecordingEnabled;
	BOOL _isRecordingAudioEnabled;
	BOOL _inclusionZone;
	BOOL _smartBulletinBoardNotificationEnabled;
	BOOL _reachabilityNotificationEnabled;
	unsigned long long _recordingEventTriggers;
	unsigned long long _numActivityZones;
	NSMutableArray* _numPointsInActivityZones;

}

@property (nonatomic,retain) NSMutableArray * numPointsInActivityZones;              //@synthesize numPointsInActivityZones=_numPointsInActivityZones - In the implementation block
@property (readonly) BOOL isRecordingCapable;                                        //@synthesize isRecordingCapable=_isRecordingCapable - In the implementation block
@property (readonly) BOOL isRecordingEnabled;                                        //@synthesize isRecordingEnabled=_isRecordingEnabled - In the implementation block
@property (readonly) BOOL isRecordingAudioEnabled;                                   //@synthesize isRecordingAudioEnabled=_isRecordingAudioEnabled - In the implementation block
@property (readonly) unsigned long long recordingEventTriggers;                      //@synthesize recordingEventTriggers=_recordingEventTriggers - In the implementation block
@property (readonly) unsigned long long numActivityZones;                            //@synthesize numActivityZones=_numActivityZones - In the implementation block
@property (readonly) BOOL inclusionZone;                                             //@synthesize inclusionZone=_inclusionZone - In the implementation block
@property (readonly) BOOL smartBulletinBoardNotificationEnabled;                     //@synthesize smartBulletinBoardNotificationEnabled=_smartBulletinBoardNotificationEnabled - In the implementation block
@property (readonly) BOOL reachabilityNotificationEnabled;                           //@synthesize reachabilityNotificationEnabled=_reachabilityNotificationEnabled - In the implementation block
-(unsigned long long)recordingEventTriggers;
-(BOOL)isRecordingAudioEnabled;
-(BOOL)isRecordingEnabled;
-(id)initWithCameraAccessory:(id)arg1 ;
-(unsigned long long)numActivityZones;
-(BOOL)isRecordingCapable;
-(NSMutableArray *)numPointsInActivityZones;
-(void)setNumPointsInActivityZones:(NSMutableArray *)arg1 ;
-(BOOL)inclusionZone;
-(BOOL)smartBulletinBoardNotificationEnabled;
-(BOOL)reachabilityNotificationEnabled;
@end

