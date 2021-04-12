/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class NSString;


@protocol SBIconContinuityInfo
@property (nonatomic,copy,readonly) NSString * originatingDeviceType; 
@required
-(NSString *)originatingDeviceType;
-(BOOL)isLocationBasedSuggestion;
-(BOOL)isBluetoothAudioPrediction;
-(BOOL)isBluetoothPrediction;
-(BOOL)isHeadphonesPrediction;
-(BOOL)isFirstWakePrediction;

@end

