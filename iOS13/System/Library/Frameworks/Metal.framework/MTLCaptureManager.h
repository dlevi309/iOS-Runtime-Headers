/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


@protocol MTLCaptureScope;
@interface MTLCaptureManager : NSObject {

	BOOL _isCapturing;
	id<MTLCaptureScope> _defaultCaptureScope;

}

@property (retain) id<MTLCaptureScope> defaultCaptureScope;              //@synthesize defaultCaptureScope=_defaultCaptureScope - In the implementation block
@property (readonly) BOOL isCapturing;                                   //@synthesize isCapturing=_isCapturing - In the implementation block
+(id)sharedCaptureManager;
-(void)dealloc;
-(id<MTLCaptureScope>)defaultCaptureScope;
-(id)newCaptureScopeWithDevice:(id)arg1 ;
-(void)setDefaultCaptureScope:(id<MTLCaptureScope>)arg1 ;
-(id)newCaptureScopeWithCommandQueue:(id)arg1 ;
-(void)stopCapture;
-(BOOL)startCaptureWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(void)startCaptureWithDevice:(id)arg1 ;
-(void)startCaptureWithCommandQueue:(id)arg1 ;
-(void)startCaptureWithScope:(id)arg1 ;
-(BOOL)supportsDestination:(long long)arg1 ;
-(BOOL)isCapturing;
@end

