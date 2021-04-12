/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@protocol OS_dispatch_queue, WLKInstallable;
@class NSObject, SSLookupItemOffer, NSString;

@interface _WLKAppInstallSession : NSObject <LSApplicationWorkspaceObserverProtocol> {

	/*^block*/id _completion;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _progressHandler;
	id<WLKInstallable> _installable;
	SSLookupItemOffer* _offer;

}

@property (nonatomic,readonly) id<WLKInstallable> installable;              //@synthesize installable=_installable - In the implementation block
@property (nonatomic,readonly) SSLookupItemOffer * offer;                   //@synthesize offer=_offer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_matchingAppProxyFromProxies:(id)arg1 forInstallable:(id)arg2 ;
-(void)dealloc;
-(void)applicationInstallsDidChange:(id)arg1 ;
-(void)applicationInstallsDidStart:(id)arg1 ;
-(void)applicationsWillInstall:(id)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidFailToInstall:(id)arg1 ;
-(SSLookupItemOffer *)offer;
-(id<WLKInstallable>)installable;
-(id)initWithInstallable:(id)arg1 offer:(id)arg2 ;
-(void)beginInstallationWithProgressHandler:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_canOpenAppWithBundleID:(id)arg1 ;
-(void)_sendCompletionWithError:(id)arg1 ;
-(void)_doPurchaseWithAppAdamID:(id)arg1 offer:(id)arg2 ;
@end

