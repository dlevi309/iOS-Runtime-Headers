/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMCameraClipFetchAssetContextOperationDataSource.h>

@protocol HMCameraClipFetchAssetContextOperationDataSource <NSObject>
@required
-(id)dataTaskWithURL:(id)arg1 httpHeaderFields:(id)arg2;
-(id)dataFromEncryptedDataContext:(id)arg1 usingDecryptionManager:(id)arg2;
-(BOOL)writeData:(id)arg1 toFileURL:(id)arg2 error:(id*)arg3;
-(id)outputStreamToFileAtURL:(id)arg1 shouldAppend:(BOOL)arg2;

@end


@class NSString;

@interface HMCameraClipFetchAssetContextOperationDataSource : NSObject <HMCameraClipFetchAssetContextOperationDataSource>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dataTaskWithURL:(id)arg1 httpHeaderFields:(id)arg2 ;
-(id)dataFromEncryptedDataContext:(id)arg1 usingDecryptionManager:(id)arg2 ;
-(BOOL)writeData:(id)arg1 toFileURL:(id)arg2 error:(id*)arg3 ;
-(id)outputStreamToFileAtURL:(id)arg1 shouldAppend:(BOOL)arg2 ;
@end

