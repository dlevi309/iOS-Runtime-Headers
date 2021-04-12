/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@class TransparencyManagedDataStore, NSString;

@interface TransparencyLogSessionDelegate : NSObject <NSURLSessionDelegate> {

	TransparencyManagedDataStore* _dataStore;

}

@property (retain) TransparencyManagedDataStore * dataStore;              //@synthesize dataStore=_dataStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5 ;
-(TransparencyManagedDataStore *)dataStore;
-(id)initWithDataStore:(id)arg1 ;
-(void)setDataStore:(TransparencyManagedDataStore *)arg1 ;
-(BOOL)isResponseForConsistencyProofDownload:(id)arg1 ;
-(void)handleConsistencyProofDownload:(id)arg1 downloadData:(id)arg2 ;
-(void)handleQueryResponseDownload:(id)arg1 downloadData:(id)arg2 ;
-(void)markRequestDownloadFailure:(id)arg1 error:(id)arg2 ;
-(void)handleConsistencyProofDownloadFailure:(id)arg1 task:(id)arg2 error:(id)arg3 ;
-(void)handleQueryResponseDownloadFailure:(id)arg1 task:(id)arg2 error:(id)arg3 ;
@end

