/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(JDTimestampedImage *)image;
-(void)setImage:(JDTimestampedImage *)arg1 ;
-(JDTimestampedPointCloud *)pointCloud;
-(void)setPointCloud:(JDTimestampedPointCloud *)arg1 ;
-(NSArray *)originalPointClouds;
-(void)setOriginalPointClouds:(NSArray *)arg1 ;
@end

