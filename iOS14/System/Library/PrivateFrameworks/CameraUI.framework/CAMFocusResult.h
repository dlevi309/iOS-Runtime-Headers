/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)deviceSupportsFocus;
-(id)initWithMode:(long long)arg1 pointOfInterest:(CGPoint)arg2 performingContrastDetection:(BOOL)arg3 contrastBasedFocusDidStart:(BOOL)arg4 contrastBasedFocusDidEnd:(BOOL)arg5 deviceSupportsFocus:(BOOL)arg6 ;
-(CGPoint)pointOfInterest;
-(long long)focusMode;
-(BOOL)isPerformingContrastDetection;
-(id)description;
-(BOOL)contrastBasedFocusDidStart;
-(BOOL)contrastBasedFocusDidEnd;
@end

