/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSURLSession, NSMutableDictionary, NSURL, NSURLSessionDataTask;

@interface VUIAppScriptDownloadManager : NSObject {

	NSURLSession* _session;
	NSMutableDictionary* _completionBlocksDict;
	NSURL* _currentURL;
	NSMutableDictionary* _appScriptDict;
	NSURLSessionDataTask* _task;

}

@property (nonatomic,retain) NSURL * currentURL;                               //@synthesize currentURL=_currentURL - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * appScriptDict;              //@synthesize appScriptDict=_appScriptDict - In the implementation block
@property (nonatomic,retain) NSURLSessionDataTask * task;                      //@synthesize task=_task - In the implementation block
+(id)sharedInstance;
-(id)_init;
-(NSURLSessionDataTask *)task;
-(void)setTask:(NSURLSessionDataTask *)arg1 ;
-(NSURL *)currentURL;
-(void)setCurrentURL:(NSURL *)arg1 ;
-(void)setAppScriptDict:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)appScriptDict;
-(void)fetchAppJavascript:(id)arg1 cachePolicy:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

