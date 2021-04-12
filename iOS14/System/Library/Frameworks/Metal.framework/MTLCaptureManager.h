/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)startCaptureWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(BOOL)supportsDestination:(long long)arg1 ;
-(id)newCaptureScopeWithDevice:(id)arg1 ;
-(BOOL)isCapturing;
-(void)startCaptureWithDevice:(id)arg1 ;
-(void)setDefaultCaptureScope:(id<MTLCaptureScope>)arg1 ;
-(id)newCaptureScopeWithCommandQueue:(id)arg1 ;
-(void)startCaptureWithScope:(id)arg1 ;
-(id<MTLCaptureScope>)defaultCaptureScope;
-(void)startCaptureWithCommandQueue:(id)arg1 ;
-(void)stopCapture;
-(void)dealloc;
@end

