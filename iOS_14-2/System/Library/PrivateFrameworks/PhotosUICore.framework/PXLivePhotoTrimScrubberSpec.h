/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class UIColor;

@interface PXLivePhotoTrimScrubberSpec : NSObject {

	BOOL _fallbackToKeyTimeTracking;
	BOOL _fallbackToPlayheadTracking;
	BOOL _useMiniScrubberHeight;
	double _scrubberHeight;
	double _handleTouchDistance;
	double _handleWidth;
	double _handleHeight;
	double _handleAnchorX;
	double _loupeVerticalInset;
	double _loupeOuterCornerRadius;
	double _loupeInnerCornerRadius;
	double _playheadWidth;
	double _filmstripCornerRadius;
	UIColor* _filmstripBorderColor;
	UIColor* _disabledOverlayColor;
	UIEdgeInsets _filmstripViewInsets;

}

@property (assign,nonatomic) double scrubberHeight;                         //@synthesize scrubberHeight=_scrubberHeight - In the implementation block
@property (assign,nonatomic) double handleTouchDistance;                    //@synthesize handleTouchDistance=_handleTouchDistance - In the implementation block
@property (assign,nonatomic) double handleWidth;                            //@synthesize handleWidth=_handleWidth - In the implementation block
@property (assign,nonatomic) double handleHeight;                           //@synthesize handleHeight=_handleHeight - In the implementation block
@property (assign,nonatomic) double handleAnchorX;                          //@synthesize handleAnchorX=_handleAnchorX - In the implementation block
@property (assign,nonatomic) UIEdgeInsets filmstripViewInsets;              //@synthesize filmstripViewInsets=_filmstripViewInsets - In the implementation block
@property (assign,nonatomic) double loupeVerticalInset;                     //@synthesize loupeVerticalInset=_loupeVerticalInset - In the implementation block
@property (assign,nonatomic) double loupeOuterCornerRadius;                 //@synthesize loupeOuterCornerRadius=_loupeOuterCornerRadius - In the implementation block
@property (assign,nonatomic) double loupeInnerCornerRadius;                 //@synthesize loupeInnerCornerRadius=_loupeInnerCornerRadius - In the implementation block
@property (assign,nonatomic) double playheadWidth;                          //@synthesize playheadWidth=_playheadWidth - In the implementation block
@property (assign,nonatomic) double filmstripCornerRadius;                  //@synthesize filmstripCornerRadius=_filmstripCornerRadius - In the implementation block
@property (nonatomic,retain) UIColor * filmstripBorderColor;                //@synthesize filmstripBorderColor=_filmstripBorderColor - In the implementation block
@property (nonatomic,retain) UIColor * disabledOverlayColor;                //@synthesize disabledOverlayColor=_disabledOverlayColor - In the implementation block
@property (assign,nonatomic) BOOL fallbackToKeyTimeTracking;                //@synthesize fallbackToKeyTimeTracking=_fallbackToKeyTimeTracking - In the implementation block
@property (assign,nonatomic) BOOL fallbackToPlayheadTracking;               //@synthesize fallbackToPlayheadTracking=_fallbackToPlayheadTracking - In the implementation block
@property (assign,nonatomic) BOOL useMiniScrubberHeight;                    //@synthesize useMiniScrubberHeight=_useMiniScrubberHeight - In the implementation block
-(double)scrubberHeight;
-(id)init;
-(double)handleWidth;
-(void)setDisabledOverlayColor:(UIColor *)arg1 ;
-(void)setUseMiniScrubberHeight:(BOOL)arg1 ;
-(void)_updateScrubberHeight;
-(void)setScrubberHeight:(double)arg1 ;
-(double)handleTouchDistance;
-(void)setHandleTouchDistance:(double)arg1 ;
-(void)setHandleWidth:(double)arg1 ;
-(double)handleHeight;
-(void)setHandleHeight:(double)arg1 ;
-(double)handleAnchorX;
-(void)setHandleAnchorX:(double)arg1 ;
-(UIEdgeInsets)filmstripViewInsets;
-(void)setFilmstripViewInsets:(UIEdgeInsets)arg1 ;
-(double)loupeVerticalInset;
-(void)setLoupeVerticalInset:(double)arg1 ;
-(double)loupeOuterCornerRadius;
-(void)setLoupeOuterCornerRadius:(double)arg1 ;
-(double)loupeInnerCornerRadius;
-(void)setLoupeInnerCornerRadius:(double)arg1 ;
-(double)playheadWidth;
-(void)setPlayheadWidth:(double)arg1 ;
-(double)filmstripCornerRadius;
-(void)setFilmstripCornerRadius:(double)arg1 ;
-(UIColor *)filmstripBorderColor;
-(void)setFilmstripBorderColor:(UIColor *)arg1 ;
-(UIColor *)disabledOverlayColor;
-(BOOL)fallbackToKeyTimeTracking;
-(void)setFallbackToKeyTimeTracking:(BOOL)arg1 ;
-(BOOL)fallbackToPlayheadTracking;
-(void)setFallbackToPlayheadTracking:(BOOL)arg1 ;
-(BOOL)useMiniScrubberHeight;
@end

