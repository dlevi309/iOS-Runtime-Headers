/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PICompositionExporterOptions.h>

@interface PICompositionExporterVideoOptions : PICompositionExporterOptions {

	BOOL _increaseBitRateIfNecessary;
	BOOL _bypassOutputSettingsIfNoComposition;
	/*^block*/id _metadataProcessor;

}

@property (copy) id metadataProcessor;                                              //@synthesize metadataProcessor=_metadataProcessor - In the implementation block
@property (assign,nonatomic) BOOL increaseBitRateIfNecessary;                       //@synthesize increaseBitRateIfNecessary=_increaseBitRateIfNecessary - In the implementation block
@property (assign,nonatomic) BOOL bypassOutputSettingsIfNoComposition;              //@synthesize bypassOutputSettingsIfNoComposition=_bypassOutputSettingsIfNoComposition - In the implementation block
-(void)setBypassOutputSettingsIfNoComposition:(BOOL)arg1 ;
-(BOOL)bypassOutputSettingsIfNoComposition;
-(id)metadataProcessor;
-(void)setMetadataProcessor:(id)arg1 ;
-(BOOL)increaseBitRateIfNecessary;
-(void)setIncreaseBitRateIfNecessary:(BOOL)arg1 ;
@end

