/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDCameraRecordingSessionSignificantEvent.h>

@class NSDate, NSUUID, NSSet, NSData;

@interface HMDMutableCameraRecordingSessionSignificantEvent : HMDCameraRecordingSessionSignificantEvent

@property (assign) unsigned long long reason; 
@property (copy) NSDate * dateOfOccurrence; 
@property (assign) unsigned long long confidenceLevel; 
@property (copy) NSUUID * sessionEntityUUID; 
@property (copy) NSSet * faceClassifications; 
@property (retain) NSData * heroFrameData; 
@property (retain) NSData * faceCropData; 
@property (assign) double timeOffsetWithinClip; 
-(id)copyWithZone:(NSZone*)arg1 ;
@end

