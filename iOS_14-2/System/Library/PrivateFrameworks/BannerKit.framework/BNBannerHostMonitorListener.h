/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
*/

#import <libobjc.A.dylib/BSServiceConnectionListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSSet, BSServiceConnectionListener, NSObject, NSMutableArray, NSHashTable, NSString;

@interface BNBannerHostMonitorListener : NSObject <BSServiceConnectionListenerDelegate> {

	NSSet* _authorizedBundleIDs;
	BSServiceConnectionListener* _connectionListener;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _connections;
	NSHashTable* _observers;

}

@property (getter=isBannerHostAvailable,nonatomic,readonly) BOOL bannerHostAvailable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3 ;
-(void)addObserver:(id)arg1 ;
-(void)_notifyObserversWithBlock:(/*^block*/id)arg1 ;
-(void)_removeConnection:(id)arg1 ;
-(BOOL)isBannerHostAvailable;
-(BOOL)_isConnectingProcessAuthorized:(id)arg1 error:(out id*)arg2 ;
-(void)_addConnection:(id)arg1 ;
-(NSString *)description;
-(void)removeObserver:(id)arg1 ;
-(id)initWithServiceDomain:(id)arg1 authorizedBundleIDs:(id)arg2 ;
@end

