/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
*/

#import <CoreMaterial/CoreMaterial-Structs.h>
#import <CoreMaterial/MTTintingMaterialSettings.h>
#import <libobjc.A.dylib/MTMaterialFiltering.h>

@class NSArray, NSString;

@interface MTTintingFilteringMaterialSettings : MTTintingMaterialSettings <MTMaterialFiltering> {

	BOOL _averageColorEnabled;
	BOOL _blurAtEnd;
	double _luminanceAmount;
	NSArray* _luminanceValues;
	double _blurRadius;
	double _saturation;
	double _brightness;
	double _zoom;
	double _backdropScale;
	NSString* _blurInputQuality;
	CAColorMatrix _colorMatrix;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double luminanceAmount;                                             //@synthesize luminanceAmount=_luminanceAmount - In the implementation block
@property (nonatomic,copy,readonly) NSArray * luminanceValues;                                     //@synthesize luminanceValues=_luminanceValues - In the implementation block
@property (nonatomic,readonly) double blurRadius;                                                  //@synthesize blurRadius=_blurRadius - In the implementation block
@property (getter=isAverageColorEnabled,nonatomic,readonly) BOOL averageColorEnabled;              //@synthesize averageColorEnabled=_averageColorEnabled - In the implementation block
@property (nonatomic,readonly) double saturation;                                                  //@synthesize saturation=_saturation - In the implementation block
@property (nonatomic,readonly) double brightness;                                                  //@synthesize brightness=_brightness - In the implementation block
@property (nonatomic,readonly) CAColorMatrix colorMatrix;                                          //@synthesize colorMatrix=_colorMatrix - In the implementation block
@property (nonatomic,readonly) double zoom;                                                        //@synthesize zoom=_zoom - In the implementation block
@property (nonatomic,readonly) double backdropScale;                                               //@synthesize backdropScale=_backdropScale - In the implementation block
@property (nonatomic,copy,readonly) NSString * blurInputQuality;                                   //@synthesize blurInputQuality=_blurInputQuality - In the implementation block
@property (getter=isBlurAtEnd,nonatomic,readonly) BOOL blurAtEnd;                                  //@synthesize blurAtEnd=_blurAtEnd - In the implementation block
-(double)saturation;
-(double)brightness;
-(double)zoom;
-(double)blurRadius;
-(NSString *)blurInputQuality;
-(double)luminanceAmount;
-(NSArray *)luminanceValues;
-(CAColorMatrix)colorMatrix;
-(BOOL)isBlurAtEnd;
-(double)backdropScale;
-(void)_processMaterialFilteringDescription:(id)arg1 defaultingToIdentity:(BOOL)arg2 ;
-(BOOL)isAverageColorEnabled;
-(id)initWithMaterialDescription:(id)arg1 andDescendantDescriptions:(id)arg2 ;
@end

