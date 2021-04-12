/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
*/


@protocol AXHAUltronModelAssetManagerDelegate <NSObject>
@optional
-(void)assets:(id)arg1 totalSizeExpected:(long long)arg2 downloadProgressTotalWritten:(long long)arg3 remainingTimeExpected:(double)arg4 isStalled:(BOOL)arg5;

@required
-(void)assetsReadyForUltronManager:(id)arg1;
-(void)assetsNotReadyForUltronManager:(id)arg1;

@end

