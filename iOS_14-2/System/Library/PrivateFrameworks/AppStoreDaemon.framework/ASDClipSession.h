/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <libobjc.A.dylib/ASDClipSessionChannel.h>

@protocol ASDClipServiceBroker, OS_dispatch_queue, ASDClipSessionDelegate;
@class NSObject, ASDClipRequest, NSUUID, NSString;

@interface ASDClipSession : NSObject <ASDClipSessionChannel> {

	id<ASDClipServiceBroker> _broker;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	ASDClipRequest* _request;
	id<ASDClipSessionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ASDClipSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSUUID * uniqueID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSUUID *)uniqueID;
-(id<ASDClipSessionDelegate>)delegate;
-(id)initWithRequest:(id)arg1 delegate:(id)arg2 ;
-(void)channelNotifyDidComplete;
-(void)channelNotifyDidFailWithError:(id)arg1 ;
-(void)channelNotifyDidInstallPlaceholder;
-(void)channelNotifyDidProgress:(double)arg1 ;
-(void)channelStateDidOpen;
-(void)channelStateDidClose;
-(void)setDelegate:(id<ASDClipSessionDelegate>)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(id)initWithRequest:(id)arg1 delegate:(id)arg2 usingBroker:(id)arg3 ;
-(void)_establishBoostingConnection;
-(void)_dispatchHandler:(/*^block*/id)arg1 withError:(id)arg2 ;
-(void)continueInstallWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_dispatchFailWithError:(id)arg1 ;
-(void)startDownloadWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)cancelInstallWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)downloadAndInstallWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)installPlaceholderWithCompletionHandler:(/*^block*/id)arg1 ;
@end

