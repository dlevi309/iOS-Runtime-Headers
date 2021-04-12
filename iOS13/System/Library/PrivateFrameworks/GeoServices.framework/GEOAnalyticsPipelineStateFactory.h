/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol OS_dispatch_queue;
@class NSObject, GEOLogMsgState, NSString;

@interface GEOAnalyticsPipelineStateFactory : NSObject {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	GEOLogMsgState* _deviceIdentifierState;
	GEOLogMsgState* _deviceIdentifierInternalState;
	GEOLogMsgState* _applicationIdentifierState;
	NSString* _countryCode;

}
+(id)sharedFactory;
-(id)init;
-(void)dealloc;
-(id)applicationIdentifier;
-(id)deviceIdentifier;
-(id)suggestions;
-(id)extension;
-(id)route;
-(id)placeRequest;
-(id)deviceConnection;
-(void)deviceCountryChanged:(id)arg1 ;
-(id)deviceLocale;
-(id)deviceLocaleLimited;
-(id)deviceConnectionLimited;
-(id)deviceSettings_Short;
-(id)carPlay;
-(id)carPlayLimited;
-(id)pairedDevice;
-(id)mapView;
-(id)mapViewLocation;
-(id)mapSettings;
-(id)placeCard;
-(id)mapsServer;
-(id)lookAroundView;
-(id)mapRestore;
-(id)mapLaunch;
-(id)deviceIndentifierInternal;
-(id)mapUI;
-(id)mapUIShown;
-(id)experimentsIncludingABAssignInfo:(BOOL)arg1 includingClientConfig:(BOOL)arg2 ;
-(id)tileSet;
-(id)lookAroundSummary;
-(id)muninResourceLog;
-(id)deviceSettings_Long;
-(id)_emptyUserSessionState;
-(id)stateForType:(long long)arg1 ;
-(id)sessionStateForType:(long long)arg1 ;
@end

