/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSString, NSDate, NSNumber, NSData, HMDHomeKitVersion;

@interface HMDHomeModel : HMDBackingStoreModelObject

@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSString * ownerName; 
@property (nonatomic,retain) NSString * ownerUserID; 
@property (nonatomic,retain) NSString * ownerUUID; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,retain) NSString * defaultRoomUUID; 
@property (nonatomic,retain) NSNumber * presenceAuthorizationStatus; 
@property (nonatomic,retain) NSNumber * presenceComputeStatus; 
@property (nonatomic,retain) NSData * ownerPublicKey; 
@property (nonatomic,retain) NSData * homeLocationData; 
@property (nonatomic,retain) NSString * primaryResidentUUID; 
@property (nonatomic,copy) HMDHomeKitVersion * sharedHomeSourceVersion; 
@property (nonatomic,retain) NSNumber * networkProtectionMode; 
@property (nonatomic,retain) NSNumber * multiUserEnabled; 
@property (nonatomic,retain) NSNumber * hasAnyUserAcknowledgedCameraRecordingOnboarding; 
+(id)properties;
@end

