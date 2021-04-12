/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBBestAppSuggestion.h>

@class _DECAppItem, _DECResult, NSUUID;

@interface _SBExpertAppSuggestion : SBBestAppSuggestion {

	_DECAppItem* _appSuggestion;
	_DECResult* _result;

}

@property (nonatomic,readonly) _DECAppItem * appSuggestion;              //@synthesize appSuggestion=_appSuggestion - In the implementation block
@property (nonatomic,readonly) _DECResult * result;                      //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) NSUUID * resultUUID; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)bundleIdentifier;
-(_DECResult *)result;
-(id)originatingDeviceName;
-(BOOL)isPrediction;
-(BOOL)isLocationBasedSuggestion;
-(BOOL)isBluetoothAudioPrediction;
-(BOOL)isBluetoothPrediction;
-(BOOL)isHeadphonesPrediction;
-(BOOL)isFirstWakePrediction;
-(_DECAppItem *)appSuggestion;
-(BOOL)isArrivedAtHomePrediction;
-(BOOL)isArrivedAtWorkPrediction;
-(BOOL)isLocallyGeneratedSuggestion;
-(BOOL)isCarPlayPrediction;
-(id)initWithAppSuggestion:(id)arg1 result:(id)arg2 ;
-(NSUUID *)resultUUID;
@end

