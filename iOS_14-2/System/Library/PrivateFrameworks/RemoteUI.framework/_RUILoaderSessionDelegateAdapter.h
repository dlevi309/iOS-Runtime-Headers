/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSObject*<NSURLSessionTaskDelegate>)delegate;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setDelegate:(NSObject*<NSURLSessionTaskDelegate>)arg1 ;
@end

