/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
*/


@class JDTimestampedImage, JDTimestampedPointCloud, NSArray;

@interface JDMatchedDepthAndImage : NSObject {

	JDTimestampedImage* _image;
	JDTimestampedPointCloud* _pointCloud;
	NSArray* _originalPointClouds;

}

@property (nonatomic,retain) JDTimestampedImage * image;                        //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) JDTimestampedPointCloud * pointCloud;              //@synthesize pointCloud=_pointCloud - In the implementation block
@property (nonatomic,retain) NSArray * originalPointClouds;                     //@synthesize originalPointClouds=_originalPointClouds - In the implementation block
-(void)setImage:(JDTimestampedImage *)arg1 ;
-(JDTimestampedImage *)image;
-(JDTimestampedPointCloud *)pointCloud;
-(void)setPointCloud:(JDTimestampedPointCloud *)arg1 ;
-(NSArray *)originalPointClouds;
-(void)setOriginalPointClouds:(NSArray *)arg1 ;
@end

