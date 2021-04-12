/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBBestAppSuggestion.h>

@class UABestAppSuggestion;

@interface _SBUABestAppSuggestion : SBBestAppSuggestion {

	UABestAppSuggestion* _appSuggestion;

}

@property (nonatomic,readonly) UABestAppSuggestion * appSuggestion;              //@synthesize appSuggestion=_appSuggestion - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)bundleIdentifier;
-(id)activityType;
-(id)uniqueIdentifier;
-(id)originatingDeviceType;
-(id)originatingDeviceName;
-(id)lastUpdateTime;
-(id)originatingDeviceIdentifier;
-(BOOL)isLocationBasedSuggestion;
-(UABestAppSuggestion *)appSuggestion;
-(BOOL)isLocallyGeneratedSuggestion;
-(BOOL)isCallContinuitySuggestion;
-(id)initWithAppSuggestion:(id)arg1 ;
-(BOOL)isNotificationSuggestion;
-(BOOL)isOpenURLSuggestion;
-(BOOL)isHandoff;
@end

