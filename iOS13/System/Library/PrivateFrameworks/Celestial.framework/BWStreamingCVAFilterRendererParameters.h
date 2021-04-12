/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) short type; 
@property (nonatomic,readonly) float interpolationFractionComplete;                       //@synthesize interpolationFractionComplete=_interpolationFractionComplete - In the implementation block
+(void)initialize;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(short)type;
-(int)prepareForRenderingWithInputVideoFormat:(id)arg1 ;
-(long long)renderingStrategy;
-(NSData *)foregroundColorLookupTable;
-(NSData *)backgroundColorLookupTable;
-(float)interpolationFractionComplete;
-(void)_ensureParametersForColorFilter:(id)arg1 outputRenderingStrategy:(long long*)arg2 ;
-(id)initWithColorFilter:(id)arg1 colorLookupCache:(id)arg2 studioAndContourRenderingEnabled:(BOOL)arg3 stageRenderingEnabled:(BOOL)arg4 ;
-(BWColorLookupCache *)colorLookupCache;
-(CIFilter *)colorFilter;
-(void)setForegroundColorLookupTable:(NSData *)arg1 ;
-(void)setBackgroundColorLookupTable:(NSData *)arg1 ;
-(void)updateByInterpolatingFromParameters:(id)arg1 toParameters:(id)arg2 withFractionComplete:(float)arg3 ;
-(BOOL)shouldInterpolateFromParameters:(id)arg1 toParameters:(id)arg2 ;
-(void)setColorFilter:(CIFilter *)arg1 ;
@end

