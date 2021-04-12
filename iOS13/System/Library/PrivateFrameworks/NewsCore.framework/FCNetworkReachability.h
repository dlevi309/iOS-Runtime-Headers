/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCNetworkReachabilityType.h>

@class NSHashTable, NFLazy, NSString;

@interface FCNetworkReachability : NSObject <FCNetworkReachabilityType> {

	BOOL _isNetworkReachable;
	BOOL _isNetworkReachableViaWiFi;
	BOOL _isLowDataModeEnabled;
	BOOL _isNetworkUsageExpensive;
	BOOL _isNetworkReachableViaCellular;
	BOOL _isCloudKitAccessAllowed;
	BOOL _accessRestrictedBecauseOfAppVersion;
	BOOL _accessRestrictedBecauseOfOSVersion;
	BOOL _accessRestrictedBecauseOfCountry;
	BOOL _accessRestrictedBecauseOfDeviceAbandoned;
	long long _offlineReason;
	NSHashTable* _observers;
	NFLazy* _networkInfo;

}

@property (nonatomic,retain) NSHashTable * observers;                                    //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) BOOL isNetworkReachable;                                    //@synthesize isNetworkReachable=_isNetworkReachable - In the implementation block
@property (assign,nonatomic) BOOL isNetworkReachableViaWiFi;                             //@synthesize isNetworkReachableViaWiFi=_isNetworkReachableViaWiFi - In the implementation block
@property (assign,nonatomic) BOOL isNetworkReachableViaCellular;                         //@synthesize isNetworkReachableViaCellular=_isNetworkReachableViaCellular - In the implementation block
@property (assign,nonatomic) BOOL isNetworkUsageExpensive;                               //@synthesize isNetworkUsageExpensive=_isNetworkUsageExpensive - In the implementation block
@property (assign,nonatomic) BOOL isLowDataModeEnabled;                                  //@synthesize isLowDataModeEnabled=_isLowDataModeEnabled - In the implementation block
@property (assign,nonatomic) BOOL isCloudKitAccessAllowed;                               //@synthesize isCloudKitAccessAllowed=_isCloudKitAccessAllowed - In the implementation block
@property (assign,nonatomic) BOOL accessRestrictedBecauseOfAppVersion;                   //@synthesize accessRestrictedBecauseOfAppVersion=_accessRestrictedBecauseOfAppVersion - In the implementation block
@property (assign,nonatomic) BOOL accessRestrictedBecauseOfOSVersion;                    //@synthesize accessRestrictedBecauseOfOSVersion=_accessRestrictedBecauseOfOSVersion - In the implementation block
@property (assign,nonatomic) BOOL accessRestrictedBecauseOfCountry;                      //@synthesize accessRestrictedBecauseOfCountry=_accessRestrictedBecauseOfCountry - In the implementation block
@property (assign,nonatomic) BOOL accessRestrictedBecauseOfDeviceAbandoned;              //@synthesize accessRestrictedBecauseOfDeviceAbandoned=_accessRestrictedBecauseOfDeviceAbandoned - In the implementation block
@property (nonatomic,retain) NFLazy * networkInfo;                                       //@synthesize networkInfo=_networkInfo - In the implementation block
@property (nonatomic,readonly) BOOL isNetworkOnlyReachableViaCellular; 
@property (nonatomic,readonly) long long reachabilityStatus; 
@property (nonatomic,readonly) long long cellularRadioAccessTechnology; 
@property (nonatomic,readonly) BOOL isCloudKitReachable; 
@property (assign,nonatomic) long long offlineReason;                                    //@synthesize offlineReason=_offlineReason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedNetworkReachability;
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)isNetworkReachable;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(void)_reachabilityChanged:(id)arg1 ;
-(long long)offlineReason;
-(void)setOfflineReason:(long long)arg1 ;
-(void)setIsNetworkReachable:(BOOL)arg1 ;
-(BOOL)isNetworkReachableViaWiFi;
-(long long)cellularRadioAccessTechnology;
-(BOOL)isCloudKitReachable;
-(void)_updateReachability;
-(NFLazy *)networkInfo;
-(long long)_cellularRadioAccessTechnologyFromString:(id)arg1 ;
-(BOOL)isNetworkReachableViaCellular;
-(void)setIsNetworkReachableViaWiFi:(BOOL)arg1 ;
-(void)setIsNetworkReachableViaCellular:(BOOL)arg1 ;
-(void)setIsNetworkUsageExpensive:(BOOL)arg1 ;
-(void)setIsLowDataModeEnabled:(BOOL)arg1 ;
-(BOOL)accessRestrictedBecauseOfAppVersion;
-(BOOL)accessRestrictedBecauseOfCountry;
-(BOOL)accessRestrictedBecauseOfOSVersion;
-(BOOL)accessRestrictedBecauseOfDeviceAbandoned;
-(void)setIsCloudKitAccessAllowed:(BOOL)arg1 ;
-(BOOL)isCloudKitAccessAllowed;
-(void)_accessRestrictionsChanged;
-(BOOL)isNetworkOnlyReachableViaCellular;
-(long long)reachabilityStatus;
-(void)setAccessRestrictedBecauseOfAppVersion:(BOOL)arg1 ;
-(void)setAccessRestrictedBecauseOfCountry:(BOOL)arg1 ;
-(void)setAccessRestrictedBecauseOfOSVersion:(BOOL)arg1 ;
-(void)setAccessRestrictedBecauseOfDeviceAbandoned:(BOOL)arg1 ;
-(BOOL)isLowDataModeEnabled;
-(BOOL)isNetworkUsageExpensive;
-(void)setNetworkInfo:(NFLazy *)arg1 ;
@end

