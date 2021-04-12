/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/


@protocol OS_dispatch_queue, TSBonjourBrowserDelegate;
#import <TimeSync/TimeSync-Structs.h>
@class NSObject, NSArray;

@interface TSBonjourBrowser : NSObject {

	DNSServiceRef_tRef _sdRef;
	NSObject*<OS_dispatch_queue> _queue;
	id<TSBonjourBrowserDelegate> _delegate;
	NSArray* _nodes;

}

@property (assign,nonatomic) id<TSBonjourBrowserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * nodes;                                      //@synthesize nodes=_nodes - In the implementation block
-(id)init;
-(void)dealloc;
-(id<TSBonjourBrowserDelegate>)delegate;
-(void)setDelegate:(id<TSBonjourBrowserDelegate>)arg1 ;
-(NSArray *)nodes;
-(void)setNodes:(NSArray *)arg1 ;
-(BOOL)stopBrowsing;
-(void)addedServiceWithName:(const char*)arg1 regType:(const char*)arg2 domain:(const char*)arg3 onInterface:(unsigned)arg4 withFlags:(unsigned)arg5 ;
-(void)removedServiceWithName:(const char*)arg1 regType:(const char*)arg2 domain:(const char*)arg3 onInterface:(unsigned)arg4 withFlags:(unsigned)arg5 ;
-(BOOL)startBrowsingWithError:(id*)arg1 ;
@end

