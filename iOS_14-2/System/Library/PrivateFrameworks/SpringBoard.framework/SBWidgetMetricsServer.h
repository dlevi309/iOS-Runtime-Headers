/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSServiceConnectionListenerDelegate.h>
#import <libobjc.A.dylib/SBSWidgetMetricsServiceServerInterface.h>

@protocol SBSWidgetMetricsProviding, OS_dispatch_queue;
@class NSMutableArray, FBServiceClientAuthenticator, BSServiceConnectionListener, NSObject, NSString;

@interface SBWidgetMetricsServer : NSObject <BSServiceConnectionListenerDelegate, SBSWidgetMetricsServiceServerInterface> {

	id<SBSWidgetMetricsProviding> _metricsProvider;
	NSMutableArray* _connections;
	FBServiceClientAuthenticator* _authenticator;
	BSServiceConnectionListener* _listener;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,copy,readonly) NSMutableArray * connections;                                 //@synthesize connections=_connections - In the implementation block
@property (nonatomic,readonly) FBServiceClientAuthenticator * authenticator;                      //@synthesize authenticator=_authenticator - In the implementation block
@property (nonatomic,readonly) BSServiceConnectionListener * listener;                            //@synthesize listener=_listener - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,__weak,readonly) id<SBSWidgetMetricsProviding> metricsProvider;              //@synthesize metricsProvider=_metricsProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3 ;
-(FBServiceClientAuthenticator *)authenticator;
-(id)init;
-(NSMutableArray *)connections;
-(BSServiceConnectionListener *)listener;
-(id<SBSWidgetMetricsProviding>)metricsProvider;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithMetricsProvider:(id)arg1 ;
-(id)systemMetricsForWidget:(id)arg1 ;
-(id)previewMetricsSpecificationForBundleIdentifier:(id)arg1 ;
-(id)previewMetricsSpecificationForDeviceContext:(id)arg1 displayContext:(id)arg2 bundleIdentifier:(id)arg3 ;
-(void)dealloc;
@end

