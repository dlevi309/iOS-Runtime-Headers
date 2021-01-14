/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSObject*<OS_dispatch_queue>)concurrentQueue;
-(void)_performDelegateCallback:(/*^block*/id)arg1 ;
-(id)init;
-(id<CXCallObserverDelegate>)delegate;
-(void)dataSource:(id)arg1 callChanged:(id)arg2 ;
-(id<CXCallObserverDataSource>)dataSource;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(id<CXCallObserverDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(NSArray *)calls;
-(id)initWithDataSource:(id)arg1 concurrentQueue:(id)arg2 ;
-(void)dealloc;
@end

