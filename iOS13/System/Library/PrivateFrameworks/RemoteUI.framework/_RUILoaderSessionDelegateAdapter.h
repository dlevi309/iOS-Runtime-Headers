/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
*/

#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@protocol NSURLSessionTaskDelegate;
@class NSObject, NSString;

@interface _RUILoaderSessionDelegateAdapter : NSObject <NSURLSessionTaskDelegate> {

	NSObject*<NSURLSessionTaskDelegate> _delegate;

}

@property (assign,nonatomic,__weak) NSObject*<NSURLSessionTaskDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<NSURLSessionTaskDelegate>)delegate;
-(void)setDelegate:(NSObject*<NSURLSessionTaskDelegate>)arg1 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
@end

