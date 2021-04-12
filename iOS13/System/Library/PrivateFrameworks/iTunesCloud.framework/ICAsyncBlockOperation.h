/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICAsyncOperation.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface ICAsyncBlockOperation : ICAsyncOperation {

	NSObject*<OS_dispatch_queue> _accessQueue;
	/*^block*/id _cancellationHandler;
	/*^block*/id _startHandler;

}

@property (nonatomic,copy,readonly) id startHandler;              //@synthesize startHandler=_startHandler - In the implementation block
@property (nonatomic,copy) id cancellationHandler; 
-(void)cancel;
-(void)setCancellationHandler:(id)arg1 ;
-(id)cancellationHandler;
-(void)execute;
-(void)finishWithError:(id)arg1 ;
-(id)initWithStartHandler:(/*^block*/id)arg1 ;
-(id)startHandler;
@end

