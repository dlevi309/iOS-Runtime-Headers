/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/FigCaptureDeferredProcessingJobDelegate.h>

@class NSString;

@interface BWCaptureDeferredPhotoProcessor : NSObject <FigCaptureDeferredProcessingJobDelegate> {

	OpaqueFigCaptureDeferredPhotoProcessorRef _deferredPhotoProcessor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)request:(id)arg1 failedWithError:(int)arg2 ;
-(void)job:(id)arg1 failedWithError:(int)arg2 ;
-(void)job:(id)arg1 completedWithSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(id)initWithFigCaptureDeferredPhotoProcessor:(OpaqueFigCaptureDeferredPhotoProcessorRef)arg1 ;
@end

