/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


#import <Memories/Memories-Structs.h>
@class CIDetector, NSMutableDictionary;

@interface MiroAnalysisImageHelpers : NSObject {

	CIDetector* _faceDetector;
	BOOL _faceTrackingEnabled;
	SCD_Struct_PM5 _recordingStartTime;
	NSMutableDictionary* _currentFaceRangesKeyedByFaceID;
	unsigned long long _exifOrientation;
	NSMutableDictionary* _shotTypeToSampleCountMap;
	long long _projectNaturalFrameRate;

}

@property (assign,nonatomic) long long projectNaturalFrameRate;              //@synthesize projectNaturalFrameRate=_projectNaturalFrameRate - In the implementation block
+(long long)imageOrientationForEXIFOrientation:(unsigned long long)arg1 ;
+(unsigned long long)exifOrientationForUIImageOrientation:(long long)arg1 ;
+(unsigned long long)exifOrientationForVideoTrack:(id)arg1 ;
-(id)init;
-(void)setProjectNaturalFrameRate:(long long)arg1 ;
-(long long)projectNaturalFrameRate;
-(void)processAVAsset:(id)arg1 options:(unsigned long long)arg2 progressHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(long long)_shotTypeForFaceBoundsArray:(id)arg1 ;
-(long long)_positionForFaceBounds:(CGRect)arg1 ;
-(void)_updateFaceRangeWithFaceID:(long long)arg1 detectionTime:(SCD_Struct_PM5)arg2 facePosition:(long long)arg3 flags:(unsigned long long)arg4 faceBounds:(CGRect)arg5 ;
-(void)_updateShotTypeMapWithFaceBoundsArray:(id)arg1 ;
-(void)_outputFaceRangesWithRemovedFaceIDs:(id)arg1 outputtedFaceRanges:(id*)arg2 ;
-(long long)_primaryShotType;
-(id)_makeColorAnalysisDictionary:(id)arg1 forImageBounds:(CGRect)arg2 ;
-(id)_analyzeColorsInImage:(id)arg1 ;
-(BOOL)_startOutputtingFaceRangesWithStartTime:(SCD_Struct_PM5)arg1 orientation:(unsigned long long)arg2 ;
-(id)_analyzeColorsInVideoFrame:(CGImageRef)arg1 withOrientation:(unsigned long long)arg2 ;
-(BOOL)_processOutputtingFaceRangeWithCGImage:(CGImageRef)arg1 detectionTime:(SCD_Struct_PM5)arg2 faceRanges:(id*)arg3 ;
-(void)_stopOutputtingFaceRangesWithEndTime:(SCD_Struct_PM5)arg1 lastFaceRanges:(id*)arg2 ;
-(void)processUIImage:(id)arg1 options:(unsigned long long)arg2 progressHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

