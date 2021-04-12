/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureOutput.h>

@class AVCaptureVideoThumbnailOutputInternal, NSArray;

@interface AVCaptureVideoThumbnailOutput : AVCaptureOutput {

	AVCaptureVideoThumbnailOutputInternal* _internal;

}

@property (assign,nonatomic) id<AVCaptureVideoThumbnailContentsDelegate> thumbnailContentsDelegate; 
@property (nonatomic,copy) NSArray * filters; 
@property (assign,nonatomic) CGSize thumbnailSize; 
+(void)initialize;
+(CGRect)contentsRectForFilterAtIndex:(unsigned long long)arg1 thumbnailSize:(CGSize)arg2 filterCount:(unsigned long long)arg3 ;
-(BOOL)canAddConnection:(id)arg1 failureReason:(id*)arg2 ;
-(void)setFilters:(NSArray *)arg1 ;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(void)safelyHandleServerConnectionDeathForFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(id)init;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(id)connectionMediaTypes;
-(NSArray *)filters;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(CGSize)thumbnailSize;
-(id<AVCaptureVideoThumbnailContentsDelegate>)thumbnailContentsDelegate;
-(void)_signalInvalidationOfPropagatedContentsIfNecessary;
-(void)dealloc;
-(void)setThumbnailContentsDelegate:(id<AVCaptureVideoThumbnailContentsDelegate>)arg1 ;
@end

