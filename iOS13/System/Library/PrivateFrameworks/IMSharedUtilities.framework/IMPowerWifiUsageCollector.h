/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(BOOL)_isOnPower;
-(void)cutWiFiManagerLinkDidChange:(id)arg1 context:(id)arg2 ;
-(void)cutPowerMonitorBatteryConnectedStateDidChange:(id)arg1 ;
-(void)clearConnectedToPowerWifiOver20Hours;
-(BOOL)shouldCollectInternalStats;
-(BOOL)_isWifiUsable;
-(id)todaysKey;
-(id)createTodaysStatisticDictionaryIfNeeded;
-(id)_getPowerAndWifiDictionaryForKey:(id)arg1 ;
-(void)reconnectToResourceForTotalDurationKey:(id)arg1 dateKey:(id)arg2 powerWifiDict:(id)arg3 ;
-(void)disconnectFromResourceForTotalDurationKey:(id)arg1 dateKey:(id)arg2 powerWifiDict:(id)arg3 ;
-(double)_getExternalTotalDuration;
-(id)_getExternalLastConnectedDate;
-(void)_setExternalTotalDuration:(id)arg1 ;
-(void)_setExternalLastConnectedDate:(id)arg1 ;
-(BOOL)_shouldWriteDownPowerWifiChanges;
-(void)_notePowerDidChangeForInternalCollection:(BOOL)arg1 isOnWifi:(BOOL)arg2 ;
-(void)reconnectedToBothResources_ExternalCollection;
-(void)disconnectedFromAResource_ExternalCollection;
-(void)_noteWifiLinkDidChangeForInternalCollection:(BOOL)arg1 isOnPower:(BOOL)arg2 ;
-(void)updateConnectedToPowerWifiIntervalIfConnected;
-(BOOL)connectedToPowerAndWifiForOver20Hours;
@end

