/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic,__weak) id<IMConnectionMonitorDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain,readonly) NSString * remoteHost;                                           //@synthesize remoteHost=_remoteHost - In the implementation block
+(id)alloc;
-(void)setDataConnectionActive:(BOOL)arg1 ;
-(id)initWithRemoteHost:(id)arg1 delegate:(id)arg2 ;
-(NSString *)remoteHost;
-(void)clear;
-(void)_setup;
-(id<IMConnectionMonitorDelegate>)delegate;
-(void)goDisconnected;
-(void)setDelegate:(id<IMConnectionMonitorDelegate>)arg1 ;
-(BOOL)isImmediatelyReachable;
-(void)goConnectedWithLocalSocketAddress:(id)arg1 remoteSocketAddress:(id)arg2 ;
-(BOOL)isDataConnectionActive;
-(BOOL)requiresDataConnectionActivation;
@end

