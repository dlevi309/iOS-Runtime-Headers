/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAPAccessoryServerBrowser.h>

@protocol HAPAccessoryServerBrowserDelegate, OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface HAPAccessoryServerBrowserRelay : HAPAccessoryServerBrowser {

	NSMutableArray* _discoveredAccessoryServers;
	id<HAPAccessoryServerBrowserDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (nonatomic,readonly) NSMutableArray * discoveredAccessoryServers;                      //@synthesize discoveredAccessoryServers=_discoveredAccessoryServers - In the implementation block
@property (assign,nonatomic,__weak) id<HAPAccessoryServerBrowserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                         //@synthesize delegateQueue=_delegateQueue - In the implementation block
-(id)initWithQueue:(id)arg1 ;
-(id<HAPAccessoryServerBrowserDelegate>)delegate;
-(long long)linkType;
-(void)addAccessoryServerWithStream:(id)arg1 name:(id)arg2 identifier:(id)arg3 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)removeAccessoryServerWithStream:(id)arg1 ;
-(void)setDelegate:(id<HAPAccessoryServerBrowserDelegate>)arg1 ;
-(NSMutableArray *)discoveredAccessoryServers;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)discoverAccessoryServerWithIdentifier:(id)arg1 ;
-(void)stopDiscoveringAccessoryServers;
-(void)_setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)startDiscoveringAccessoryServers;
@end

