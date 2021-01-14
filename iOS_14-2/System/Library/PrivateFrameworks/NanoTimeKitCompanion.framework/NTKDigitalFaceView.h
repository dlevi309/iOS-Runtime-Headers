/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKFaceView.h>

@class NTKDigitalTimeLabel;

@interface NTKDigitalFaceView : NTKFaceView {

	long long _viewMode;

}

@property (nonatomic,readonly) NTKDigitalTimeLabel * timeView; 
@property (assign,nonatomic) long long viewMode;                            //@synthesize viewMode=_viewMode - In the implementation block
-(void)setViewMode:(long long)arg1 ;
-(void)layoutSubviews;
-(long long)viewMode;
-(void)_loadSnapshotContentViews;
-(void)_unloadSnapshotContentViews;
-(void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(void)setViewMode:(long long)arg1 updateTimeViewStyle:(BOOL)arg2 ;
-(id)_digitalTimeLabelStyleFromViewMode:(long long)arg1 faceBounds:(CGRect)arg2 ;
-(unsigned long long)_timeLabelOptions;
-(void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3 ;
-(void)_cleanupAfterZoom;
-(BOOL)_timeLabelUsesLegibility;
-(void)invalidateDigitalTimeLabelStyle;
-(void)_createTimeViewIfNecessary;
@end

