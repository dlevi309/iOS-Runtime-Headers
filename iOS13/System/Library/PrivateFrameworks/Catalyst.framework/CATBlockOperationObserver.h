/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/

#import <libobjc.A.dylib/CATOperationObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface CATBlockOperationObserver : NSObject <CATOperationObserver> {

	NSObject*<OS_dispatch_queue> mQueue;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	/*^block*/id _didStart;
	/*^block*/id _didProgress;
	/*^block*/id _didFinish;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;              //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,copy) id didStart;                                               //@synthesize didStart=_didStart - In the implementation block
@property (nonatomic,copy) id didProgress;                                            //@synthesize didProgress=_didProgress - In the implementation block
@property (nonatomic,copy) id didFinish;                                              //@synthesize didFinish=_didFinish - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)operationDidFinish:(id)arg1 ;
-(id)didFinish;
-(void)setDidFinish:(id)arg1 ;
-(id)didStart;
-(void)invokeBlock:(/*^block*/id)arg1 operation:(id)arg2 ;
-(id)didProgress;
-(void)operationDidStart:(id)arg1 ;
-(void)operationDidProgress:(id)arg1 ;
-(void)setDidStart:(id)arg1 ;
-(void)setDidProgress:(id)arg1 ;
@end

