/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureOutput.h>

@class AVCaptureVideoThumbnailOutputInternal, NSArray;

@interface AVCaptureVideoThumbnailOutput : AVCaptureOutput {

	AVCaptureVideoThumbnailOutputInternal* _internal;

}

@property (assign,nonatomic) id<AVCaptureVideoThumbnailContentsDelegate> thumbnailContentsDelegate; 
@property (nonatomic,copy) NSArray * filters; 
@property (assign,nonatomic) CGSize thumbnailSize; 
+(void)initialize;
+(CGRect)contentsRectForFilterAtIndex:(unsigned long long)arg1 thumbnailSize:(CGSize)arg2 filterCount:(unsigned long long)arg3 ;
-(id)init;
-(void)dealloc;
-(NSArray *)filters;
-(void)setFilters:(NSArray *)arg1 ;
-(CGSize)thumbnailSize;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)_signalInvalidationOfPropagatedContentsIfNecessary;
-(void)safelyHandleServerConnectionDeathForFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(void)setThumbnailContentsDelegate:(id<AVCaptureVideoThumbnailContentsDelegate>)arg1 ;
-(id<AVCaptureVideoThumbnailContentsDelegate>)thumbnailContentsDelegate;
-(id)connectionMediaTypes;
-(BOOL)canAddConnection:(id)arg1 failureReason:(id*)arg2 ;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
@end

