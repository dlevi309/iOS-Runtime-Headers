/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/

#import <libobjc.A.dylib/CUTPowerMonitorDelegate.h>
#import <libobjc.A.dylib/CUTWiFiManagerDelegate.h>

@class NSString;

@interface IMPowerWifiUsageCollector : NSObject <CUTPowerMonitorDelegate, CUTWiFiManagerDelegate> {

	BOOL _shouldCollectInternalStats;

}

@property (nonatomic,readonly) BOOL shouldCollectInternalStats;              //@synthesize shouldCollectInternalStats=_shouldCollectInternalStats - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_noteWifiLinkDidChangeForInternalCollection:(BOOL)arg1 isOnPower:(BOOL)arg2 ;
-(id)init;
-(void)cutWiFiManagerLinkDidChange:(id)arg1 context:(id)arg2 ;
-(id)todaysKey;
-(BOOL)_shouldWriteDownPowerWifiChanges;
-(id)createTodaysStatisticDictionaryIfNeeded;
-(void)_setExternalLastConnectedDate:(id)arg1 ;
-(void)disconnectFromResourceForTotalDurationKey:(id)arg1 dateKey:(id)arg2 powerWifiDict:(id)arg3 ;
-(BOOL)shouldCollectInternalStats;
-(void)reconnectedToBothResources_ExternalCollection;
-(void)_notePowerDidChangeForInternalCollection:(BOOL)arg1 isOnWifi:(BOOL)arg2 ;
-(void)disconnectedFromAResource_ExternalCollection;
-(void)updateConnectedToPowerWifiIntervalIfConnected;
-(BOOL)_isWifiUsable;
-(id)_getExternalLastConnectedDate;
-(BOOL)connectedToPowerAndWifiForOver20Hours;
-(void)clearConnectedToPowerWifiOver20Hours;
-(double)_getExternalTotalDuration;
-(BOOL)_isOnPower;
-(void)_setExternalTotalDuration:(id)arg1 ;
-(id)_getPowerAndWifiDictionaryForKey:(id)arg1 ;
-(void)reconnectToResourceForTotalDurationKey:(id)arg1 dateKey:(id)arg2 powerWifiDict:(id)arg3 ;
-(void)dealloc;
-(void)cutPowerMonitorBatteryConnectedStateDidChange:(id)arg1 ;
@end

