/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/


@protocol NURenderer, NUSurfaceStorage, OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_group;
#import <PhotoImaging/PhotoImaging-Structs.h>
@class NSObject, NSMutableArray, NSDictionary, NSError;

@interface PILongExposureAccumulator : NSObject {

	SCD_Struct_PI5 _pixelSize;
	id<NURenderer> _renderer;
	id<NUSurfaceStorage> _temporaryDestinationStorage;
	id<NUSurfaceStorage> _averageAccumulationStorage;
	id<NUSurfaceStorage> _minimumAccumulationStorage;
	id<NUSurfaceStorage> _maximumAccumulationStorage;
	long long _frameCount;
	NSObject*<OS_dispatch_queue> _stateQueue;
	NSObject*<OS_dispatch_queue> _accumQueue;
	NSObject*<OS_dispatch_semaphore> _accumSemaphore;
	NSObject*<OS_dispatch_semaphore> _readySemaphore;
	NSObject*<OS_dispatch_group> _doneGroup;
	NSMutableArray* _inputFrames;
	BOOL _finished;
	NSDictionary* _imageOptions;
	NSError* __accumError;

}

@property (retain) NSError * _accumError;                  //@synthesize _accumError=__accumError - In the implementation block
@property (readonly) BOOL isReadyForMoreData; 
-(void)dealloc;
-(void)cancel;
-(void)_start;
-(id)workingColorSpace;
-(BOOL)start:(out id*)arg1 ;
-(void)markAsFinished;
-(void)_markAsFinished;
-(void)waitUntilDone;
-(id)initWithSize:(SCD_Struct_PI5)arg1 renderer:(id)arg2 ;
-(BOOL)_initializeStorage:(id)arg1 image:(id)arg2 error:(out id*)arg3 ;
-(BOOL)isReadyForMoreData;
-(BOOL)_isReadyForMoreData;
-(BOOL)accumulate:(id)arg1 error:(out id*)arg2 ;
-(void)_appendInputFrame:(id)arg1 ;
-(id)nextInputFrame;
-(id)_nextInputFrame;
-(void)_initializeAccumulation;
-(BOOL)_initializeAccumulation:(out id*)arg1 ;
-(void)_accumulate:(id)arg1 ;
-(BOOL)_accumulate:(id)arg1 error:(out id*)arg2 ;
-(BOOL)writeLongExposureImage:(id)arg1 UTI:(id)arg2 colorSpace:(id)arg3 error:(out id*)arg4 ;
-(BOOL)writeMaskImage:(id)arg1 UTI:(id)arg2 error:(out id*)arg3 ;
-(id)_dynamismMapWithMinImage:(id)arg1 maxImage:(id)arg2 extent:(SCD_Struct_PI6)arg3 ;
-(BOOL)_exportOutputImage:(id)arg1 format:(int)arg2 colorSpace:(CGColorSpaceRef)arg3 toURL:(id)arg4 uti:(id)arg5 error:(out id*)arg6 ;
-(NSError *)_accumError;
-(void)set_accumError:(NSError *)arg1 ;
@end

