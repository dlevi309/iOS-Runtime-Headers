/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
*/

#import <libobjc.A.dylib/NSNetServiceBrowserDelegate.h>
#import <libobjc.A.dylib/NSNetServiceDelegate.h>

@protocol HSBrowserDelegate, OS_dispatch_queue;
@class NSString, NSMutableArray, NSObject, NSNetServiceBrowser;

@interface HSBrowser : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {

	long long _browserType;
	NSString* _homeSharingGroupID;
	id<HSBrowserDelegate> _delegate;
	NSMutableArray* _availableLibraries;
	NSMutableArray* _resolvingServices;
	NSMutableArray* _librariesPendingRemoval;
	NSObject*<OS_dispatch_queue> _serviceBrowserQueue;
	NSString* _serviceType;
	NSNetServiceBrowser* _serviceBrowser;

}

@property (nonatomic,retain) NSMutableArray * availableLibraries;                           //@synthesize availableLibraries=_availableLibraries - In the implementation block
@property (nonatomic,retain) NSMutableArray * resolvingServices;                            //@synthesize resolvingServices=_resolvingServices - In the implementation block
@property (nonatomic,retain) NSMutableArray * librariesPendingRemoval;                      //@synthesize librariesPendingRemoval=_librariesPendingRemoval - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serviceBrowserQueue;              //@synthesize serviceBrowserQueue=_serviceBrowserQueue - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceType;                                 //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,retain) NSNetServiceBrowser * serviceBrowser;                          //@synthesize serviceBrowser=_serviceBrowser - In the implementation block
@property (nonatomic,readonly) long long browserType;                                       //@synthesize browserType=_browserType - In the implementation block
@property (nonatomic,copy,readonly) NSString * homeSharingGroupID;                          //@synthesize homeSharingGroupID=_homeSharingGroupID - In the implementation block
@property (assign,nonatomic,__weak) id<HSBrowserDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)homeSharingBrowserWithGroupID:(id)arg1 ;
-(id<HSBrowserDelegate>)delegate;
-(void)setDelegate:(id<HSBrowserDelegate>)arg1 ;
-(void)stop;
-(void)start;
-(NSString *)serviceType;
-(void)netService:(id)arg1 didNotResolve:(id)arg2 ;
-(void)netServiceDidResolveAddress:(id)arg1 ;
-(void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2 ;
-(void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3 ;
-(NSString *)homeSharingGroupID;
-(NSNetServiceBrowser *)serviceBrowser;
-(void)setServiceBrowser:(NSNetServiceBrowser *)arg1 ;
-(id)initWithBrowserType:(long long)arg1 groupID:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)serviceBrowserQueue;
-(NSMutableArray *)availableLibraries;
-(NSMutableArray *)resolvingServices;
-(NSMutableArray *)librariesPendingRemoval;
-(void)_removalTimerFired:(id)arg1 ;
-(long long)browserType;
-(void)setAvailableLibraries:(NSMutableArray *)arg1 ;
-(void)setResolvingServices:(NSMutableArray *)arg1 ;
-(void)setLibrariesPendingRemoval:(NSMutableArray *)arg1 ;
-(void)setServiceBrowserQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

