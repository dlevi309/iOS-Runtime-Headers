/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWFilterRendererParameters.h>

@class CIFilter, BWColorLookupCache, NSData, NSString;

@interface BWStreamingCVAFilterRendererParameters : NSObject <BWFilterRendererParameters> {

	CIFilter* _colorFilter;
	BWColorLookupCache* _colorLookupCache;
	NSData* _foregroundColorLookupTable;
	NSData* _backgroundColorLookupTable;
	BOOL _studioAndContourRenderingEnabled;
	BOOL _stageRenderingEnabled;
	float _interpolationFractionComplete;
	long long _renderingStrategy;

}

@property (nonatomic,retain,readonly) BWColorLookupCache * colorLookupCache;              //@synthesize colorLookupCache=_colorLookupCache - In the implementation block
@property (nonatomic,retain) NSData * foregroundColorLookupTable;                         //@synthesize foregroundColorLookupTable=_foregroundColorLookupTable - In the implementation block
@property (nonatomic,retain) NSData * backgroundColorLookupTable;                         //@synthesize backgroundColorLookupTable=_backgroundColorLookupTable - In the implementation block
@property (nonatomic,retain) CIFilter * colorFilter;                                      //@synthesize colorFilter=_colorFilter - In the implementation block
@property (nonatomic,readonly) long long renderingStrategy;                               //@synthesize renderingStrategy=_renderingStrategy - In the implementation block
@property (nonatomic,readonly) short type; 
@property (nonatomic,readonly) float interpolationFractionComplete;                       //@synthesize interpolationFractionComplete=_interpolationFractionComplete - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(NSData *)backgroundColorLookupTable;
-(NSData *)foregroundColorLookupTable;
-(CIFilter *)colorFilter;
-(void)_ensureParametersForColorFilter:(id)arg1 outputRenderingStrategy:(long long*)arg2 ;
-(id)initWithColorFilter:(id)arg1 colorLookupCache:(id)arg2 studioAndContourRenderingEnabled:(BOOL)arg3 stageRenderingEnabled:(BOOL)arg4 ;
-(long long)renderingStrategy;
-(float)interpolationFractionComplete;
-(BWColorLookupCache *)colorLookupCache;
-(void)setForegroundColorLookupTable:(NSData *)arg1 ;
-(void)setBackgroundColorLookupTable:(NSData *)arg1 ;
-(int)prepareForRenderingWithInputVideoFormat:(id)arg1 ;
-(void)updateByInterpolatingFromParameters:(id)arg1 toParameters:(id)arg2 withFractionComplete:(float)arg3 ;
-(BOOL)shouldInterpolateFromParameters:(id)arg1 toParameters:(id)arg2 ;
-(void)setColorFilter:(CIFilter *)arg1 ;
-(short)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

