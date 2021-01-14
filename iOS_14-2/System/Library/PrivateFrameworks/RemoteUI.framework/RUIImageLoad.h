/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
*/


@class NSURLSession, NSURLSessionDataTask, NSURL;

@interface RUIImageLoad : NSObject {

	NSURLSession* _urlSession;
	NSURLSessionDataTask* _dataTask;
	NSURL* _URL;

}

@property (nonatomic,copy) NSURL * URL;              //@synthesize URL=_URL - In the implementation block
-(void)start;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(void)dealloc;
-(BOOL)receivedValidResponse:(id)arg1 ;
@end

