/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) short type; 
@property (nonatomic,readonly) float interpolationFractionComplete; 
+(void)initialize;
+(BOOL)containsFilterRequiringFaceLandmarks:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(short)type;
-(NSArray *)filters;
-(void)setFilters:(NSArray *)arg1 ;
-(id)initWithFilters:(id)arg1 originalOutputFilter:(id)arg2 ;
-(int)prepareForRenderingWithInputVideoFormat:(id)arg1 ;
-(BOOL)requiresDepthMap;
-(BOOL)requiresFaceLandmarks;
-(CIFilter *)originalOutputFilter;
-(int)depthTypeForFilter:(id)arg1 ;
-(float)interpolationFractionComplete;
-(void)updateByInterpolatingFromParameters:(id)arg1 toParameters:(id)arg2 withFractionComplete:(float)arg3 ;
-(BOOL)shouldInterpolateFromParameters:(id)arg1 toParameters:(id)arg2 ;
-(void)_ensureResourceRequirementsForFilters:(id)arg1 outputRequiresFaceLandmarks:(BOOL*)arg2 outputRequiresDepthMap:(BOOL*)arg3 ;
-(void)setOriginalOutputFilter:(CIFilter *)arg1 ;
@end

