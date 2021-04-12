/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol CAMPanoramaProcessorDelegate;
#import <CameraUI/CameraUI-Structs.h>
@class CAMPanoramaCaptureRequest, NSMutableDictionary;

@interface CAMPanoramaProcessor : NSObject {

	BOOL _capturingPanorama;
	id<CAMPanoramaProcessorDelegate> _delegate;
	CAMPanoramaCaptureRequest* _request;
	long long _photoEncodingBehavior;
	long long _direction;
	NSMutableDictionary* __initialMetadataByRequestUUID;
	OpaqueFigSampleBufferProcessorRef __processor;
	CGSize _previewSize;

}

@property (assign,setter=_setCapturingPanorama:,getter=isCapturingPanorama,nonatomic) BOOL capturingPanorama;              //@synthesize capturingPanorama=_capturingPanorama - In the implementation block
@property (setter=_setRequest:,nonatomic,retain) CAMPanoramaCaptureRequest * request;                                      //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _initialMetadataByRequestUUID;                                        //@synthesize _initialMetadataByRequestUUID=__initialMetadataByRequestUUID - In the implementation block
@property (nonatomic,readonly) OpaqueFigSampleBufferProcessorRef _processor;                                               //@synthesize _processor=__processor - In the implementation block
@property (nonatomic,__weak,readonly) id<CAMPanoramaProcessorDelegate> delegate;                                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long photoEncodingBehavior;                                                            //@synthesize photoEncodingBehavior=_photoEncodingBehavior - In the implementation block
@property (nonatomic,readonly) CGSize previewSize;                                                                         //@synthesize previewSize=_previewSize - In the implementation block
@property (assign,nonatomic) long long direction;                                                                          //@synthesize direction=_direction - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(id<CAMPanoramaProcessorDelegate>)delegate;
-(long long)direction;
-(void)setDirection:(long long)arg1 ;
-(CAMPanoramaCaptureRequest *)request;
-(CGSize)previewSize;
-(void)processSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(OpaqueFigSampleBufferProcessorRef)_processor;
-(void)_setRequest:(id)arg1 ;
-(long long)photoEncodingBehavior;
-(BOOL)isCapturingPanorama;
-(void)startPanoramaCaptureWithRequest:(id)arg1 ;
-(NSMutableDictionary *)_initialMetadataByRequestUUID;
-(void)_setCapturingPanorama:(BOOL)arg1 ;
-(id)initWithDelegate:(id)arg1 encodingBehavior:(long long)arg2 ;
-(void)stopPanoramaCapture;
-(void)processPanoramaCaptureWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

