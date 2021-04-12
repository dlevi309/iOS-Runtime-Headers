/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <libobjc.A.dylib/CPSBannerSourceServerToClientInterface.h>
#import <libobjc.A.dylib/BSInvalidatable.h>
#import <libobjc.A.dylib/CPBannerProviding.h>
#import <libobjc.A.dylib/CPSApplicationStateObserving.h>

@protocol CPBannerDelegate, OS_dispatch_queue;
@class BSServiceConnection, NSObject, CPSApplicationStateMonitor, NSString;

@interface CPSBannerSourceProxy : NSObject <CPSBannerSourceServerToClientInterface, BSInvalidatable, CPBannerProviding, CPSApplicationStateObserving> {

	id<CPBannerDelegate> _delegate;
	BSServiceConnection* _connection;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	CPSApplicationStateMonitor* _applicationStateMonitor;

}

@property (assign,nonatomic,__weak) id<CPBannerDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) BSServiceConnection * connection;                                  //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                        //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) CPSApplicationStateMonitor * applicationStateMonitor;              //@synthesize applicationStateMonitor=_applicationStateMonitor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(id<CPBannerDelegate>)delegate;
-(void)setDelegate:(id<CPBannerDelegate>)arg1 ;
-(BSServiceConnection *)connection;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setConnection:(BSServiceConnection *)arg1 ;
-(void)setBundleIdentifier:(id)arg1 ;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(CPSApplicationStateMonitor *)applicationStateMonitor;
-(void)setApplicationStateMonitor:(CPSApplicationStateMonitor *)arg1 ;
-(void)postBannerForManeuver:(id)arg1 travelEstimates:(id)arg2 ;
-(void)postBannerForNavigationAlert:(id)arg1 ;
-(void)bannerTappedWithIdentifier:(id)arg1 ;
-(void)bannerDidAppearWithIdentifier:(id)arg1 ;
-(void)bannerDidDisappearWithIdentifier:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 applicationStateMonitor:(id)arg2 ;
-(void)applicationStateMonitor:(id)arg1 didBecomeActive:(BOOL)arg2 ;
@end

