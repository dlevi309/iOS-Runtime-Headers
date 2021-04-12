/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)bundleIdentifier;
-(NSString *)activityType;
-(NSUUID *)uniqueIdentifier;
-(NSString *)originatingDeviceType;
-(NSString *)originatingDeviceName;
-(NSDate *)lastUpdateTime;
-(NSURL *)launchURL;
-(BOOL)isPrediction;
-(NSString *)originatingDeviceIdentifier;
-(NSString *)originatingBundleIdentifier;
-(BOOL)isLocationBasedSuggestion;
-(BOOL)isBluetoothAudioPrediction;
-(BOOL)isBluetoothPrediction;
-(BOOL)isHeadphonesPrediction;
-(BOOL)isFirstWakePrediction;
-(NSString *)suggestedLocationName;
-(BOOL)launchURLRequiresInboxCopy;
-(id)makeInboxCopyOfLaunchURLToInboxURL:(id)arg1 ;
-(BOOL)isLocationPredictionOfType:(unsigned long long)arg1 ;
-(BOOL)isSiriSuggestion;
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

