/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@protocol OS_dispatch_queue, WLKInstallable;
@class NSObject, AMSLookupItemOffer, NSString;

@interface _WLKAppInstallSession : NSObject <LSApplicationWorkspaceObserverProtocol> {

	/*^block*/id _completion;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _progressHandler;
	id<WLKInstallable> _installable;
	AMSLookupItemOffer* _offer;

}

@property (nonatomic,readonly) id<WLKInstallable> installable;              //@synthesize installable=_installable - In the implementation block
@property (nonatomic,readonly) AMSLookupItemOffer * offer;                  //@synthesize offer=_offer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_matchingAppProxyFromProxies:(id)arg1 forInstallable:(id)arg2 ;
-(void)applicationInstallsDidStart:(id)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsWillInstall:(id)arg1 ;
-(void)applicationsDidFailToInstall:(id)arg1 ;
-(void)applicationInstallsDidChange:(id)arg1 ;
-(AMSLookupItemOffer *)offer;
-(void)dealloc;
-(id<WLKInstallable>)installable;
-(id)initWithInstallable:(id)arg1 offer:(id)arg2 ;
-(void)beginInstallationWithProgressHandler:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_canOpenAppWithBundleID:(id)arg1 ;
-(void)_sendCompletionWithError:(id)arg1 ;
-(void)_doPurchaseWithAppAdamID:(id)arg1 offer:(id)arg2 ;
@end

