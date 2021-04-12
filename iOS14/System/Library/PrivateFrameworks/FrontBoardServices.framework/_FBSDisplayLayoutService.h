/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSInvalidatable.h>
#import <libobjc.A.dylib/FBSDisplayLayoutMonitorClientInterface.h>

@protocol OS_dispatch_queue;
@class BSServiceConnectionEndpoint, NSObject, BSServiceConnection, NSMapTable, FBSDisplayLayout, NSString;

@interface _FBSDisplayLayoutService : NSObject <BSInvalidatable, FBSDisplayLayoutMonitorClientInterface> {

	BSServiceConnectionEndpoint* _endpoint;
	NSObject*<OS_dispatch_queue> _callOutQueue;
	BSServiceConnection* _connection;
	os_unfair_lock_s _lock;
	NSMapTable* _lock_keyedObservers;
	FBSDisplayLayout* _lock_layout;
	unsigned long long _lock_layoutGeneration;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addObserver:(/*^block*/id)arg1 forKey:(id)arg2 ;
-(id)currentLayout;
-(id)endpoint;
-(id)_initWithEndpoint:(id)arg1 qos:(char)arg2 ;
-(void)invalidate;
-(oneway void)updateLayout:(id)arg1 withTransition:(id)arg2 ;
-(void)removeObserverForKey:(id)arg1 ;
-(void)dealloc;
@end

