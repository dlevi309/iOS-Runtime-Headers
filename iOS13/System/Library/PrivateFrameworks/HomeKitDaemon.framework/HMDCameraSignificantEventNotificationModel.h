/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitBackingStore/HMBModel.h>

@class NSNumber, NSDate, HMBModelCloudReference, CKAsset, NSDictionary;

@interface HMDCameraSignificantEventNotificationModel : HMBModel

@property (retain) NSNumber * significantEvent; 
@property (retain) NSNumber * confidenceLevel; 
@property (retain) NSDate * dateOfOccurrence; 
@property (retain) NSNumber * timeOffsetWithinClip; 
@property (retain) HMBModelCloudReference * associatedClip; 
@property (retain) CKAsset * heroFrameAsset; 
@property (retain) NSDictionary * homePresenceByPairingIdentity; 
+(id)hmbProperties;
+(id)hmbExternalRecordType;
-(id)createSignificantEvent;
@end

