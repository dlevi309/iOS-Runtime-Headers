/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)operationDidStart:(id)arg1 ;
-(id)init;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)operationDidFinish:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)operationDidProgress:(id)arg1 ;
-(void)setDidFinish:(id)arg1 ;
-(id)didStart;
-(id)didFinish;
-(void)setDidStart:(id)arg1 ;
-(void)invokeBlock:(/*^block*/id)arg1 operation:(id)arg2 ;
-(id)didProgress;
-(void)setDidProgress:(id)arg1 ;
@end

