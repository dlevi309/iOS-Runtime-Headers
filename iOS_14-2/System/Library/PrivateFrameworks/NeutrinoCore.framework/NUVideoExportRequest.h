/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUExportRequest.h>

@class NSDictionary, NUColorSpace, NSArray, NSProgress, NUCGAffineTransform;

@interface NUVideoExportRequest : NUExportRequest {

	BOOL _bypassOutputSettingsIfNoComposition;
	BOOL _requireHardwareEncoder;
	BOOL _requiresVideoComposition;
	NSDictionary* _outputSettings;
	NUColorSpace* _colorSpace;
	NSArray* _metadata;
	NSProgress* _progress;
	double _bitRateMultiplicationFactor;
	NUCGAffineTransform* _preferredTransform;

}

@property (retain) NSProgress * progress;                                           //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL requiresVideoComposition;                         //@synthesize requiresVideoComposition=_requiresVideoComposition - In the implementation block
@property (copy) NSDictionary * outputSettings;                                     //@synthesize outputSettings=_outputSettings - In the implementation block
@property (nonatomic,retain) NUColorSpace * colorSpace;                             //@synthesize colorSpace=_colorSpace - In the implementation block
@property (copy) NSArray * metadata;                                                //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) double bitRateMultiplicationFactor;                    //@synthesize bitRateMultiplicationFactor=_bitRateMultiplicationFactor - In the implementation block
@property (assign,nonatomic) BOOL bypassOutputSettingsIfNoComposition;              //@synthesize bypassOutputSettingsIfNoComposition=_bypassOutputSettingsIfNoComposition - In the implementation block
@property (assign,nonatomic) BOOL requireHardwareEncoder;                           //@synthesize requireHardwareEncoder=_requireHardwareEncoder - In the implementation block
@property (retain) NUCGAffineTransform * preferredTransform;                        //@synthesize preferredTransform=_preferredTransform - In the implementation block
-(void)setColorSpace:(NUColorSpace *)arg1 ;
-(NUColorSpace *)colorSpace;
-(NSProgress *)progress;
-(void)setBypassOutputSettingsIfNoComposition:(BOOL)arg1 ;
-(void)setOutputSettings:(NSDictionary *)arg1 ;
-(NUCGAffineTransform *)preferredTransform;
-(id)initWithComposition:(id)arg1 ;
-(void)setMetadata:(NSArray *)arg1 ;
-(NSDictionary *)outputSettings;
-(void)submit:(/*^block*/id)arg1 ;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)setPreferredTransform:(NUCGAffineTransform *)arg1 ;
-(NSArray *)metadata;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)newRenderJob;
-(long long)mediaComponentType;
-(BOOL)requiresVideoComposition;
-(void)submitWithProgress:(id)arg1 completion:(/*^block*/id)arg2 ;
-(double)bitRateMultiplicationFactor;
-(void)setBitRateMultiplicationFactor:(double)arg1 ;
-(BOOL)bypassOutputSettingsIfNoComposition;
-(BOOL)requireHardwareEncoder;
-(void)setRequireHardwareEncoder:(BOOL)arg1 ;
-(void)setRequiresVideoComposition:(BOOL)arg1 ;
@end

