/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBIconContinuityInfo.h>

@class NSString, NSUUID, NSDate, NSURL;

@interface SBBestAppSuggestion : NSObject <SBIconContinuityInfo>

@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier; 
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (nonatomic,copy,readonly) NSString * activityType; 
@property (nonatomic,copy,readonly) NSDate * lastUpdateTime; 
@property (nonatomic,copy,readonly) NSString * originatingDeviceIdentifier; 
@property (nonatomic,copy,readonly) NSString * originatingDeviceName; 
@property (nonatomic,copy,readonly) NSString * originatingDeviceType; 
@property (nonatomic,copy,readonly) NSString * originatingBundleIdentifier; 
@property (nonatomic,copy,readonly) NSString * suggestedLocationName; 
@property (nonatomic,copy,readonly) NSURL * launchURL; 
-(BOOL)isPrediction;
-(NSString *)activityType;
-(NSDate *)lastUpdateTime;
-(NSString *)bundleIdentifier;
-(NSUUID *)uniqueIdentifier;
-(BOOL)isSiriSuggestion;
-(id)description;
-(NSURL *)launchURL;
-(NSString *)originatingDeviceName;
-(NSString *)originatingDeviceIdentifier;
-(NSString *)originatingDeviceType;
-(BOOL)isLocationBasedSuggestion;
-(BOOL)isBluetoothAudioPrediction;
-(BOOL)isBluetoothPrediction;
-(BOOL)isHeadphonesPrediction;
-(BOOL)isFirstWakePrediction;
-(NSString *)originatingBundleIdentifier;
-(NSString *)suggestedLocationName;
-(BOOL)launchURLRequiresInboxCopy;
-(id)makeInboxCopyOfLaunchURLToInboxURL:(id)arg1 ;
-(BOOL)isLocationPredictionOfType:(unsigned long long)arg1 ;
-(BOOL)isArrivedAtHomePrediction;
-(BOOL)isArrivedAtWorkPrediction;
-(BOOL)isLocationPredictionFromSource:(unsigned long long)arg1 ;
-(BOOL)isLocallyGeneratedSuggestion;
-(BOOL)isCarPlayPrediction;
-(BOOL)isCallContinuitySuggestion;
-(BOOL)isNotificationSuggestion;
-(BOOL)isOpenURLSuggestion;
-(BOOL)isHandoff;
-(BOOL)isEligibleForLockScreen;
@end

