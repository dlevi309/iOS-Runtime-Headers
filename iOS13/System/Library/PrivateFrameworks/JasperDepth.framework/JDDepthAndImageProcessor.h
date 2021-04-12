/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
*/


#import <JasperDepth/JasperDepth-Structs.h>
@class JDCameraCalibrationData;

@interface JDDepthAndImageProcessor : NSObject {

	TimeSync* _sync;
	JDCameraCalibrationData* _imageCalib;
	BOOL _pointCloudFiltering;
	BOOL _retainImagesRemovedFromQueue;
	JDCameraCalibrationData* _imageCalibrationData;

}

@property (nonatomic,readonly) JDCameraCalibrationData * imageCalibrationData;              //@synthesize imageCalibrationData=_imageCalibrationData - In the implementation block
@property (assign) int numberOfPointCloudsPerImage; 
@property (assign) BOOL pointCloudFiltering;                                                //@synthesize pointCloudFiltering=_pointCloudFiltering - In the implementation block
@property (assign) BOOL retainImagesRemovedFromQueue;                                       //@synthesize retainImagesRemovedFromQueue=_retainImagesRemovedFromQueue - In the implementation block
-(void)setNumberOfPointCloudsPerImage:(int)arg1 ;
-(id)initWithImageCameraCalibration:(id)arg1 ;
-(void)setRetainImagesRemovedFromQueue:(BOOL)arg1 ;
-(id)pushImage:(id)arg1 ;
-(id)pushPointCloud:(id)arg1 ;
-(int)numberOfPointCloudsPerImage;
-(id)checkSyncResults:(PushResults*)arg1 ;
-(id)purgeAllQueuedImages;
-(JDCameraCalibrationData *)imageCalibrationData;
-(BOOL)pointCloudFiltering;
-(void)setPointCloudFiltering:(BOOL)arg1 ;
-(BOOL)retainImagesRemovedFromQueue;
@end

