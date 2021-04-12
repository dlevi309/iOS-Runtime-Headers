/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@protocol OS_dispatch_workloop;
@class KTContextStore, KTLogClient, TransparencyManagedDataStore, NSObject, NSString;

@interface TransparencyLogSessionDelegate : NSObject <NSURLSessionDelegate> {

	KTContextStore* _contextStore;
	KTLogClient* _logClient;
	TransparencyManagedDataStore* _dataStore;
	NSObject*<OS_dispatch_workloop> _workloop;

}

@property (retain) TransparencyManagedDataStore * dataStore;              //@synthesize dataStore=_dataStore - In the implementation block
@property (retain) NSObject*<OS_dispatch_workloop> workloop;              //@synthesize workloop=_workloop - In the implementation block
@property (retain) KTContextStore * contextStore;                         //@synthesize contextStore=_contextStore - In the implementation block
@property (__weak) KTLogClient * logClient;                               //@synthesize logClient=_logClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TransparencyManagedDataStore *)dataStore;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5 ;
-(void)setDataStore:(TransparencyManagedDataStore *)arg1 ;
-(KTContextStore *)contextStore;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(void)setWorkloop:(NSObject*<OS_dispatch_workloop>)arg1 ;
-(void)setContextStore:(KTContextStore *)arg1 ;
-(NSObject*<OS_dispatch_workloop>)workloop;
-(KTLogClient *)logClient;
-(void)setLogClient:(KTLogClient *)arg1 ;
-(void)handleDownloadRecord:(id)arg1 downloadData:(id)arg2 downloadMetadata:(id)arg3 ;
-(void)handleDownloadRecordFailure:(id)arg1 task:(id)arg2 downloadMetadata:(id)arg3 error:(id)arg4 ;
-(id)initWithDataStore:(id)arg1 workloop:(id)arg2 ;
@end

