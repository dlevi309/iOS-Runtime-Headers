/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureSinkConfiguration.h>

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
-(BOOL)depthDataDeliveryEnabled;
-(id)initWithXPCEncoding:(id)arg1 ;
-(long long)primaryCaptureRectUniqueID;
-(id)copyXPCEncoding;
-(double)primaryCaptureRectAspectRatio;
-(void)setFilters:(NSArray *)arg1 ;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(id)init;
-(CGPoint)primaryCaptureRectCenter;
-(void)setFilterRenderingEnabled:(BOOL)arg1 ;
-(BOOL)filterRenderingEnabled;
-(NSArray *)filters;
-(void)setPrimaryCaptureRectUniqueID:(long long)arg1 ;
-(float)simulatedAperture;
-(void)setPortraitLightingEffectStrength:(float)arg1 ;
-(id)description;
-(float)portraitLightingEffectStrength;
-(void)setPrimaryCaptureRectAspectRatio:(double)arg1 ;
-(void)setPrimaryCaptureRectCenter:(CGPoint)arg1 ;
-(void)setPrimaryCaptureRectModificationEnabled:(BOOL)arg1 ;
-(BOOL)primaryCaptureRectModificationEnabled;
-(void)setSimulatedAperture:(float)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)sinkType;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

