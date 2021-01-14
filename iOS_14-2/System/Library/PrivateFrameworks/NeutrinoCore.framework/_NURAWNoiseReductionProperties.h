/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <libobjc.A.dylib/NURAWNoiseReductionProperties.h>

@class NSString;

@interface _NURAWNoiseReductionProperties : NSObject <NURAWNoiseReductionProperties> {

	double _luminance;
	double _color;
	double _sharpness;
	double _contrast;
	double _detail;

}

@property (assign) double luminance;                                //@synthesize luminance=_luminance - In the implementation block
@property (assign) double color;                                    //@synthesize color=_color - In the implementation block
@property (assign) double sharpness;                                //@synthesize sharpness=_sharpness - In the implementation block
@property (assign) double contrast;                                 //@synthesize contrast=_contrast - In the implementation block
@property (assign) double detail;                                   //@synthesize detail=_detail - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setContrast:(double)arg1 ;
-(double)contrast;
-(double)detail;
-(double)color;
-(double)luminance;
-(NSString *)description;
-(void)setColor:(double)arg1 ;
-(double)sharpness;
-(void)setSharpness:(double)arg1 ;
-(void)setDetail:(double)arg1 ;
-(void)setLuminance:(double)arg1 ;
@end

