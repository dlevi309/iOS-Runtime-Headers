/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/NSProgressRegistrar.h>

@protocol NSProgressRegistrar
@required
-(oneway void)addSubscriber:(id)arg1 forID:(id)arg2 appBundleID:(id)arg3 fileURL:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(oneway void)removeSubscriberForID:(id)arg1;
-(oneway void)observePublisherUserInfoForID:(id)arg1 value:(id)arg2 forKey:(id)arg3;
-(oneway void)observePublisherForID:(id)arg1 values:(id)arg2 forKeys:(id)arg3;
-(oneway void)addSubscriber:(id)arg1 forID:(id)arg2 appBundleID:(id)arg3 category:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(oneway void)addPublisher:(id)arg1 forID:(id)arg2 acknowledgementAppBundleIDs:(id)arg3 category:(id)arg4 fileURL:(id)arg5 initialValues:(id)arg6 completionHandler:(/*^block*/id)arg7;
-(oneway void)removePublisherForID:(id)arg1;

@end


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSFileAccessNode, NSMutableSet, NSString;

@interface NSProgressRegistrar : NSObject <NSXPCListenerDelegate, NSProgressRegistrar> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _publishersByID;
	NSMutableDictionary* _publisherTransactionsByID;
	NSMutableDictionary* _subscribersByID;
	NSMutableDictionary* _subscriberTransactionsByID;
	NSFileAccessNode* _rootFileAccessNode;
	NSMutableSet* _pendingFileSubscriberIDs;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithQueue:(id)arg1 rootFileAccessNode:(id)arg2 ;
-(oneway void)addSubscriber:(id)arg1 forID:(id)arg2 appBundleID:(id)arg3 fileURL:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_getRemoteProcessWithAuditToken:(SCD_Struct_NS0)arg1 canReadItemAtURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(oneway void)removeSubscriberForID:(id)arg1 ;
-(oneway void)observePublisherUserInfoForID:(id)arg1 value:(id)arg2 forKey:(id)arg3 ;
-(oneway void)observePublisherForID:(id)arg1 values:(id)arg2 forKeys:(id)arg3 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(oneway void)addSubscriber:(id)arg1 forID:(id)arg2 appBundleID:(id)arg3 category:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(oneway void)addPublisher:(id)arg1 forID:(id)arg2 acknowledgementAppBundleIDs:(id)arg3 category:(id)arg4 fileURL:(id)arg5 initialValues:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(oneway void)removePublisherForID:(id)arg1 ;
-(void)dealloc;
@end

