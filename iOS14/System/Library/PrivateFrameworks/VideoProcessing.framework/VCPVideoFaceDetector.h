/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoAnalyzer.h>

@class NSMutableDictionary, NSDictionary;

@interface VCPVideoFaceDetector : VCPVideoAnalyzer {

	int _angle;
	SCD_Struct_VC6 _timeLastDetection;
	NSMutableDictionary* _activeFaces;
	NSDictionary* _results;

}
+(id)faceDetectorWithTransform:(CGAffineTransform)arg1 withExistingFaceprints:(id)arg2 frameStats:(id)arg3 tracking:(BOOL)arg4 faceDominated:(BOOL)arg5 cancel:(/*^block*/id)arg6 ;
-(id)results;
-(id)faceRanges;
@end

