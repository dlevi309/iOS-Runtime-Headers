/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/NSProgressReporting.h>

@protocol OS_dispatch_queue, OS_os_log;
@class NSProgress, NSString, NSMutableArray, NSURL, NSArray, GEOApplicationAuditToken, NSMapTable, GEOPowerAssertion, NSObject, GEOReportedProgress;

@interface GEOResourceLoader : NSObject <NSProgressReporting> {

	NSString* _directory;
	NSString* _additionalDirectoryToConsider;
	NSMutableArray* _resourcesToLoad;
	/*^block*/id _completionHandler;
	unsigned long long _numberOfDownloadsInProgress;
	long long _numberOfCopiesInProgress;
	BOOL _canceled;
	BOOL _requiresWiFi;
	NSURL* _baseURL;
	NSURL* _proxyURL;
	unsigned long long _maxConcurrentLoads;
	NSArray* _resourceInfos;
	NSMutableArray* _loadedResources;
	GEOApplicationAuditToken* _auditToken;
	BOOL _allowResumingPartialDownloads;
	NSMapTable* _inProgressResourceDownloads;
	GEOPowerAssertion* _powerAssertion;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	GEOReportedProgress* _progress;
	NSURL* _authProxyURL;
	NSObject*<OS_os_log> _log;
	unsigned long long _signpostID;
	BOOL _preferDirectNetworking;

}

@property (nonatomic,retain) GEOApplicationAuditToken * auditToken;              //@synthesize auditToken=_auditToken - In the implementation block
@property (assign,nonatomic) BOOL requiresWiFi;                                  //@synthesize requiresWiFi=_requiresWiFi - In the implementation block
@property (assign,nonatomic) BOOL preferDirectNetworking;                        //@synthesize preferDirectNetworking=_preferDirectNetworking - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSProgress * progress; 
+(Class)resourceLoadOperationClass;
-(id)init;
-(void)cancel;
-(GEOApplicationAuditToken *)auditToken;
-(NSProgress *)progress;
-(void)_cleanup;
-(void)setAuditToken:(GEOApplicationAuditToken *)arg1 ;
-(id)initWithTargetDirectory:(id)arg1 baseURL:(id)arg2 proxyURL:(id)arg3 resources:(id)arg4 maximumConcurrentLoads:(unsigned long long)arg5 additionalDirectoryToConsider:(id)arg6 log:(id)arg7 signpostID:(unsigned long long)arg8 ;
-(void)setRequiresWiFi:(BOOL)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 callbackQueue:(id)arg2 ;
-(void)_loadResourcesFromDisk;
-(void)_loadNextResourceFromNetwork;
-(BOOL)_establishHardLinkIfPossibleForResource:(id)arg1 toResource:(id)arg2 error:(id*)arg3 ;
-(BOOL)_copyResource:(id)arg1 fromPath:(id)arg2 allowCreatingHardLink:(BOOL)arg3 error:(id*)arg4 ;
-(void)_writeResourceToDisk:(id)arg1 withData:(id)arg2 checksum:(id)arg3 completionHandler:(/*^block*/id)arg4 callbackQueue:(id)arg5 ;
-(BOOL)requiresWiFi;
-(BOOL)preferDirectNetworking;
-(void)setPreferDirectNetworking:(BOOL)arg1 ;
@end

