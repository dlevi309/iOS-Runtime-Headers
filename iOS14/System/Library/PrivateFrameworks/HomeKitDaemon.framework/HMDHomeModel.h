/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSData, NSString, NSDate, NSNumber, HMDHomeKitVersion, HMDNaturalLightingContext;

@interface HMDHomeModel : HMDBackingStoreModelObject

@property (nonatomic,retain) NSData * encodedNaturalLightingContext; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSString * ownerName; 
@property (nonatomic,retain) NSString * ownerUserID; 
@property (nonatomic,retain) NSString * ownerUUID; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,retain) NSDate * firstHAPAccessoryAddedDate; 
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
@property (nonatomic,retain) NSNumber * doorbellChimeEnabled; 
@property (nonatomic,copy) HMDNaturalLightingContext * naturalLightingContext; 
+(id)properties;
-(HMDNaturalLightingContext *)naturalLightingContext;
-(void)setNaturalLightingContext:(HMDNaturalLightingContext *)arg1 ;
@end

