/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class NSURLSession, NSString, NSURL;

@interface WFGiphySessionManager : NSObject <NSURLSessionDataDelegate> {

	NSURLSession* _session;
	NSString* _apiKey;
	NSURL* _baseURL;

}

@property (nonatomic,readonly) NSURLSession * session;              //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) NSString * apiKey;                       //@synthesize apiKey=_apiKey - In the implementation block
@property (nonatomic,readonly) NSURL * baseURL;                     //@synthesize baseURL=_baseURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSURL *)baseURL;
-(NSURLSession *)session;
-(id)initWithSessionConfiguration:(id)arg1 ;
-(void)setApiKey:(NSString *)arg1 ;
-(NSString *)apiKey;
-(void)random:(/*^block*/id)arg1 ;
-(void)trendingWithLimit:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)search:(id)arg1 limit:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendRequestWithPath:(id)arg1 parameters:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

