/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <AppleMediaServices/AMSURLSession.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface IMURLSession : AMSURLSession {

	NSObject*<OS_dispatch_queue> _syncQueue;
	long long _state;
	BOOL _followsRedirects;

}

@property (assign,nonatomic) BOOL followsRedirects;              //@synthesize followsRedirects=_followsRedirects - In the implementation block
@property (nonatomic,readonly) long long state; 
@property (nonatomic,readonly) BOOL isUsable; 
-(long long)state;
-(void)invalidateAndCancel;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)finishTasksAndInvalidate;
-(BOOL)isUsable;
-(id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
-(void)setFollowsRedirects:(BOOL)arg1 ;
-(BOOL)followsRedirects;
-(void)_configureProtocolHandler;
@end

