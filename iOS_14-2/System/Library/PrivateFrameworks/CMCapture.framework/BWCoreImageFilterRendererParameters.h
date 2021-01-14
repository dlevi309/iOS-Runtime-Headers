/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWFilterRendererParameters.h>

@class NSArray, CIFilter, NSString;

@interface BWCoreImageFilterRendererParameters : NSObject <BWFilterRendererParameters> {

	NSArray* _filters;
	CIFilter* _originalOutputFilter;
	BOOL _requiresFaceLandmarks;
	BOOL _requiresDepthMap;

}

@property (nonatomic,copy) NSArray * filters;                                    //@synthesize filters=_filters - In the implementation block
@property (nonatomic,retain) CIFilter * originalOutputFilter;                    //@synthesize originalOutputFilter=_originalOutputFilter - In the implementation block
@property (nonatomic,readonly) BOOL requiresDepthMap;                            //@synthesize requiresDepthMap=_requiresDepthMap - In the implementation block
@property (nonatomic,readonly) BOOL requiresFaceLandmarks;                       //@synthesize requiresFaceLandmarks=_requiresFaceLandmarks - In the implementation block
@property (nonatomic,readonly) short type; 
@property (nonatomic,readonly) float interpolationFractionComplete; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)containsFilterRequiringFaceLandmarks:(id)arg1 ;
-(void)setFilters:(NSArray *)arg1 ;
-(NSArray *)filters;
-(float)interpolationFractionComplete;
-(int)prepareForRenderingWithInputVideoFormat:(id)arg1 ;
-(void)updateByInterpolatingFromParameters:(id)arg1 toParameters:(id)arg2 withFractionComplete:(float)arg3 ;
-(BOOL)shouldInterpolateFromParameters:(id)arg1 toParameters:(id)arg2 ;
-(short)type;
-(id)initWithFilters:(id)arg1 originalOutputFilter:(id)arg2 ;
-(void)_ensureResourceRequirementsForFilters:(id)arg1 outputRequiresFaceLandmarks:(BOOL*)arg2 outputRequiresDepthMap:(BOOL*)arg3 ;
-(int)depthTypeForFilter:(id)arg1 ;
-(CIFilter *)originalOutputFilter;
-(void)setOriginalOutputFilter:(CIFilter *)arg1 ;
-(BOOL)requiresFaceLandmarks;
-(BOOL)requiresDepthMap;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

