/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/WirelessDiagnostics
*/


@protocol AWDObserverDelegate;
#import <WirelessDiagnostics/WirelessDiagnostics-Structs.h>
@interface AWDObserver : NSObject {

	shared_ptr<AWDObserverConnection>* observerConnection;
	id<AWDObserverDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AWDObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<AWDObserverDelegate>)delegate;
-(void)setDelegate:(id)arg1 queue:(dispatch_queue_sRef)arg2 ;
-(void)setConfiguration:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<AWDObserverDelegate>)arg1 ;
@end

