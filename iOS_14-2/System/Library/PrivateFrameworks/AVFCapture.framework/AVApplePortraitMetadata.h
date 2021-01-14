/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AVApplePortraitMetadataInternal, NSData, NSIndexSet;

@interface AVApplePortraitMetadata : NSObject <NSSecureCoding> {

	AVApplePortraitMetadataInternal* _internal;

}

@property (readonly) float apertureFocalRatio; 
@property (readonly) float minimumApertureFocalRatio; 
@property (readonly) float maximumApertureFocalRatio; 
@property (readonly) float portraitLightingEffectStrength; 
@property (readonly) float luminanceNoiseAmplitude; 
@property (readonly) int faceOrientation; 
@property (readonly) NSData * faceObservationsData; 
@property (readonly) NSIndexSet * indexesOfShallowDepthOfFieldObservations; 
@property (readonly) CGRect focusRectangle; 
@property (readonly) unsigned SDOFRenderingVersion; 
+(BOOL)supportsSecureCoding;
-(id)initWithInternal:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(float)apertureFocalRatio;
-(float)minimumApertureFocalRatio;
-(float)maximumApertureFocalRatio;
-(float)luminanceNoiseAmplitude;
-(NSData *)faceObservationsData;
-(NSIndexSet *)indexesOfShallowDepthOfFieldObservations;
-(CGRect)focusRectangle;
-(unsigned)SDOFRenderingVersion;
-(float)portraitLightingEffectStrength;
-(id)initWithCoder:(id)arg1 ;
-(int)faceOrientation;
-(id)initWithPortraitMetadataDictionary:(id)arg1 ;
-(void)dealloc;
@end

