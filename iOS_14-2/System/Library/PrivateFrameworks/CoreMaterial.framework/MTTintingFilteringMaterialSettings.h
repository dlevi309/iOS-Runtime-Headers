/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
*/

#import <CoreMaterial/CoreMaterial-Structs.h>
#import <CoreMaterial/MTTintingMaterialSettings.h>
#import <libobjc.A.dylib/MTMaterialFilteringInternal.h>

@class NSArray, NSString;

@interface MTTintingFilteringMaterialSettings : MTTintingMaterialSettings <MTMaterialFilteringInternal> {

	CGImageRef _variableBlurInputMask;
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
	NSString* _variableBlurInputMaskName;
	CAColorMatrix _colorMatrix;

}

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
@property (nonatomic,copy,readonly) NSString * variableBlurInputMaskName;                          //@synthesize variableBlurInputMaskName=_variableBlurInputMaskName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)zoom;
-(double)brightness;
-(NSString *)variableBlurInputMaskName;
-(double)blurRadius;
-(NSArray *)luminanceValues;
-(CAColorMatrix)colorMatrix;
-(CGImageRef)variableBlurInputMask;
-(id)initWithMaterialDescription:(id)arg1 andDescendantDescriptions:(id)arg2 bundle:(id)arg3 ;
-(double)saturation;
-(double)backdropScale;
-(BOOL)isAverageColorEnabled;
-(BOOL)isBlurAtEnd;
-(NSString *)blurInputQuality;
-(void)_processMaterialFilteringDescription:(id)arg1 defaultingToIdentity:(BOOL)arg2 bundle:(id)arg3 ;
-(double)luminanceAmount;
-(void)dealloc;
@end

