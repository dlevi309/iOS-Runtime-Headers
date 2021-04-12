/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/


@protocol IMConnectionMonitorDelegate;
@class NSString;

@interface IMConnectionMonitor : NSObject {

	NSString* _remoteHost;
	id<IMConnectionMonitorDelegate> _delegate;

}

@property (nonatomic,readonly) BOOL isImmediatelyReachable; 
@property (nonatomic,readonly) BOOL requiresDataConnectionActivation; 
@property (assign,setter=setDataConnectionActive:,nonatomic) BOOL isDataConnectionActive; 
@property (assign,nonatomic) id<IMConnectionMonitorDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain,readonly) NSString * remoteHost;                                           //@synthesize remoteHost=_remoteHost - In the implementation block
+(id)alloc;
-(void)dealloc;
-(void)clear;
-(id<IMConnectionMonitorDelegate>)delegate;
-(void)setDelegate:(id<IMConnectionMonitorDelegate>)arg1 ;
-(void)_setup;
-(id)initWithRemoteHost:(id)arg1 delegate:(id)arg2 ;
-(BOOL)isImmediatelyReachable;
-(void)goConnectedWithLocalSocketAddress:(id)arg1 remoteSocketAddress:(id)arg2 ;
-(void)goDisconnected;
-(void)setDataConnectionActive:(BOOL)arg1 ;
-(BOOL)isDataConnectionActive;
-(BOOL)requiresDataConnectionActivation;
-(NSString *)remoteHost;
@end

