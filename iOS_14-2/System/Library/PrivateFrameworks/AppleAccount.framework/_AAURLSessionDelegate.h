/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@protocol NSURLSessionDataDelegateNSURLSessionDelegateNSURLSessionTaskDelegate;
@class NSString;

@interface _AAURLSessionDelegate : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate, NSURLSessionTaskDelegate> {

	id<NSURLSessionDataDelegate><NSURLSessionDelegate><NSURLSessionTaskDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NSURLSessionDataDelegate><NSURLSessionDelegate><NSURLSessionTaskDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(id)init;
-(id<NSURLSessionDataDelegate><NSURLSessionDelegate><NSURLSessionTaskDelegate>)delegate;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)setDelegate:(id<NSURLSessionDataDelegate><NSURLSessionDelegate><NSURLSessionTaskDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
@end

