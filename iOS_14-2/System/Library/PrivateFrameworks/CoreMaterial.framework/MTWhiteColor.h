/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
*/

#import <CoreMaterial/CoreMaterial-Structs.h>
#import <CoreMaterial/MTColor.h>

@interface MTWhiteColor : MTColor {

	double _white;
	double _alpha;

}

@property (nonatomic,readonly) double white;              //@synthesize white=_white - In the implementation block
@property (nonatomic,readonly) double alpha;              //@synthesize alpha=_alpha - In the implementation block
-(CGColorRef)CGColor;
-(id)colorWithAlphaComponent:(double)arg1 ;
-(id)colorDescription;
-(id)_rgbColor;
-(double)white;
-(double)alpha;
-(id)_initWithDescription:(id)arg1 ;
-(id)colorBlendedWithColor:(id)arg1 ;
-(id)_initWithCGColor:(CGColorRef)arg1 ;
-(id)description;
-(id)colorWithAdditionalAlphaComponent:(double)arg1 ;
-(id)initWithWhite:(double)arg1 alpha:(double)arg2 ;
-(CAColorMatrix)sourceOverColorMatrix;
@end

