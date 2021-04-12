/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
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
-(void)job:(id)arg1 completedWithSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)job:(id)arg1 failedWithError:(int)arg2 ;
-(id)initWithFigCaptureDeferredPhotoProcessor:(OpaqueFigCaptureDeferredPhotoProcessorRef)arg1 ;
@end

