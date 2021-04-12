/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXTrimScrubberLayoutHelper : NSObject {

	BOOL _needsUpdate;
	double _filmstripScale;
	double _pivotAnchor;
	SCD_Struct_PX8 _duration;
	CGRect _viewportFrame;
	UIEdgeInsets _horizontalTimelineInset;
	CGRect _filmstripFrame;
	CGRect _filmstripFrameInScrubberSpace;
	CGRect _visibleFrameInFilmstripSpace;

}

@property (assign,nonatomic) CGRect filmstripFrame;                             //@synthesize filmstripFrame=_filmstripFrame - In the implementation block
@property (assign,nonatomic) CGRect filmstripFrameInScrubberSpace;              //@synthesize filmstripFrameInScrubberSpace=_filmstripFrameInScrubberSpace - In the implementation block
@property (assign,nonatomic) CGRect visibleFrameInFilmstripSpace;               //@synthesize visibleFrameInFilmstripSpace=_visibleFrameInFilmstripSpace - In the implementation block
@property (assign,nonatomic) BOOL needsUpdate;                                  //@synthesize needsUpdate=_needsUpdate - In the implementation block
@property (nonatomic,readonly) CGRect durationInsetFilmstripFrame; 
@property (assign,nonatomic) SCD_Struct_PX8 duration;                           //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) CGRect viewportFrame;                              //@synthesize viewportFrame=_viewportFrame - In the implementation block
@property (assign,nonatomic) double filmstripScale;                             //@synthesize filmstripScale=_filmstripScale - In the implementation block
@property (assign,nonatomic) double pivotAnchor;                                //@synthesize pivotAnchor=_pivotAnchor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets horizontalTimelineInset;              //@synthesize horizontalTimelineInset=_horizontalTimelineInset - In the implementation block
-(void)setNeedsUpdate:(BOOL)arg1 ;
-(BOOL)needsUpdate;
-(CGRect)viewportFrame;
-(void)setDuration:(SCD_Struct_PX8)arg1 ;
-(id)init;
-(void)_updateIfNeeded;
-(void)setFilmstripScale:(double)arg1 ;
-(void)setPivotAnchor:(double)arg1 ;
-(CGRect)filmstripFrame;
-(CGRect)filmstripFrameInScrubberSpace;
-(CGRect)visibleFrameInFilmstripSpace;
-(double)offsetInScrubberSpaceForTime:(SCD_Struct_PX8)arg1 ;
-(double)offsetInScrubberSpaceForTime:(SCD_Struct_PX8)arg1 fallbackAnchor:(double)arg2 ;
-(double)offsetInViewportSpaceForTime:(SCD_Struct_PX8)arg1 ;
-(double)offsetInViewportSpaceForTime:(SCD_Struct_PX8)arg1 fallbackAnchor:(double)arg2 ;
-(SCD_Struct_PX8)timeForOffsetInScrubberSpace:(double)arg1 ;
-(CGRect)durationInsetFilmstripFrame;
-(double)filmstripScale;
-(double)pivotAnchor;
-(UIEdgeInsets)horizontalTimelineInset;
-(void)setHorizontalTimelineInset:(UIEdgeInsets)arg1 ;
-(void)setFilmstripFrame:(CGRect)arg1 ;
-(void)setFilmstripFrameInScrubberSpace:(CGRect)arg1 ;
-(void)setVisibleFrameInFilmstripSpace:(CGRect)arg1 ;
-(SCD_Struct_PX8)duration;
-(void)setViewportFrame:(CGRect)arg1 ;
@end

