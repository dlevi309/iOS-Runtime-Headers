/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@class NSOperationQueue, NSString;

@interface __CFNSTestSessionInvalidationDelegate : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate> {

	NSOperationQueue* _q;
	/*^block*/id _taskCompleted;
	/*^block*/id _sessionCompleted;

}

@property (q,retain) NSOperationQueue * q;                          //@synthesize q=_q - In the implementation block
@property (assign) id taskCompleted;                                //@synthesize taskCompleted=_taskCompleted - In the implementation block
@property (assign) id sessionCompleted;                             //@synthesize sessionCompleted=_sessionCompleted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(NSOperationQueue *)q;
-(void)setQ:(NSOperationQueue *)arg1 ;
-(id)taskCompleted;
-(void)setTaskCompleted:(id)arg1 ;
-(id)sessionCompleted;
-(void)setSessionCompleted:(id)arg1 ;
@end

