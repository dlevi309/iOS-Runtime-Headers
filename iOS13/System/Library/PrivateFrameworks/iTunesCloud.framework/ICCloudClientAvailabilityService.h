/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <libobjc.A.dylib/ICCloudAvailability.h>

@protocol OS_dispatch_queue, ICCloudServerListenerEndpointProvider;
@class NSXPCConnection, NSObject, NSString;

@interface ICCloudClientAvailabilityService : NSObject <ICCloudAvailability> {

	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _serialQueue;
	id<ICCloudServerListenerEndpointProvider> _listenerEndpointProvider;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialQueue;                                               //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * xpcConnection;                                                        //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,__weak,readonly) id<ICCloudServerListenerEndpointProvider> listenerEndpointProvider;              //@synthesize listenerEndpointProvider=_listenerEndpointProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSXPCConnection *)xpcConnection;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(BOOL)hasProperNetworkConditionsToPlayMedia;
-(BOOL)hasProperNetworkConditionsToShowCloudMedia;
-(BOOL)isCellularDataRestrictedForMusic;
-(BOOL)shouldProhibitMusicActionForCurrentNetworkConditions;
-(BOOL)isCellularDataRestrictedForVideos;
-(BOOL)shouldProhibitVideosActionForCurrentNetworkConditions;
-(BOOL)isCellularDataRestrictedForStoreApps;
-(BOOL)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
-(BOOL)isCellularDataRestricted;
-(BOOL)shouldProhibitActionsForCurrentNetworkConditions;
-(BOOL)canShowCloudDownloadButtons;
-(BOOL)canShowCloudMusic;
-(BOOL)canShowCloudVideo;
-(id<ICCloudServerListenerEndpointProvider>)listenerEndpointProvider;
-(id)_xpcConnectionWithListenerEndpoint:(id)arg1 ;
-(id)initWithListenerEndpointProvider:(id)arg1 ;
@end

