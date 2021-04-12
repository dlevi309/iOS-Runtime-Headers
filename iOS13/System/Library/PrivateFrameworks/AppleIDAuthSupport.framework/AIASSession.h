/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleIDAuthSupport.framework/AppleIDAuthSupport
*/

#import <AppleIDAuthSupport/AppleIDAuthSupport-Structs.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@class NSMutableDictionary, NSURLSession, NSString;

@interface AIASSession : NSObject <NSURLSessionDelegate> {

	BOOL _invalidated;
	NSMutableDictionary* _taskMap;
	NSURLSession* _URLSession;

}

@property (retain) NSMutableDictionary * taskMap;                   //@synthesize taskMap=_taskMap - In the implementation block
@property (retain) NSURLSession * URLSession;                       //@synthesize URLSession=_URLSession - In the implementation block
@property (assign) BOOL invalidated;                                //@synthesize invalidated=_invalidated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)invalidateAndCancel;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)invalidated;
-(void)setInvalidated:(BOOL)arg1 ;
-(void)setURLSession:(NSURLSession *)arg1 ;
-(NSURLSession *)URLSession;
-(void)setTaskMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)taskMap;
-(id)getRequest:(id)arg1 ;
-(id)requestWithURL:(id)arg1 data:(CFDictionaryRef)arg2 clientInfo:(id)arg3 proxiedClientInfo:(id)arg4 companionClientInfo:(id)arg5 appleITeamId:(id)arg6 appleIClientId:(id)arg7 ;
@end

