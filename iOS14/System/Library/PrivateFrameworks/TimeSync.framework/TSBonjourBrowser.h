/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setNodes:(NSArray *)arg1 ;
-(id<TSBonjourBrowserDelegate>)delegate;
-(void)setDelegate:(id<TSBonjourBrowserDelegate>)arg1 ;
-(BOOL)stopBrowsing;
-(NSArray *)nodes;
-(void)dealloc;
-(void)addedServiceWithName:(const char*)arg1 regType:(const char*)arg2 domain:(const char*)arg3 onInterface:(unsigned)arg4 withFlags:(unsigned)arg5 ;
-(void)removedServiceWithName:(const char*)arg1 regType:(const char*)arg2 domain:(const char*)arg3 onInterface:(unsigned)arg4 withFlags:(unsigned)arg5 ;
-(BOOL)startBrowsingWithError:(id*)arg1 ;
@end

