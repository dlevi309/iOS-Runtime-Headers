/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol FigCaptureSessionPreviewTapDelegate;
#import <CMCapture/CMCapture-Structs.h>
@interface FigCaptureSessionProxy : NSObject {

	OpaqueFigCaptureSessionRef _session;
	long long _identifier;
	BOOL _previewTapOpened;
	id<FigCaptureSessionPreviewTapDelegate> _previewTapDelegate;

}

@property (readonly) long long identifier; 
+(void)initialize;
-(int)openPreviewTapWithDelegate:(id)arg1 ;
-(id)initWithFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 identifier:(long long)arg2 ;
-(long long)identifier;
-(void)closePreviewTap;
-(void)dealloc;
@end

