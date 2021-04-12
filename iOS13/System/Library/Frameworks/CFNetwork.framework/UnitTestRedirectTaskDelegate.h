/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@class NSString;

@interface UnitTestRedirectTaskDelegate : NSObject <NSURLSessionTaskDelegate> {

	BOOL _correctRequestURLSent;

}

@property (assign) BOOL correctRequestURLSent;                      //@synthesize correctRequestURLSent=_correctRequestURLSent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)correctRequestURLSent;
-(void)setCorrectRequestURLSent:(BOOL)arg1 ;
@end

