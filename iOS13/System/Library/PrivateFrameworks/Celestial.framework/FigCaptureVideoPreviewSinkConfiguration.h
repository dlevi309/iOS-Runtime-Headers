/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureSinkConfiguration.h>

@class NSArray;

@interface FigCaptureVideoPreviewSinkConfiguration : FigCaptureSinkConfiguration {

	BOOL _depthDataDeliveryEnabled;
	BOOL _filterRenderingEnabled;
	NSArray* _filters;
	float _simulatedAperture;
	float _portraitLightingEffectStrength;
	BOOL _primaryCaptureRectModificationEnabled;
	double _primaryCaptureRectAspectRatio;
	CGPoint _primaryCaptureRectCenter;
	long long _primaryCaptureRectUniqueID;

}

@property (assign,nonatomic) BOOL depthDataDeliveryEnabled;                           //@synthesize depthDataDeliveryEnabled=_depthDataDeliveryEnabled - In the implementation block
@property (assign,nonatomic) BOOL filterRenderingEnabled;                             //@synthesize filterRenderingEnabled=_filterRenderingEnabled - In the implementation block
@property (nonatomic,copy) NSArray * filters;                                         //@synthesize filters=_filters - In the implementation block
@property (assign,nonatomic) float simulatedAperture;                                 //@synthesize simulatedAperture=_simulatedAperture - In the implementation block
@property (assign,nonatomic) float portraitLightingEffectStrength;                    //@synthesize portraitLightingEffectStrength=_portraitLightingEffectStrength - In the implementation block
@property (assign,nonatomic) BOOL primaryCaptureRectModificationEnabled;              //@synthesize primaryCaptureRectModificationEnabled=_primaryCaptureRectModificationEnabled - In the implementation block
@property (assign,nonatomic) double primaryCaptureRectAspectRatio;                    //@synthesize primaryCaptureRectAspectRatio=_primaryCaptureRectAspectRatio - In the implementation block
@property (assign,nonatomic) CGPoint primaryCaptureRectCenter;                        //@synthesize primaryCaptureRectCenter=_primaryCaptureRectCenter - In the implementation block
@property (assign,nonatomic) long long primaryCaptureRectUniqueID;                    //@synthesize primaryCaptureRectUniqueID=_primaryCaptureRectUniqueID - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)filters;
-(float)simulatedAperture;
-(void)setFilters:(NSArray *)arg1 ;
-(BOOL)depthDataDeliveryEnabled;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(double)primaryCaptureRectAspectRatio;
-(long long)primaryCaptureRectUniqueID;
-(void)setFilterRenderingEnabled:(BOOL)arg1 ;
-(void)setSimulatedAperture:(float)arg1 ;
-(float)portraitLightingEffectStrength;
-(void)setPortraitLightingEffectStrength:(float)arg1 ;
-(void)setPrimaryCaptureRectModificationEnabled:(BOOL)arg1 ;
-(void)setPrimaryCaptureRectCenter:(CGPoint)arg1 ;
-(void)setPrimaryCaptureRectAspectRatio:(double)arg1 ;
-(void)setPrimaryCaptureRectUniqueID:(long long)arg1 ;
-(BOOL)filterRenderingEnabled;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(int)sinkType;
-(CGPoint)primaryCaptureRectCenter;
-(BOOL)primaryCaptureRectModificationEnabled;
@end

