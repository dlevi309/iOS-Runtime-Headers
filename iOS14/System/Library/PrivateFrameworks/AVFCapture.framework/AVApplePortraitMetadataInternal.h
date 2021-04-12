/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class NSData, NSIndexSet;

@interface AVApplePortraitMetadataInternal : NSObject {

	int version;
	float apertureFocalRatio;
	float minimumApertureFocalRatio;
	float maximumApertureFocalRatio;
	float portraitLightingEffectStrength;
	float luminanceNoiseAmplitude;
	int faceOrientation;
	NSData* faceObservationsData;
	NSIndexSet* indexesOfShallowDepthOfFieldObservations;
	CGRect focusRectangle;
	unsigned SDOFRenderingVersion;

}

@property (assign,nonatomic) int version; 
@property (assign,nonatomic) float apertureFocalRatio; 
@property (assign,nonatomic) float minimumApertureFocalRatio; 
@property (assign,nonatomic) float maximumApertureFocalRatio; 
@property (assign,nonatomic) float portraitLightingEffectStrength; 
@property (assign,nonatomic) float luminanceNoiseAmplitude; 
@property (assign,nonatomic) int faceOrientation; 
@property (nonatomic,retain) NSData * faceObservationsData; 
@property (nonatomic,retain) NSIndexSet * indexesOfShallowDepthOfFieldObservations; 
@property (assign,nonatomic) CGRect focusRectangle; 
@property (assign,nonatomic) unsigned SDOFRenderingVersion; 
-(id)init;
-(float)apertureFocalRatio;
-(void)setApertureFocalRatio:(float)arg1 ;
-(float)minimumApertureFocalRatio;
-(void)setMinimumApertureFocalRatio:(float)arg1 ;
-(float)maximumApertureFocalRatio;
-(void)setMaximumApertureFocalRatio:(float)arg1 ;
-(float)luminanceNoiseAmplitude;
-(void)setLuminanceNoiseAmplitude:(float)arg1 ;
-(NSData *)faceObservationsData;
-(void)setFaceObservationsData:(NSData *)arg1 ;
-(NSIndexSet *)indexesOfShallowDepthOfFieldObservations;
-(void)setIndexesOfShallowDepthOfFieldObservations:(NSIndexSet *)arg1 ;
-(CGRect)focusRectangle;
-(void)setFocusRectangle:(CGRect)arg1 ;
-(unsigned)SDOFRenderingVersion;
-(void)setSDOFRenderingVersion:(unsigned)arg1 ;
-(void)setPortraitLightingEffectStrength:(float)arg1 ;
-(float)portraitLightingEffectStrength;
-(int)faceOrientation;
-(void)setFaceOrientation:(int)arg1 ;
-(void)setVersion:(int)arg1 ;
-(int)version;
-(void)dealloc;
@end

