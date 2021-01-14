/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/


@protocol OS_dispatch_queue;
@class CXCallObserver, NSObject;

@interface CXCallController : NSObject {

	CXCallObserver* _callObserver;
	NSObject*<OS_dispatch_queue> _completionQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> completionQueue;              //@synthesize completionQueue=_completionQueue - In the implementation block
@property (nonatomic,retain) CXCallObserver * callObserver;                               //@synthesize callObserver=_callObserver - In the implementation block
-(id)initWithQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(id)init;
-(void)setCallObserver:(CXCallObserver *)arg1 ;
-(void)requestTransaction:(id)arg1 completion:(/*^block*/id)arg2 ;
-(CXCallObserver *)callObserver;
-(void)_requestTransaction:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestTransactionWithActions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestTransactionWithAction:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

