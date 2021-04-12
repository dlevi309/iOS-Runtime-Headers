/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <libobjc.A.dylib/CXCallObserverDataSourceDelegate.h>

@protocol CXCallObserverDelegate, OS_dispatch_queue, CXCallObserverDataSource;
@class NSObject, NSArray, NSString;

@interface CXCallObserver : NSObject <CXCallObserverDataSourceDelegate> {

	id<CXCallObserverDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _concurrentQueue;
	id<CXCallObserverDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<CXCallObserverDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                  //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> concurrentQueue;              //@synthesize concurrentQueue=_concurrentQueue - In the implementation block
@property (nonatomic,readonly) id<CXCallObserverDataSource> dataSource;                   //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,copy,readonly) NSArray * calls; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<CXCallObserverDelegate>)delegate;
-(void)setDelegate:(id<CXCallObserverDelegate>)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(id<CXCallObserverDataSource>)dataSource;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(NSArray *)calls;
-(NSObject*<OS_dispatch_queue>)concurrentQueue;
-(void)_performDelegateCallback:(/*^block*/id)arg1 ;
-(void)dataSource:(id)arg1 callChanged:(id)arg2 ;
-(id)initWithDataSource:(id)arg1 concurrentQueue:(id)arg2 ;
@end

