/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PICompositionExporterOptions.h>

@class NSString;

@interface PICompositionExporterVideoOptions : PICompositionExporterOptions {

	BOOL _increaseBitRateIfNecessary;
	BOOL _preserveSourceColorSpace;
	BOOL _bypassOutputSettingsIfNoComposition;
	BOOL _applyVideoOrientationAsMetadata;
	BOOL _requireHardwareEncoder;
	/*^block*/id _metadataProcessor;
	NSString* _videoCodecType;

}

@property (copy) id metadataProcessor;                                              //@synthesize metadataProcessor=_metadataProcessor - In the implementation block
@property (assign,nonatomic) BOOL increaseBitRateIfNecessary;                       //@synthesize increaseBitRateIfNecessary=_increaseBitRateIfNecessary - In the implementation block
@property (nonatomic,copy) NSString * videoCodecType;                               //@synthesize videoCodecType=_videoCodecType - In the implementation block
@property (assign,nonatomic) BOOL preserveSourceColorSpace;                         //@synthesize preserveSourceColorSpace=_preserveSourceColorSpace - In the implementation block
@property (assign,nonatomic) BOOL bypassOutputSettingsIfNoComposition;              //@synthesize bypassOutputSettingsIfNoComposition=_bypassOutputSettingsIfNoComposition - In the implementation block
@property (assign,nonatomic) BOOL applyVideoOrientationAsMetadata;                  //@synthesize applyVideoOrientationAsMetadata=_applyVideoOrientationAsMetadata - In the implementation block
@property (assign,nonatomic) BOOL requireHardwareEncoder;                           //@synthesize requireHardwareEncoder=_requireHardwareEncoder - In the implementation block
-(NSString *)videoCodecType;
-(id)init;
-(void)setBypassOutputSettingsIfNoComposition:(BOOL)arg1 ;
-(BOOL)applyVideoOrientationAsMetadata;
-(id)description;
-(void)setVideoCodecType:(NSString *)arg1 ;
-(void)setApplyVideoOrientationAsMetadata:(BOOL)arg1 ;
-(BOOL)bypassOutputSettingsIfNoComposition;
-(BOOL)requireHardwareEncoder;
-(void)setRequireHardwareEncoder:(BOOL)arg1 ;
-(id)metadataProcessor;
-(void)setMetadataProcessor:(id)arg1 ;
-(BOOL)increaseBitRateIfNecessary;
-(void)setIncreaseBitRateIfNecessary:(BOOL)arg1 ;
-(BOOL)preserveSourceColorSpace;
-(void)setPreserveSourceColorSpace:(BOOL)arg1 ;
@end

