/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@interface JFXCapturePreviewFrameStats : NSObject {

	double _frameTimes[6];
	BOOL _dropped;

}

@property (nonatomic,readonly) double* times; 
@property (assign,nonatomic) BOOL dropped;                 //@synthesize dropped=_dropped - In the implementation block
-(double*)times;
-(void)printStats;
-(BOOL)dropped;
-(void)setDropped:(BOOL)arg1 ;
-(void)printLabels;
@end

