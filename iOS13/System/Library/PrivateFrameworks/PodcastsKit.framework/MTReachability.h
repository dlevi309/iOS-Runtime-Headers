/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)copy;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)airplaneModeChanged;
-(NSHashTable *)callbacks;
-(BOOL)isAirplaneModeEnabled;
-(ITMReachability *)reachability;
-(void)setReachability:(ITMReachability *)arg1 ;
-(BOOL)isReachable;
-(void)setReachable:(BOOL)arg1 ;
-(long long)networkStatus;
-(RadiosPreferences *)radiosPreferences;
-(void)setCallbacks:(NSHashTable *)arg1 ;
-(void)setNetworkStatus:(long long)arg1 ;
-(void)_updateReachability;
-(void)_applicationDidBecomeActive;
-(void)setRadiosPreferences:(RadiosPreferences *)arg1 ;
-(unsigned long long)reasonForNoInternet;
-(BOOL)isGlobalCellularEnabled;
-(void)setGlobalCellularEnabled:(BOOL)arg1 ;
-(id)reasonTextForNoInternet;
-(BOOL)showInternetUnreachableDialogWithAcknowledmentBlock:(/*^block*/id)arg1 ;
-(void)_updateAirplaneMode;
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

