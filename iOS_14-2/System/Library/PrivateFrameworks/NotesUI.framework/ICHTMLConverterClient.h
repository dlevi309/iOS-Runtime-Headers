/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface ICHTMLConverterClient : NSObject {

	NSXPCConnection* _connectionToService;
	NSObject*<OS_dispatch_queue> _requestCountQueue;
	unsigned long long _requestCount;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> requestCountQueue;              //@synthesize requestCountQueue=_requestCountQueue - In the implementation block
@property (assign,nonatomic) unsigned long long requestCount;                             //@synthesize requestCount=_requestCount - In the implementation block
+(id)sharedClient;
-(void)setRequestCount:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)requestCount;
-(void)dealloc;
-(void)attributedStringFromHTMLString:(id)arg1 baseURL:(id)arg2 timeoutDate:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)attributedStringFromHTMLString:(id)arg1 ;
-(void)resumeConnectionIfNeeded;
-(void)suspendConnectionIfNeeded;
-(NSObject*<OS_dispatch_queue>)requestCountQueue;
-(void)setRequestCountQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

