/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIImageLoader.h>

@class NSURLRequest, NSURLSession, NSURLSessionTask;

@interface _UINSURLRequestImageLoader : _UIImageLoader {

	NSURLRequest* _request;
	NSURLSession* _session;
	NSURLSessionTask* _task;

}
-(id)_error;
-(void)_really_loadImage:(/*^block*/id)arg1 ;
-(id)initWithURLRequest:(id)arg1 session:(id)arg2 ;
-(BOOL)_really_cancel;
@end

