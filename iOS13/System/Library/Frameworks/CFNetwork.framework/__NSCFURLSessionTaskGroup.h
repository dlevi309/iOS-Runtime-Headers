/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <libobjc.A.dylib/__NSURLSessionTaskGroupForConfiguration.h>

@class NSURLSessionConfiguration, __NSCFURLSession, NSString, NSURLSession;

@interface __NSCFURLSessionTaskGroup : NSObject <__NSURLSessionTaskGroupForConfiguration> {

	NSURLSessionConfiguration* _groupConfiguration_ivar;
	__NSCFURLSession* _groupSession_ivar;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak,readonly) NSURLSessionConfiguration * _groupConfiguration; 
@property (__weak,readonly) NSURLSession * _groupSession; 
-(void)dealloc;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)dataTaskWithRequest:(id)arg1 ;
-(id)dataTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)uploadTaskWithStreamedRequest:(id)arg1 ;
-(NSURLSessionConfiguration *)_groupConfiguration;
-(NSURLSession *)_groupSession;
-(id)_initWithTarget:(id)arg1 configuration:(id)arg2 ;
@end

