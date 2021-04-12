/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <libobjc.A.dylib/BSServiceConnectionListenerDelegate.h>
#import <libobjc.A.dylib/CPSBannerSourceClientToServerInterface.h>
#import <libobjc.A.dylib/CPSBannerSourceDelegate.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol OS_dispatch_queue;
@class BSServiceConnectionListener, NSObject, NSMutableDictionary, NSString;

@interface CPSTemplateBannerController : NSObject <BSServiceConnectionListenerDelegate, CPSBannerSourceClientToServerInterface, CPSBannerSourceDelegate, BSInvalidatable> {

	BSServiceConnectionListener* _listener;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSMutableDictionary* _connections;
	NSMutableDictionary* _bannerSources;

}

@property (nonatomic,retain) BSServiceConnectionListener * listener;                    //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> connectionQueue;              //@synthesize connectionQueue=_connectionQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * connections;                         //@synthesize connections=_connections - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * bannerSources;                       //@synthesize bannerSources=_bannerSources - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)invalidate;
-(BSServiceConnectionListener *)listener;
-(void)setListener:(BSServiceConnectionListener *)arg1 ;
-(NSObject*<OS_dispatch_queue>)connectionQueue;
-(void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3 ;
-(NSMutableDictionary *)connections;
-(void)setConnections:(NSMutableDictionary *)arg1 ;
-(void)setConnectionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)postBannerForManeuver:(id)arg1 travelEstimates:(id)arg2 ;
-(void)postBannerForNavigationAlert:(id)arg1 ;
-(void)sceneActivationStateChangedTo:(id)arg1 ;
-(void)_connectionQueue_removeConnection:(id)arg1 ;
-(void)_connectionQueue_addConnection:(id)arg1 ;
-(id)_connectionForBannerSource:(id)arg1 ;
-(NSMutableDictionary *)bannerSources;
-(void)bannerSource:(id)arg1 bannerTappedWithIdentifier:(id)arg2 ;
-(void)bannerSource:(id)arg1 bannerDidAppearWithIdentifier:(id)arg2 ;
-(void)bannerSource:(id)arg1 bannerDidDisappearWithIdentifier:(id)arg2 ;
-(void)setBannerSources:(NSMutableDictionary *)arg1 ;
@end

