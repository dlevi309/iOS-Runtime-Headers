/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject, NSMutableDictionary, NSMutableSet, NSMutableArray;

@interface NWPrivilegedHelper : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _listener;
	NSMutableDictionary* _handlers;
	NSMutableSet* _allKnownEntitlementSet;
	NSMutableArray* _allKnownEntitlementGroup;

}

@property (retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (retain) NSObject*<OS_xpc_object> listener;                      //@synthesize listener=_listener - In the implementation block
@property (retain) NSMutableDictionary * handlers;                         //@synthesize handlers=_handlers - In the implementation block
@property (retain) NSMutableSet * allKnownEntitlementSet;                  //@synthesize allKnownEntitlementSet=_allKnownEntitlementSet - In the implementation block
@property (retain) NSMutableArray * allKnownEntitlementGroup;              //@synthesize allKnownEntitlementGroup=_allKnownEntitlementGroup - In the implementation block
-(NSMutableDictionary *)handlers;
-(id)initWithQueue:(id)arg1 ;
-(void)registerHelperFunctions;
-(void)setHandlers:(NSMutableDictionary *)arg1 ;
-(void)startThrottlePolicyEventListener;
-(NSMutableArray *)allKnownEntitlementGroup;
-(NSObject*<OS_xpc_object>)listener;
-(void)setAllKnownEntitlementSet:(NSMutableSet *)arg1 ;
-(NSMutableSet *)allKnownEntitlementSet;
-(void)handleRequest:(id)arg1 onConnection:(id)arg2 ;
-(void)setListener:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setAllKnownEntitlementGroup:(NSMutableArray *)arg1 ;
-(BOOL)startXPCListener;
-(void)registerHandlerFunction:(/*function pointer*/void*)arg1 type:(int)arg2 allowedEntitlementGroup:(id)arg3 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

