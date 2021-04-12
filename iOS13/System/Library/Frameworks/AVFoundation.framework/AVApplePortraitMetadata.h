/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
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
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)faceOrientation;
-(float)portraitLightingEffectStrength;
-(float)apertureFocalRatio;
-(float)minimumApertureFocalRatio;
-(float)maximumApertureFocalRatio;
-(float)luminanceNoiseAmplitude;
-(NSData *)faceObservationsData;
-(NSIndexSet *)indexesOfShallowDepthOfFieldObservations;
-(CGRect)focusRectangle;
-(id)initWithInternal:(id)arg1 ;
-(id)initWithPortraitMetadataDictionary:(id)arg1 ;
@end

