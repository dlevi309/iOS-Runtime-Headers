/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <libobjc.A.dylib/CXVoicemailObserverDataSourceDelegate.h>

@protocol CXVoicemailObserverDelegate, OS_dispatch_queue, CXVoicemailObserverDataSource;
@class NSObject, NSArray, NSString;

@interface CXVoicemailObserver : NSObject <CXVoicemailObserverDataSourceDelegate> {

	id<CXVoicemailObserverDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _queue;
	id<CXVoicemailObserverDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<CXVoicemailObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                   //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id<CXVoicemailObserverDataSource> dataSource;               //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,copy,readonly) NSArray * voicemails; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<CXVoicemailObserverDelegate>)delegate;
-(void)setDelegate:(id<CXVoicemailObserverDelegate>)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(id<CXVoicemailObserverDataSource>)dataSource;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)_performDelegateCallback:(/*^block*/id)arg1 ;
-(void)dataSourceVoicemailsChanged:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 queue:(id)arg2 ;
-(NSArray *)voicemails;
@end

