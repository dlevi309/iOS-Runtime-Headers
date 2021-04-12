/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDCameraRecordingUploaderDataSource.h>
@class NSURL;


@protocol HMDCameraRecordingUploaderDataSource <NSObject>
@property (copy,readonly) NSURL * storeDirectoryURL; 
@required
-(BOOL)removeItemAtURL:(id)arg1 error:(id*)arg2;
-(void)submitOperationEvent:(id)arg1;
-(NSURL *)storeDirectoryURL;
-(BOOL)writeData:(id)arg1 toFileAtURL:(id)arg2 error:(id*)arg3;
-(BOOL)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(BOOL)arg2 error:(id*)arg3;
-(void)appendData:(id)arg1 toStreamingAssetAppendContext:(id)arg2 completion:(/*^block*/id)arg3;
-(id)timerWithTimeInterval:(double)arg1 options:(unsigned long long)arg2;

@end


@class NSURL, NSString;

@interface HMDCameraRecordingUploaderDataSource : HMFObject <HMDCameraRecordingUploaderDataSource>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURL * storeDirectoryURL; 
-(BOOL)removeItemAtURL:(id)arg1 error:(id*)arg2 ;
-(void)submitOperationEvent:(id)arg1 ;
-(NSURL *)storeDirectoryURL;
-(BOOL)writeData:(id)arg1 toFileAtURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(BOOL)arg2 error:(id*)arg3 ;
-(void)appendData:(id)arg1 toStreamingAssetAppendContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)timerWithTimeInterval:(double)arg1 options:(unsigned long long)arg2 ;
@end

