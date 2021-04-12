/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
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
-(id)init;
-(void)dealloc;
-(int)version;
-(void)setVersion:(int)arg1 ;
-(int)faceOrientation;
-(void)setFaceOrientation:(int)arg1 ;
-(float)portraitLightingEffectStrength;
-(void)setPortraitLightingEffectStrength:(float)arg1 ;
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
@end

