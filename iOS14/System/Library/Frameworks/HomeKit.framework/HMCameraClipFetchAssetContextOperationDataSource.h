/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMCameraClipFetchAssetContextOperationDataSource.h>

@protocol HMCameraClipFetchAssetContextOperationDataSource <NSObject>
@required
-(BOOL)removeItemAtURL:(id)arg1 error:(id*)arg2;
-(BOOL)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
-(id)dataTaskWithURL:(id)arg1 httpHeaderFields:(id)arg2;
-(BOOL)writeData:(id)arg1 toFileURL:(id)arg2 error:(id*)arg3;
-(id)dataFromEncryptedDataContext:(id)arg1 usingDecryptionManager:(id)arg2;
-(id)outputStreamToFileAtURL:(id)arg1 shouldAppend:(BOOL)arg2;
-(id)createTemporaryDirectoryAppropriateForURL:(id)arg1 error:(id*)arg2;
-(id)createVideoFileCombinerWithVideoFileURLs:(id)arg1 queue:(id)arg2;

@end


@class NSString;

@interface HMCameraClipFetchAssetContextOperationDataSource : NSObject <HMCameraClipFetchAssetContextOperationDataSource>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)removeItemAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(id)dataTaskWithURL:(id)arg1 httpHeaderFields:(id)arg2 ;
-(BOOL)writeData:(id)arg1 toFileURL:(id)arg2 error:(id*)arg3 ;
-(id)dataFromEncryptedDataContext:(id)arg1 usingDecryptionManager:(id)arg2 ;
-(id)outputStreamToFileAtURL:(id)arg1 shouldAppend:(BOOL)arg2 ;
-(id)createTemporaryDirectoryAppropriateForURL:(id)arg1 error:(id*)arg2 ;
-(id)createVideoFileCombinerWithVideoFileURLs:(id)arg1 queue:(id)arg2 ;
@end

