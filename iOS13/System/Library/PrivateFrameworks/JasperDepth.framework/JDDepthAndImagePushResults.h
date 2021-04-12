/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
*/


@class JDMatchedDepthAndImage, NSArray;

@interface JDDepthAndImagePushResults : NSObject {

	JDMatchedDepthAndImage* _match;
	NSArray* _droppedImages;

}

@property (nonatomic,retain) JDMatchedDepthAndImage * match;              //@synthesize match=_match - In the implementation block
@property (nonatomic,retain) NSArray * droppedImages;                     //@synthesize droppedImages=_droppedImages - In the implementation block
-(JDMatchedDepthAndImage *)match;
-(void)setMatch:(JDMatchedDepthAndImage *)arg1 ;
-(NSArray *)droppedImages;
-(void)setDroppedImages:(NSArray *)arg1 ;
@end

