/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue, BBDataProviderConnectionServerProxy;
@class BBDataProviderConnectionResolver, NSObject, NSMutableDictionary, NSString;

@interface BBDataProviderConnection : NSObject <NSXPCListenerDelegate> {

	BBDataProviderConnectionResolver* _connectionResolver;
	NSObject*<OS_dispatch_queue> _clientCalloutQueue;
	NSObject*<OS_dispatch_queue> _queue;
	id<BBDataProviderConnectionServerProxy> _serverProxy;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	BOOL _connected;
	NSMutableDictionary* _dataProvidersBySectionID;
	NSMutableDictionary* _parentFactoriesBySectionID;
	NSString* _serviceName;
	NSString* _bundleID;

}

@property (nonatomic,copy) NSString * serviceName;                  //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                     //@synthesize bundleID=_bundleID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)dealloc;
-(void)invalidate;
-(void)_invalidate;
-(NSString *)serviceName;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(id)initWithServiceName:(id)arg1 onQueue:(id)arg2 ;
-(void)ping:(/*^block*/id)arg1 ;
-(void)removeDataProviderWithSectionID:(id)arg1 ;
-(void)_queue_setServerProxy:(id)arg1 ;
-(void)setServerProxy:(id)arg1 ;
-(id)_addDataProvider:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)addDataProvider:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)addParentSectionInfo:(id)arg1 displayName:(id)arg2 icon:(id)arg3 universalSectionID:(id)arg4 ;
-(void)addDataProvider:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)addDataProvider:(id)arg1 ;
-(void)addParentSectionInfo:(id)arg1 displayName:(id)arg2 icon:(id)arg3 ;
-(void)addParentSectionInfo:(id)arg1 displayName:(id)arg2 icon:(id)arg3 unversalSectionID:(id)arg4 ;
@end

