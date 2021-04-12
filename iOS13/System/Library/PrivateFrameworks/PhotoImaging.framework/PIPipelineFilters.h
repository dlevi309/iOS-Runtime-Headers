/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/


@interface PIPipelineFilters : NSObject
+(id)preGeometryFilter;
+(id)stripAllTimeAdjustmentsFilter;
+(id)autoloopStabilizedVideoFilter;
+(id)overcaptureSourceFilter;
+(id)noMuteFilter;
+(id)noTrimFilter;
+(id)autoCropFilter;
+(id)exifOrientationAndCropStraightenOnly;
+(id)rawFaceBalanceFilter;
+(id)rawSourceFilterIncludingOrientation;
+(id)sourceFilterNoOrientation;
+(id)sushiLevel1Filter;
+(id)noRedEyeFilter;
+(id)noCropFilter;
+(id)iosCropToolFilter;
+(id)noGeometryFilter;
+(id)perspectiveStraightenWithoutCropFilter;
+(id)postGeometryFilter;
+(id)inputToCropFilter;
+(id)stopAtTagIncludeGeometryFilter:(id)arg1 ;
+(id)stopAtTagIncludeOrientationFilter:(id)arg1 ;
+(id)applyOrientationFilter;
+(id)primarySourceFilter;
+(id)spatialOvercaptureVideoSourceFilter;
+(id)socPseudoColorFilter;
@end

