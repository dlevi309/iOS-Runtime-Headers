/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <libobjc.A.dylib/ASDRequestObserver.h>
#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@class NAFuture, ASDSystemAppRequest, NSMutableSet, LSApplicationProxy, NSString;

@interface HFHomeAppInstallController : NSObject <ASDRequestObserver, LSApplicationWorkspaceObserverProtocol> {

	NAFuture* _activeHomeAppDownloadFuture;
	ASDSystemAppRequest* _request;
	long long _lastReportedStatus;
	NSMutableSet* _statusUpdaters;

}

@property (nonatomic,readonly) LSApplicationProxy * appProxy; 
@property (nonatomic,retain) ASDSystemAppRequest * request;                       //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NAFuture * activeHomeAppDownloadFuture;              //@synthesize activeHomeAppDownloadFuture=_activeHomeAppDownloadFuture - In the implementation block
@property (assign,nonatomic) long long lastReportedStatus;                        //@synthesize lastReportedStatus=_lastReportedStatus - In the implementation block
@property (nonatomic,readonly) NSMutableSet * statusUpdaters;                     //@synthesize statusUpdaters=_statusUpdaters - In the implementation block
@property (nonatomic,readonly) long long status; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(long long)status;
-(void)applicationsWillInstall:(id)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidFailToInstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)setRequest:(ASDSystemAppRequest *)arg1 ;
-(ASDSystemAppRequest *)request;
-(void)_cleanup;
-(void)request:(id)arg1 didCompleteWithError:(id)arg2 ;
-(LSApplicationProxy *)appProxy;
-(BOOL)_isHomeAppInstalled;
-(long long)lastReportedStatus;
-(NAFuture *)activeHomeAppDownloadFuture;
-(NSMutableSet *)statusUpdaters;
-(void)setActiveHomeAppDownloadFuture:(NAFuture *)arg1 ;
-(void)_dispatchStatusUpdate:(long long)arg1 ;
-(void)setLastReportedStatus:(long long)arg1 ;
-(id)downloadHomeAppWithUpdateBlock:(/*^block*/id)arg1 ;
@end

