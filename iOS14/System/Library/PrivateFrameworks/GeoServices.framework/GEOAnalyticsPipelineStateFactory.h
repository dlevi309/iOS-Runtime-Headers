/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)mapSettings;
-(id)carPlay;
-(id)tileSet;
-(id)mapLaunch;
-(id)pairedDevice;
-(id)deviceIdentifier;
-(id)suggestions;
-(id)market;
-(id)route;
-(id)mapsUser;
-(id)init;
-(id)deviceIdentifierNoHardware;
-(id)lookAroundSummary;
-(id)mapViewLocation;
-(id)curatedCollection;
-(id)placeRequest;
-(id)mapsServer;
-(id)mapUIShown;
-(id)stateForType:(long long)arg1 ;
-(id)applicationIdentifier;
-(id)deviceIndentifierInternal;
-(id)deviceConnectionLimited;
-(id)lookAroundView;
-(void)deviceCountryChanged:(id)arg1 ;
-(id)experimentsIncludingABAssignInfo:(BOOL)arg1 includingClientConfig:(BOOL)arg2 ;
-(id)deviceLocaleLimited;
-(id)extension;
-(id)placeCard;
-(id)carPlayLimited;
-(id)deviceSettings_Short;
-(id)mapRestore;
-(id)deviceConnection;
-(id)sessionStateForType:(long long)arg1 ;
-(id)deviceLocale;
-(id)deviceSettings_Long;
-(id)mapView;
-(id)ugc;
-(int)logMsgStateTypeForType:(long long)arg1 ;
-(void)dealloc;
-(id)_emptyUserSessionState;
-(id)mapUI;
-(id)muninResourceLog;
@end

