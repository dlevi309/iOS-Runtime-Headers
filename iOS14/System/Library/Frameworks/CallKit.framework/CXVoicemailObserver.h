/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_performDelegateCallback:(/*^block*/id)arg1 ;
-(id)init;
-(id<CXVoicemailObserverDelegate>)delegate;
-(id<CXVoicemailObserverDataSource>)dataSource;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(id<CXVoicemailObserverDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)dealloc;
-(NSArray *)voicemails;
-(void)dataSourceVoicemailsChanged:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 queue:(id)arg2 ;
@end

