/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <libobjc.A.dylib/__NSURLSessionTaskGroupForConfiguration.h>

@class NSURLSessionConfiguration, NSURLSession, NSString;

@interface __NSCFURLSessionTaskGroup : NSObject <__NSURLSessionTaskGroupForConfiguration> {

	NSURLSessionConfiguration* _groupConfiguration_ivar;
	NSURLSession* _groupSession_ivar;

}

@property (__weak,readonly) NSURLSessionConfiguration * _groupConfiguration; 
@property (__weak,readonly) NSURLSession * _groupSession; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dataTaskWithRequest:(id)arg1 ;
-(NSURLSession *)_groupSession;
-(id)uploadTaskWithStreamedRequest:(id)arg1 ;
-(NSURLSessionConfiguration *)_groupConfiguration;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)dataTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

