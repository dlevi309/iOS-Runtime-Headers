/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/

#import <AppleDepth/AppleDepth-Structs.h>
#import <AppleDepth/ADJasperPointCloud.h>

@interface ADMutableJasperPointCloud : ADJasperPointCloud

@property (readonly) int capacity; 
@property (readonly) float* mutableEuclideanDistances; 
@property (readonly) CGPoint* mutableCameraPixels; 
@property (readonly) CGPoint* mutableUndistortedCameraPixels; 
@property (readonly) * mutablePoints; 
@property (readonly) float* mutableIntensities; 
@property (readonly) float* mutableConfidences; 
@property (readonly) float* mutableSignalToNoiseRatios; 
@property (readonly) char* mutableBankIds; 
@property (readonly) char* mutableSpotIds; 
@property (readonly) char* mutableEchoIds; 
@property (readonly) unsigned* mutableFlags; 
-(id)initWithCapacity:(int)arg1 ;
-(int)capacity;
-(void)resize:(int)arg1 ;
-(void)blacken;
-(*)mutablePoints;
-(CGPoint*)mutableCameraPixels;
-(CGPoint*)mutableUndistortedCameraPixels;
-(char*)mutableEchoIds;
-(char*)mutableBankIds;
-(char*)mutableSpotIds;
-(float*)mutableConfidences;
-(float*)mutableEuclideanDistances;
-(float*)mutableIntensities;
-(float*)mutableSignalToNoiseRatios;
-(unsigned*)mutableFlags;
-(void)appendPointsFrom:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithCapacity:(int)arg1 storage:(CVBufferRef)arg2 ;
-(void)appendPointsFrom:(id)arg1 ;
-(void)replacePointsInRange:(NSRange)arg1 withPointsFrom:(id)arg2 range:(NSRange)arg3 ;
@end

