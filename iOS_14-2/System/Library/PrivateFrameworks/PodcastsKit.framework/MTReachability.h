/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <PodcastsKit/PodcastsKit-Structs.h>
#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>

@protocol OS_dispatch_queue;
@class ITMReachability, NSHashTable, RadiosPreferences, NSObject;

@interface MTReachability : NSObject <RadiosPreferencesDelegate> {

	BOOL _airplaneModeEnabled;
	BOOL _globalCellularEnabled;
	BOOL _reachable;
	BOOL _hasDeterminedActualGlobalCellularState;
	ITMReachability* _reachability;
	long long _networkStatus;
	NSHashTable* _callbacks;
	RadiosPreferences* _radiosPreferences;
	NSObject*<OS_dispatch_queue> _cellularQueue;

}

@property (nonatomic,retain) ITMReachability * reachability;                                                                 //@synthesize reachability=_reachability - In the implementation block
@property (assign,nonatomic) long long networkStatus;                                                                        //@synthesize networkStatus=_networkStatus - In the implementation block
@property (assign,getter=isGlobalCellularEnabled,nonatomic) BOOL globalCellularEnabled;                                      //@synthesize globalCellularEnabled=_globalCellularEnabled - In the implementation block
@property (nonatomic,retain) NSHashTable * callbacks;                                                                        //@synthesize callbacks=_callbacks - In the implementation block
@property (assign,getter=isReachable,nonatomic) BOOL reachable;                                                              //@synthesize reachable=_reachable - In the implementation block
@property (nonatomic,retain) RadiosPreferences * radiosPreferences;                                                          //@synthesize radiosPreferences=_radiosPreferences - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cellularQueue;                                                     //@synthesize cellularQueue=_cellularQueue - In the implementation block
@property (assign,nonatomic) BOOL hasDeterminedActualGlobalCellularState;                                                    //@synthesize hasDeterminedActualGlobalCellularState=_hasDeterminedActualGlobalCellularState - In the implementation block
@property (getter=isAirplaneModeEnabled,nonatomic,readonly) BOOL airplaneModeEnabled;                                        //@synthesize airplaneModeEnabled=_airplaneModeEnabled - In the implementation block
@property (getter=isReachableViaCellular,nonatomic,readonly) BOOL reachableViaCellular; 
@property (getter=isReachableViaWifi,nonatomic,readonly) BOOL reachableViaWifi; 
@property (getter=isPodcastsCellularDownloadsEnabled,nonatomic,readonly) BOOL podcastsCellularDownloadsEnabled; 
+(id)sharedInstance;
+(id)allocWithZone:(NSZone*)arg1 ;
-(BOOL)isReachable;
-(BOOL)isAirplaneModeEnabled;
-(void)addObserver:(id)arg1 ;
-(id)init;
-(NSHashTable *)callbacks;
-(long long)networkStatus;
-(void)airplaneModeChanged;
-(ITMReachability *)reachability;
-(void)setReachable:(BOOL)arg1 ;
-(void)_applicationDidBecomeActive;
-(void)setNetworkStatus:(long long)arg1 ;
-(id)copy;
-(void)_updateAirplaneMode;
-(void)setRadiosPreferences:(RadiosPreferences *)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setCallbacks:(NSHashTable *)arg1 ;
-(RadiosPreferences *)radiosPreferences;
-(void)_updateReachability;
-(void)setReachability:(ITMReachability *)arg1 ;
-(void)dealloc;
-(unsigned long long)reasonForNoInternet;
-(BOOL)isGlobalCellularEnabled;
-(void)setGlobalCellularEnabled:(BOOL)arg1 ;
-(id)reasonTextForNoInternet;
-(BOOL)showInternetUnreachableDialogWithAcknowledmentBlock:(/*^block*/id)arg1 ;
-(void)_updateGlobalCellularWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)hasDeterminedActualGlobalCellularState;
-(void)setHasDeterminedActualGlobalCellularState:(BOOL)arg1 ;
-(void)_showAlertForInternetUnavailableReason:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)showInternetUnreachableDialog;
-(BOOL)isPodcastsCellularDownloadsEnabled;
-(BOOL)isReachableViaCellular;
-(BOOL)isReachableViaWifi;
-(NSObject*<OS_dispatch_queue>)cellularQueue;
-(void)setCellularQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

