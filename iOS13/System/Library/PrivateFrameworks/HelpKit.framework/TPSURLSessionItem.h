/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
*/

#import <libobjc.A.dylib/TPSURLSessionTaskDelegate.h>

@class TPSURLSessionTask, NSString;

@interface TPSURLSessionItem : NSObject <TPSURLSessionTaskDelegate> {

	BOOL _cancelled;
	TPSURLSessionTask* _sessionTask;
	/*^block*/id _completionHanlder;

}

@property (assign,getter=isCancelled,nonatomic) BOOL cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,readonly) long long state; 
@property (nonatomic,retain) TPSURLSessionTask * sessionTask;                //@synthesize sessionTask=_sessionTask - In the implementation block
@property (nonatomic,readonly) id completionHanlder;                         //@synthesize completionHanlder=_completionHanlder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)cancel;
-(void)resume;
-(BOOL)isCancelled;
-(long long)state;
-(void)setCancelled:(BOOL)arg1 ;
-(void)notifyWithSessionTask:(id)arg1 error:(id)arg2 ;
-(void)URLSessionSessionTask:(id)arg1 didCompleteWithError:(id)arg2 ;
-(id)initWithSessionTask:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(TPSURLSessionTask *)sessionTask;
-(void)setSessionTask:(TPSURLSessionTask *)arg1 ;
-(id)completionHanlder;
@end

