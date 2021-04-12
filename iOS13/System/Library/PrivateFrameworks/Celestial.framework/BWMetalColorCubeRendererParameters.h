/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/BWFilterRendererParameters.h>

@class CIFilter, BWColorLookupCache, NSData, NSString;

@interface BWMetalColorCubeRendererParameters : NSObject <BWFilterRendererParameters> {

	CIFilter* _colorFilter;
	BWColorLookupCache* _colorLookupCache;
	NSData* _foregroundColorLookupTable;
	NSData* _backgroundColorLookupTable;
	float _interpolationFractionComplete;

}

@property (nonatomic,retain,readonly) BWColorLookupCache * colorLookupCache;              //@synthesize colorLookupCache=_colorLookupCache - In the implementation block
@property (nonatomic,retain) NSData * foregroundColorLookupTable;                         //@synthesize foregroundColorLookupTable=_foregroundColorLookupTable - In the implementation block
@property (nonatomic,retain) NSData * backgroundColorLookupTable;                         //@synthesize backgroundColorLookupTable=_backgroundColorLookupTable - In the implementation block
@property (nonatomic,retain) CIFilter * colorFilter;                                      //@synthesize colorFilter=_colorFilter - In the implementation block
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
-(NSData *)foregroundColorLookupTable;
-(NSData *)backgroundColorLookupTable;
-(float)interpolationFractionComplete;
-(BWColorLookupCache *)colorLookupCache;
-(CIFilter *)colorFilter;
-(void)setForegroundColorLookupTable:(NSData *)arg1 ;
-(void)setBackgroundColorLookupTable:(NSData *)arg1 ;
-(void)updateByInterpolatingFromParameters:(id)arg1 toParameters:(id)arg2 withFractionComplete:(float)arg3 ;
-(void)setColorFilter:(CIFilter *)arg1 ;
-(id)initWithColorFilter:(id)arg1 colorLookupCache:(id)arg2 ;
@end

