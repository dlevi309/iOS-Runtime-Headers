/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
*/


@class NSURLSession, NSURLSessionDataTask, NSURL;

@interface RUIImageLoad : NSObject {

	NSURLSession* _urlSession;
	NSURLSessionDataTask* _dataTask;
	NSURL* _URL;

}

@property (nonatomic,copy) NSURL * URL;              //@synthesize URL=_URL - In the implementation block
-(void)dealloc;
-(void)start;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(BOOL)receivedValidResponse:(id)arg1 ;
@end

