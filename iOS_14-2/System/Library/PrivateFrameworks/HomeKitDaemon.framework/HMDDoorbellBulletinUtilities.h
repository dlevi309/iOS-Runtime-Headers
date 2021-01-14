/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDDoorbellBulletinUtilities.h>

@protocol HMDDoorbellBulletinUtilities <NSObject>
@required
+(id)localizedDoorbellMessageForSignificantEvents:(id)arg1;
+(id)clipUUIDsForCoalesceableSignificantEvents:(id)arg1;
+(id)significantEventsRelevantToDoorbellPress:(id)arg1 forCameraProfile:(id)arg2;
+(id)localizedAudioAccessoryAnnounceMessageForSignificantEvents:(id)arg1;
+(id)localizedMessageForCharacteristic:(id)arg1;
+(id)faceClassificationsNearDateOfDoorbellPress:(id)arg1 forCameraProfile:(id)arg2;

@end


@class NSString;

@interface HMDDoorbellBulletinUtilities : HMFObject <HMFLogging, HMDDoorbellBulletinUtilities>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)localizedDoorbellMessageForSignificantEvents:(id)arg1 ;
+(id)clipUUIDsForCoalesceableSignificantEvents:(id)arg1 ;
+(id)significantEventsRelevantToDoorbellPress:(id)arg1 forCameraProfile:(id)arg2 ;
+(id)_localizedDoorbellMessageForSignificantEvents:(id)arg1 forAudioAccessory:(BOOL)arg2 ;
+(id)_significantEventsWithinTimeWindowOfDoorbellPress:(id)arg1 forCameraProfile:(id)arg2 ;
+(id)localizedAudioAccessoryAnnounceMessageForSignificantEvents:(id)arg1 ;
+(id)localizedMessageForCharacteristic:(id)arg1 ;
+(id)faceClassificationsNearDateOfDoorbellPress:(id)arg1 forCameraProfile:(id)arg2 ;
@end

