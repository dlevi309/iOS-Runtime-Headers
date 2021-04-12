/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

@class NSURLSessionConfiguration, NSURLSession;


@protocol __NSURLSessionTaskGroupForConfiguration <NSObject>
@property (__weak,readonly) NSURLSessionConfiguration * _groupConfiguration; 
@property (__weak,readonly) NSURLSession * _groupSession; 
@required
-(id)dataTaskWithRequest:(id)arg1;
-(NSURLSession *)_groupSession;
-(id)uploadTaskWithStreamedRequest:(id)arg1;
-(NSURLSessionConfiguration *)_groupConfiguration;
-(id)dataTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

