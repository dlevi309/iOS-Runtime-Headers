/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/


#import <CoreImage/CoreImage-Structs.h>
@class NSMutableDictionary, NSMutableArray, FCRFaceDetector;

@interface CIBurstImageFaceAnalysisContext : NSObject {

	NSMutableDictionary* curConfig;
	NSMutableDictionary* faceIdMapping;
	NSMutableDictionary* renameMapping;
	int faceIdCounter;
	NSMutableArray* faceInfoArray;
	int numFramesSinceFullFaceCore;
	int numFramesNoFaces;
	FCRFaceDetector* faceDetector;
	NSMutableArray* faceTimestampArray;
	double latestImageTimestamp;
	int lastFaceIndex;
	BOOL forceFaceDetectionEnable;
	int _version;
	double timeBlinkDetectionDone;
	double timeFaceDetectionDone;
	double latestFaceTimestamp;

}

@property (assign) double timeFaceDetectionDone; 
@property (assign) double timeBlinkDetectionDone; 
@property (assign) BOOL forceFaceDetectionEnable; 
@property (assign) double latestFaceTimestamp; 
@property (assign) int version;                                //@synthesize version=_version - In the implementation block
-(id)initWithVersion:(id)arg1 ;
-(CGRect)padRoiRect:(CGRect)arg1 paddingX:(float)arg2 paddingY:(float)arg3 ;
-(void)setupFaceDetector;
-(CGRect)calculateFaceCoreROI:(id)arg1 imageStat:(id)arg2 needFaceCore:(BOOL*)arg3 ;
-(id)findOverlappingFaceStat:(CGRect)arg1 imageStat:(id)arg2 ;
-(void)addFaceToArray:(id)arg1 ;
-(int)findFacesInImage:(id)arg1 imageStat:(id)arg2 ;
-(void)calculateFaceFocusInImage:(id)arg1 imageStat:(id)arg2 ;
-(void)calcFaceScores:(id)arg1 ;
-(void)adjustFaceIdsForImageStat:(id)arg1 ;
-(void)extractFacesFromMetadata:(id)arg1 ;
-(void)addFacesToImageStat:(id)arg1 imageSize:(CGSize)arg2 ;
-(void)dumpFaceInfoArray;
-(double)timeBlinkDetectionDone;
-(void)setTimeBlinkDetectionDone:(double)arg1 ;
-(double)timeFaceDetectionDone;
-(void)setTimeFaceDetectionDone:(double)arg1 ;
-(BOOL)forceFaceDetectionEnable;
-(void)setForceFaceDetectionEnable:(BOOL)arg1 ;
-(double)latestFaceTimestamp;
-(void)setLatestFaceTimestamp:(double)arg1 ;
-(void)setVersion:(int)arg1 ;
-(int)version;
-(void)dealloc;
@end
