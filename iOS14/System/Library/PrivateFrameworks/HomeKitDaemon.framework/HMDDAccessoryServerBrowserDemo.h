/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <CoreHAP/HAPAccessoryServerBrowser.h>

@protocol HAPAccessoryServerBrowserDelegate, OS_dispatch_queue;
@class NSObject, NSMutableArray, NSDictionary;

@interface HMDDAccessoryServerBrowserDemo : HAPAccessoryServerBrowser {

	BOOL _accessoryPaired;
	id<HAPAccessoryServerBrowserDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSMutableArray* _servers;
	NSDictionary* _demoData;

}

@property (assign,nonatomic,__weak) id<HAPAccessoryServerBrowserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                         //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * servers;                                           //@synthesize servers=_servers - In the implementation block
@property (nonatomic,retain) NSDictionary * demoData;                                            //@synthesize demoData=_demoData - In the implementation block
@property (assign,nonatomic) BOOL accessoryPaired;                                               //@synthesize accessoryPaired=_accessoryPaired - In the implementation block
-(id<HAPAccessoryServerBrowserDelegate>)delegate;
-(long long)linkType;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(NSMutableArray *)servers;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(id<HAPAccessoryServerBrowserDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)discoverAccessoryServerWithIdentifier:(id)arg1 ;
-(BOOL)_delegateRespondsToSelector:(SEL)arg1 ;
-(void)stopDiscoveringAccessoryServers;
-(void)startDiscoveringAccessoryServers;
-(void)discoverServer;
-(BOOL)accessoryPaired;
-(void)loadDemoData:(id)arg1 finalized:(BOOL)arg2 ;
-(void)appendDemoData:(id)arg1 ;
-(void)resetDemoAccessory:(id)arg1 ;
-(void)setServers:(NSMutableArray *)arg1 ;
-(NSDictionary *)demoData;
-(void)setDemoData:(NSDictionary *)arg1 ;
-(void)setAccessoryPaired:(BOOL)arg1 ;
@end

