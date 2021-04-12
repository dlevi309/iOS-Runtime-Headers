/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)capacity;
-(void)blacken;
-(void)resize:(int)arg1 ;
-(id)initWithCapacity:(int)arg1 ;
-(void)replacePointsInRange:(NSRange)arg1 withPointsFrom:(id)arg2 range:(NSRange)arg3 ;
-(unsigned*)mutableFlags;
-(char*)mutableEchoIds;
-(char*)mutableSpotIds;
-(char*)mutableBankIds;
-(float*)mutableSignalToNoiseRatios;
-(float*)mutableConfidences;
-(float*)mutableIntensities;
-(*)mutablePoints;
-(CGPoint*)mutableUndistortedCameraPixels;
-(float*)mutableEuclideanDistances;
-(CGPoint*)mutableCameraPixels;
-(void)appendPointsFrom:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithCapacity:(int)arg1 storage:(CVBufferRef)arg2 ;
-(void)appendPointsFrom:(id)arg1 ;
@end

