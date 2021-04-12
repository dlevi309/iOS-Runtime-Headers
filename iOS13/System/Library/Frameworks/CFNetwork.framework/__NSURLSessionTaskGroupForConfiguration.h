/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

@class NSURLSessionConfiguration, NSURLSession;


@protocol __NSURLSessionTaskGroupForConfiguration <NSObject>
@property (__weak,readonly) NSURLSessionConfiguration * _groupConfiguration; 
@property (__weak,readonly) NSURLSession * _groupSession; 
@required
-(id)dataTaskWithRequest:(id)arg1;
-(id)dataTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)uploadTaskWithStreamedRequest:(id)arg1;
-(NSURLSessionConfiguration *)_groupConfiguration;
-(NSURLSession *)_groupSession;

@end

