/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)execute;
-(id)startHandler;
-(void)setCancellationHandler:(id)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(id)cancellationHandler;
-(void)cancel;
-(id)initWithStartHandler:(/*^block*/id)arg1 ;
@end

