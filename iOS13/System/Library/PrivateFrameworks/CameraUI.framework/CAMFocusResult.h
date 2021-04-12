/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


#import <CameraUI/CameraUI-Structs.h>
@interface CAMFocusResult : NSObject {

	BOOL _performingContrastDetection;
	BOOL _contrastBasedFocusDidStart;
	BOOL _contrastBasedFocusDidEnd;
	BOOL _deviceSupportsFocus;
	long long _focusMode;
	CGPoint _pointOfInterest;

}

@property (getter=isPerformingContrastDetection,nonatomic,readonly) BOOL performingContrastDetection;              //@synthesize performingContrastDetection=_performingContrastDetection - In the implementation block
@property (nonatomic,readonly) CGPoint pointOfInterest;                                                            //@synthesize pointOfInterest=_pointOfInterest - In the implementation block
@property (nonatomic,readonly) long long focusMode;                                                                //@synthesize focusMode=_focusMode - In the implementation block
@property (nonatomic,readonly) BOOL contrastBasedFocusDidStart;                                                    //@synthesize contrastBasedFocusDidStart=_contrastBasedFocusDidStart - In the implementation block
@property (nonatomic,readonly) BOOL contrastBasedFocusDidEnd;                                                      //@synthesize contrastBasedFocusDidEnd=_contrastBasedFocusDidEnd - In the implementation block
@property (nonatomic,readonly) BOOL deviceSupportsFocus;                                                           //@synthesize deviceSupportsFocus=_deviceSupportsFocus - In the implementation block
-(id)description;
-(CGPoint)pointOfInterest;
-(long long)focusMode;
-(BOOL)deviceSupportsFocus;
-(BOOL)isPerformingContrastDetection;
-(BOOL)contrastBasedFocusDidStart;
-(BOOL)contrastBasedFocusDidEnd;
-(id)initWithMode:(long long)arg1 pointOfInterest:(CGPoint)arg2 performingContrastDetection:(BOOL)arg3 contrastBasedFocusDidStart:(BOOL)arg4 contrastBasedFocusDidEnd:(BOOL)arg5 deviceSupportsFocus:(BOOL)arg6 ;
@end

