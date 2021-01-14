/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/CPAnalyticsDestinationProtocol.h>

@class NSMutableDictionary, NSString;

@interface PXAnalyticsSlideshowUsageDestination : NSObject <CPAnalyticsDestinationProtocol> {

	NSMutableDictionary* _slideshowInfos;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportCPAnalyticsIntervalName;
+(id)exportEndedCPAnalyticsEventNameForSuccess:(BOOL)arg1 error:(id)arg2 duration:(double)arg3 ;
+(id)exportEndedCoreAnalyticsEventName;
+(id)payloadExportDurationKey;
+(id)payloadExportErrorCodeKey;
+(id)payloadExportErrorDomainKey;
+(id)payloadExportEndStateKey;
+(BOOL)_isUserCancelledError:(id)arg1 ;
+(id)playbackEndedCPAnalyticsEventNameForTimeFractionPlayed:(double)arg1 ;
+(id)playbackEndedCoreAnalyticsEventName;
+(id)playbackEndedCPAnalyticsEventNameForTerminationType:(long long)arg1 ;
+(id)payloadTimeFractionPlayedKey;
+(id)playbackStartedCPAnalyticsEventNameForTotalAssetCount:(long long)arg1 ;
+(id)payloadTotalAssetCountKey;
+(id)playbackStartedCoreAnalyticsEventName;
+(id)payloadAssetCountKeyForPlaybackStyle:(long long)arg1 ;
+(id)payloadAppSuspensionCountKey;
+(id)payloadTotalPlaybackTimeKey;
+(id)payloadTimePausedKey;
+(id)payloadPauseCountKey;
+(id)exportFailedCPAnalyticsEventName;
-(void)processEvent:(id)arg1 ;
-(id)init;
-(id)_createInfoForEvent:(id)arg1 ;
-(id)_existingInfoForEvent:(id)arg1 ;
-(id)_popInfoForEndEvent:(id)arg1 ;
-(id)_existingInfoForEvent:(id)arg1 pop:(BOOL)arg2 ;
-(id)_createDefaultPayloadForInfo:(id)arg1 ;
-(id)_payloadFilteredForCoreAnlaytics:(id)arg1 ;
@end

