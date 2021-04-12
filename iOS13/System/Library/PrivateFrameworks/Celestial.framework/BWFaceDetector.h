/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@protocol BWFaceDetector <NSObject>
@property (readonly) float secondsSinceLastFaceDetected; 
@required
-(int)getFaceRects:(CGRect*)arg1 maxCount:(int)arg2 forPTS:(SCD_Struct_BW2)arg3;
-(float)secondsSinceLastFaceDetected;

@end

