/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>

@protocol OS_dispatch_queue, OS_nw_path_monitor, CPLNetworkWatcherDelegate;
@class NSObject, RadiosPreferences, NSString, CPLNetworkState;

@interface CPLNetworkWatcher : NSObject <RadiosPreferencesDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_nw_path_monitor> _monitor;
	network_usage_policy_client_sRef _networkPolicyClient;
	RadiosPreferences* _radiosPreferences;
	NSString* _endPoint;
	CPLNetworkState* _networkState;
	id<CPLNetworkWatcherDelegate> _delegate;

}

@property (nonatomic,readonly) NSString * endPoint;                                      //@synthesize endPoint=_endPoint - In the implementation block
@property (nonatomic,readonly) CPLNetworkState * networkState;                           //@synthesize networkState=_networkState - In the implementation block
@property (assign,nonatomic,__weak) id<CPLNetworkWatcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithQueue:(id)arg1 ;
-(NSString *)endPoint;
-(id<CPLNetworkWatcherDelegate>)delegate;
-(void)start;
-(void)airplaneModeChanged;
-(void)stop;
-(void)setDelegate:(id<CPLNetworkWatcherDelegate>)arg1 ;
-(void)_updateAirplaneMode;
-(CPLNetworkState *)networkState;
-(void)dealloc;
-(BOOL)_isRestrictedPath:(id)arg1 policies:(id)arg2 ;
-(void)_updateNetworkState:(id)arg1 ;
-(void)_updateCellularPolicy:(id)arg1 ;
-(void)_updateCellularPolicyFromPolicies:(id)arg1 ;
-(void)_getCellularPolicyWithClient:(network_usage_policy_client_sRef)arg1 ;
@end

