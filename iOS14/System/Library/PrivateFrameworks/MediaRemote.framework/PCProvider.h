/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@protocol PCProvider <NSObject>
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue; 
@property (nonatomic,copy) id displayContextHandler; 
@property (nonatomic,copy) id progressEventHandler; 
@required
-(id)progressEventHandler;
-(id)displayContextHandler;
-(void)setDisplayContextHandler:(/*^block*/id)arg1;
-(void)setDispatchQueue:(id)arg1;
-(void)setProgressEventHandler:(/*^block*/id)arg1;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)receiveEvent:(id)arg1;

@end

