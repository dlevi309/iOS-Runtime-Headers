/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureRequest.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol CAMVideoCaptureRequestDelegate;
@interface CAMVideoCaptureRequest : CAMCaptureRequest <NSCopying, NSMutableCopying> {

	BOOL _timelapse;
	BOOL _shouldGenerateVideoPreviewImage;
	double _maximumRecordedDuration;
	long long _maximumRecordedFileSize;
	long long _remainingDiskUsageThreshold;
	id<CAMVideoCaptureRequestDelegate> _delegate;
	long long _captureVideoConfiguration;
	long long _torchMode;
	double _userInitationTimestamp;

}

@property (getter=isTimelapse,nonatomic,readonly) BOOL timelapse;                               //@synthesize timelapse=_timelapse - In the implementation block
@property (nonatomic,readonly) BOOL shouldGenerateVideoPreviewImage;                            //@synthesize shouldGenerateVideoPreviewImage=_shouldGenerateVideoPreviewImage - In the implementation block
@property (nonatomic,readonly) double maximumRecordedDuration;                                  //@synthesize maximumRecordedDuration=_maximumRecordedDuration - In the implementation block
@property (nonatomic,readonly) long long maximumRecordedFileSize;                               //@synthesize maximumRecordedFileSize=_maximumRecordedFileSize - In the implementation block
@property (nonatomic,readonly) long long remainingDiskUsageThreshold;                           //@synthesize remainingDiskUsageThreshold=_remainingDiskUsageThreshold - In the implementation block
@property (nonatomic,__weak,readonly) id<CAMVideoCaptureRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long captureVideoConfiguration;                             //@synthesize captureVideoConfiguration=_captureVideoConfiguration - In the implementation block
@property (nonatomic,readonly) long long torchMode;                                             //@synthesize torchMode=_torchMode - In the implementation block
@property (nonatomic,readonly) double userInitationTimestamp;                                   //@synthesize userInitationTimestamp=_userInitationTimestamp - In the implementation block
-(id)init;
-(id<CAMVideoCaptureRequestDelegate>)delegate;
-(long long)torchMode;
-(BOOL)isTimelapse;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithRequest:(id)arg1 distinctPersistence:(BOOL)arg2 ;
-(long long)maximumRecordedFileSize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)captureVideoConfiguration;
-(double)maximumRecordedDuration;
-(long long)remainingDiskUsageThreshold;
-(BOOL)shouldGenerateVideoPreviewImage;
-(double)userInitationTimestamp;
@end

