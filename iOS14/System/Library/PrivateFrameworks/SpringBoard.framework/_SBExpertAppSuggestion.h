/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isPrediction;
-(id)bundleIdentifier;
-(id)originatingDeviceName;
-(unsigned long long)hash;
-(_DECResult *)result;
-(_DECAppItem *)appSuggestion;
-(BOOL)isLocationBasedSuggestion;
-(BOOL)isBluetoothAudioPrediction;
-(BOOL)isBluetoothPrediction;
-(BOOL)isHeadphonesPrediction;
-(BOOL)isFirstWakePrediction;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isArrivedAtHomePrediction;
-(BOOL)isArrivedAtWorkPrediction;
-(BOOL)isLocallyGeneratedSuggestion;
-(BOOL)isCarPlayPrediction;
-(id)initWithAppSuggestion:(id)arg1 result:(id)arg2 ;
-(NSUUID *)resultUUID;
@end

