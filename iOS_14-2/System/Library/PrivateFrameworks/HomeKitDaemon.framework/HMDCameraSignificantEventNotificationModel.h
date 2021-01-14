/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (retain) CKAsset * faceCropAsset; 
@property (retain) NSDictionary * homePresenceByPairingIdentity; 
+(id)hmbExternalRecordType;
+(id)hmbProperties;
+(id)hmbQueries;
+(id)significantEventsBetweenDatesQueryWithIsAscending:(BOOL)arg1 ;
-(id)createClipSignificantEventWithCameraProfileUUID:(id)arg1 faceClassification:(id)arg2 ;
@end

