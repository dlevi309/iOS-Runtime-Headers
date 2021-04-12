/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@protocol OS_dispatch_queue;
@class NSURLSession, NSMapTable, NSMutableDictionary, NSObject, NSCache, NSString;

@interface HKAppImageManager : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate> {

	NSURLSession* _session;
	NSMapTable* _containers;
	NSMutableDictionary* _urlConnections;
	NSObject*<OS_dispatch_queue> _managerQueue;
	NSCache* _iconCache;
	NSMutableDictionary* _outstandingRequests;

}

@property (retain) NSCache * iconCache;                                    //@synthesize iconCache=_iconCache - In the implementation block
@property (retain) NSMutableDictionary * outstandingRequests;              //@synthesize outstandingRequests=_outstandingRequests - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultAppIconTableUI;
+(id)sharedImageManager;
+(id)defaultAppIcon;
-(void)setOutstandingRequests:(NSMutableDictionary *)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(id)init;
-(id)iconForSource:(id)arg1 ;
-(NSCache *)iconCache;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)loadIconForSource:(id)arg1 syncHandler:(/*^block*/id)arg2 asyncHandler:(/*^block*/id)arg3 ;
-(void)setIconCache:(NSCache *)arg1 ;
-(void)loadIconForSource:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadAppImageAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)clearImageCache;
-(id)iconForDevice:(id)arg1 ;
-(NSMutableDictionary *)outstandingRequests;
-(void)_queue_cacheAppIcon:(id)arg1 forIdentifier:(id)arg2 ;
-(void)_queue_loadAppIconForSource:(id)arg1 onCompletion:(/*^block*/id)arg2 ;
-(id)_queue_synchronousLoadIconForSource:(id)arg1 ;
-(id)_queue_researchStudyIconForSource:(id)arg1 ;
-(id)_queue_fetchIconFromLaunchServicesWithIdentifier:(id)arg1 ;
-(void)_enqueueRequestForAppIconForIdentifier:(id)arg1 ;
-(void)_dispatchResponsesForAppIconForIdentifier:(id)arg1 appImage:(id)arg2 ;
-(void)cacheAppIcon:(id)arg1 forIdentifier:(id)arg2 ;
-(id)researchStudyIconForSource:(id)arg1 ;
@end

