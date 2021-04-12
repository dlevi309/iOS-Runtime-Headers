/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMIMotionDetector.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface HMIDenseOpticalFlowMotionDetector : HMFObject <HMIMotionDetector, HMFLogging> {

	NSMutableArray* _frames;
	NSMutableArray* _quantizedFrames;
	NSMutableDictionary* _minRows;
	NSMutableDictionary* _maxRows;
	NSMutableDictionary* _minCols;
	NSMutableDictionary* _maxCols;
	CGSize _size;

}

@property (readonly) CGSize size;                                   //@synthesize size=_size - In the implementation block
@property (readonly) NSMutableArray * frames;                       //@synthesize frames=_frames - In the implementation block
@property (readonly) NSMutableArray * quantizedFrames;              //@synthesize quantizedFrames=_quantizedFrames - In the implementation block
@property (retain) NSMutableDictionary * minRows;                   //@synthesize minRows=_minRows - In the implementation block
@property (retain) NSMutableDictionary * maxRows;                   //@synthesize maxRows=_maxRows - In the implementation block
@property (retain) NSMutableDictionary * minCols;                   //@synthesize minCols=_minCols - In the implementation block
@property (retain) NSMutableDictionary * maxCols;                   //@synthesize maxCols=_maxCols - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(CGSize)size;
-(id)initWithSize:(CGSize)arg1 ;
-(NSMutableArray *)frames;
-(void)setup;
-(void)appendFramePixelBuffer:(CVBufferRef)arg1 atTime:(SCD_Struct_HM4)arg2 ;
-(id)detectWithGlobalMotionScore:(float*)arg1 ;
-(float)computeFlowMagnitudeMatrixFromOriginal:(CVBufferRef)arg1 flowArray:(float*)arg2 error:(id*)arg3 ;
-(NSMutableArray *)quantizedFrames;
-(BOOL)quantizedAndBinarizeFrame:(float*)arg1 quantizedFrames:(id)arg2 ;
-(long long)connectedComponentsQuantizedFrames:(id)arg1 ;
-(void)unionTheRegoins;
-(NSMutableDictionary *)minRows;
-(CGRect)makeRawCropRect:(id)arg1 ;
-(id)computeOpticalFlow:(CVBufferRef)arg1 with:(CVBufferRef)arg2 globalMotionScore:(float*)arg3 ;
-(NSMutableDictionary *)maxCols;
-(NSMutableDictionary *)minCols;
-(NSMutableDictionary *)maxRows;
-(void)setMinRows:(NSMutableDictionary *)arg1 ;
-(void)setMaxRows:(NSMutableDictionary *)arg1 ;
-(void)setMinCols:(NSMutableDictionary *)arg1 ;
-(void)setMaxCols:(NSMutableDictionary *)arg1 ;
@end

