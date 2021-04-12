/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUExportRequest.h>

@class NSDictionary, NSArray, NSProgress, NUColorSpace;

@interface NUVideoExportRequest : NUExportRequest {

	BOOL _bypassOutputSettingsIfNoComposition;
	BOOL _requiresVideoComposition;
	NSDictionary* _outputSettings;
	NSArray* _metadata;
	NSProgress* _progress;
	double _bitRateMultiplicationFactor;
	NUColorSpace* _cachedColorSpace;

}

@property (retain) NUColorSpace * cachedColorSpace;                                 //@synthesize cachedColorSpace=_cachedColorSpace - In the implementation block
@property (retain) NSProgress * progress;                                           //@synthesize progress=_progress - In the implementation block
@property (readonly) NUColorSpace * colorSpace; 
@property (assign,nonatomic) BOOL requiresVideoComposition;                         //@synthesize requiresVideoComposition=_requiresVideoComposition - In the implementation block
@property (copy) NSDictionary * outputSettings;                                     //@synthesize outputSettings=_outputSettings - In the implementation block
@property (copy) NSArray * metadata;                                                //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) double bitRateMultiplicationFactor;                    //@synthesize bitRateMultiplicationFactor=_bitRateMultiplicationFactor - In the implementation block
@property (assign,nonatomic) BOOL bypassOutputSettingsIfNoComposition;              //@synthesize bypassOutputSettingsIfNoComposition=_bypassOutputSettingsIfNoComposition - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSProgress *)progress;
-(NUColorSpace *)colorSpace;
-(void)setMetadata:(NSArray *)arg1 ;
-(NSArray *)metadata;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)setOutputSettings:(NSDictionary *)arg1 ;
-(NSDictionary *)outputSettings;
-(id)initWithComposition:(id)arg1 ;
-(void)submit:(/*^block*/id)arg1 ;
-(void)setBypassOutputSettingsIfNoComposition:(BOOL)arg1 ;
-(id)newRenderJob;
-(long long)mediaComponentType;
-(BOOL)requiresVideoComposition;
-(void)submitWithProgress:(id)arg1 completion:(/*^block*/id)arg2 ;
-(double)bitRateMultiplicationFactor;
-(void)setBitRateMultiplicationFactor:(double)arg1 ;
-(BOOL)bypassOutputSettingsIfNoComposition;
-(NUColorSpace *)cachedColorSpace;
-(void)setCachedColorSpace:(NUColorSpace *)arg1 ;
-(void)setRequiresVideoComposition:(BOOL)arg1 ;
@end

