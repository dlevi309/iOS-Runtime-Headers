/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARAnchor.h>

@protocol MTLTexture;
@class NSData, NSUUID;

@interface AREnvironmentProbeAnchor : ARAnchor {

	float _opaquePixelPercentage;
	id<MTLTexture> _environmentTexture;
	NSData* _colorHistogram;
	NSUUID* _trackedPlaneIdentifier;
	 _extent;

}

@property (nonatomic,retain) id<MTLTexture> environmentTexture;              //@synthesize environmentTexture=_environmentTexture - In the implementation block
@property (nonatomic,retain) NSData * colorHistogram;                        //@synthesize colorHistogram=_colorHistogram - In the implementation block
@property (assign,nonatomic) float opaquePixelPercentage;                    //@synthesize opaquePixelPercentage=_opaquePixelPercentage - In the implementation block
@property (nonatomic,retain) NSUUID * trackedPlaneIdentifier;                //@synthesize trackedPlaneIdentifier=_trackedPlaneIdentifier - In the implementation block
@property (nonatomic,readonly)  extent;                                      //@synthesize extent=_extent - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTransform:(SCD_Struct_AR1)arg1 ;
-(id)initWithAnchor:(id)arg1 ;
-()extent;
-(NSData *)colorHistogram;
-(id)initWithName:(id)arg1 transform:(SCD_Struct_AR1)arg2 ;
-(id)initWithIdentifier:(id)arg1 transform:(SCD_Struct_AR1)arg2 ;
-(id)initWithIdentifier:(id)arg1 transform:(SCD_Struct_AR1)arg2 ;
-(void)setTrackedPlaneIdentifier:(NSUUID *)arg1 ;
-(id<MTLTexture>)environmentTexture;
-(NSUUID *)trackedPlaneIdentifier;
-(float)opaquePixelPercentage;
-(id)initWithTransform:(SCD_Struct_AR1)arg1 ;
-(id)initWithName:(id)arg1 transform:(SCD_Struct_AR1)arg2 ;
-(id)initWithIdentifier:(id)arg1 onPlane:(ARTexturedPlane*)arg2 ;
-(void)setEnvironmentTexture:(id<MTLTexture>)arg1 ;
-(void)setColorHistogram:(NSData *)arg1 ;
-(void)setOpaquePixelPercentage:(float)arg1 ;
@end

