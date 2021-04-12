/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMDescriptionOverlayView.h>

@interface CAMCTMDescriptionOverlayView : CAMDescriptionOverlayView {

	BOOL __spatialOverCaptureSupported;

}

@property (getter=_isSpatialOverCaptureSupported,nonatomic,readonly) BOOL _spatialOverCaptureSupported;              //@synthesize _spatialOverCaptureSupported=__spatialOverCaptureSupported - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_currentContentSize;
-(BOOL)_isSpatialOverCaptureSupported;
-(double)_additionalSpacingForContentSize:(id)arg1 ;
-(id)titleTextUsingNarrowWidth:(BOOL)arg1 ;
-(id)acknowledgmentTextUsingNarrowWidth:(BOOL)arg1 ;
-(id)descriptionTitleTextUsingNarrowWidth:(BOOL)arg1 ;
-(id)descriptionTextUsingNarrowWidth:(BOOL)arg1 ;
-(id)infoTitleTextUsingNarrowWidth:(BOOL)arg1 ;
-(id)infoTextUsingNarrowWidth:(BOOL)arg1 ;
-(double)maxDescriptionTextWidthForNarrowWidth:(BOOL)arg1 isLandscape:(BOOL)arg2 usingFontSizeMultiplier:(double)arg3 ;
-(double)maxInfoTextWidthForNarrowWidth:(BOOL)arg1 isLandscape:(BOOL)arg2 usingFontSizeMultiplier:(double)arg3 ;
-(double)additionalSpacing;
@end

