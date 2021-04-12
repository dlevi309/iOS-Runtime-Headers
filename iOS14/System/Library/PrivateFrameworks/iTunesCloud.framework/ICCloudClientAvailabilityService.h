/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <libobjc.A.dylib/ICCloudAvailability.h>

@protocol OS_dispatch_queue, ICCloudServerListenerEndpointProviding;
@class NSXPCConnection, NSObject, NSString;

@interface ICCloudClientAvailabilityService : NSObject <ICCloudAvailability> {

	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _serialQueue;
	id<ICCloudServerListenerEndpointProviding> _listenerEndpointProvider;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialQueue;                                                //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * xpcConnection;                                                         //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,__weak,readonly) id<ICCloudServerListenerEndpointProviding> listenerEndpointProvider;              //@synthesize listenerEndpointProvider=_listenerEndpointProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldProhibitActionsForCurrentNetworkConditions;
-(BOOL)canShowCloudDownloadButtons;
-(BOOL)canShowCloudVideo;
-(BOOL)shouldProhibitVideosActionForCurrentNetworkConditions;
-(BOOL)hasProperNetworkConditionsToShowCloudMedia;
-(BOOL)shouldProhibitMusicActionForCurrentNetworkConditions;
-(BOOL)isCellularDataRestrictedForVideos;
-(id<ICCloudServerListenerEndpointProviding>)listenerEndpointProvider;
-(NSXPCConnection *)xpcConnection;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(id)_xpcConnectionWithListenerEndpoint:(id)arg1 ;
-(BOOL)isCellularDataRestrictedForMusic;
-(BOOL)hasProperNetworkConditionsToPlayMedia;
-(BOOL)canShowCloudMusic;
-(BOOL)isCellularDataRestricted;
-(id)initWithListenerEndpointProvider:(id)arg1 ;
-(BOOL)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
-(BOOL)isCellularDataRestrictedForStoreApps;
@end

