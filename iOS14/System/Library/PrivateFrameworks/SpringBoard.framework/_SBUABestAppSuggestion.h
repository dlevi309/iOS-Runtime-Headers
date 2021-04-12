/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBBestAppSuggestion.h>

@class UABestAppSuggestion;

@interface _SBUABestAppSuggestion : SBBestAppSuggestion {

	UABestAppSuggestion* _appSuggestion;

}
-(id)activityType;
-(id)lastUpdateTime;
-(id)bundleIdentifier;
-(id)uniqueIdentifier;
-(id)originatingDeviceName;
-(id)originatingDeviceIdentifier;
-(id)originatingDeviceType;
-(unsigned long long)hash;
-(BOOL)isLocationBasedSuggestion;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isLocallyGeneratedSuggestion;
-(BOOL)isCallContinuitySuggestion;
-(BOOL)isNotificationSuggestion;
-(BOOL)isOpenURLSuggestion;
-(BOOL)isHandoff;
@end

