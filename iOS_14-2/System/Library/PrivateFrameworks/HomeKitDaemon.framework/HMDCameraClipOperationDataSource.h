/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDCameraClipOperationDataSource.h>

@protocol HMDCameraClipOperationDataSource <NSObject>
@property (readonly) double operationTimeout; 
@required
-(double)operationTimeout;
-(void)submitOperationEvent:(id)arg1;
-(void)appendData:(id)arg1 toStreamingAssetAppendContext:(id)arg2 completion:(/*^block*/id)arg3;
-(id)timerWithTimeInterval:(double)arg1 options:(unsigned long long)arg2;

@end


@class NSString;

@interface HMDCameraClipOperationDataSource : HMFObject <HMDCameraClipOperationDataSource>

@property (readonly) double operationTimeout; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)operationTimeout;
-(void)submitOperationEvent:(id)arg1 ;
-(void)appendData:(id)arg1 toStreamingAssetAppendContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)timerWithTimeInterval:(double)arg1 options:(unsigned long long)arg2 ;
@end

