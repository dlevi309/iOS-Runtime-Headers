/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class AVCaptureInputInternal, NSArray;

@interface AVCaptureInput : NSObject {

	AVCaptureInputInternal* _inputInternal;

}

@property (nonatomic,readonly) NSArray * ports; 
+(void)initialize;
-(OpaqueCMClockRef)clock;
-(void)attachToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)performFigCaptureSessionOperationSafelyUsingBlock:(/*^block*/id)arg1 ;
-(void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(id)session;
-(void)setSession:(id)arg1 ;
-(NSArray *)ports;
-(id)videoDevice;
-(id)initSubclass;
-(void)dealloc;
@end

