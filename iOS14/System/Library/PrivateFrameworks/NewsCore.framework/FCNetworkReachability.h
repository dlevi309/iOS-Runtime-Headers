/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isNetworkReachable;
-(void)addObserver:(id)arg1 ;
-(void)setOfflineReason:(long long)arg1 ;
-(long long)cellularRadioAccessTechnology;
-(NSHashTable *)observers;
-(id)init;
-(void)setIsNetworkReachable:(BOOL)arg1 ;
-(void)setAccessRestrictedBecauseOfDeviceAbandoned:(BOOL)arg1 ;
-(void)setAccessRestrictedBecauseOfCountry:(BOOL)arg1 ;
-(BOOL)accessRestrictedBecauseOfCountry;
-(void)setIsLowDataModeEnabled:(BOOL)arg1 ;
-(void)setAccessRestrictedBecauseOfOSVersion:(BOOL)arg1 ;
-(BOOL)accessRestrictedBecauseOfDeviceAbandoned;
-(BOOL)accessRestrictedBecauseOfOSVersion;
-(void)_reachabilityChanged:(id)arg1 ;
-(long long)offlineReason;
-(void)setObservers:(NSHashTable *)arg1 ;
-(BOOL)isNetworkReachableViaWiFi;
-(void)setNetworkInfo:(NFLazy *)arg1 ;
-(void)setIsNetworkReachableViaCellular:(BOOL)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setIsNetworkUsageExpensive:(BOOL)arg1 ;
-(BOOL)isCloudKitAccessAllowed;
-(BOOL)isLowDataModeEnabled;
-(BOOL)isNetworkUsageExpensive;
-(BOOL)isNetworkReachableViaCellular;
-(void)setIsNetworkReachableViaWiFi:(BOOL)arg1 ;
-(NFLazy *)networkInfo;
-(void)_accessRestrictionsChanged;
-(BOOL)accessRestrictedBecauseOfAppVersion;
-(BOOL)isCloudKitReachable;
-(void)_updateReachability;
-(void)setAccessRestrictedBecauseOfAppVersion:(BOOL)arg1 ;
-(BOOL)isNetworkOnlyReachableViaCellular;
-(void)setIsCloudKitAccessAllowed:(BOOL)arg1 ;
-(long long)_cellularRadioAccessTechnologyFromString:(id)arg1 ;
-(long long)reachabilityStatus;
-(void)dealloc;
@end

