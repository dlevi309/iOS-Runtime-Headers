/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(CGColorRef)CGColor;
-(double)alpha;
-(id)colorWithAlphaComponent:(double)arg1 ;
-(id)initWithWhite:(double)arg1 alpha:(double)arg2 ;
-(id)_rgbColor;
-(id)_initWithCGColor:(CGColorRef)arg1 ;
-(id)_initWithDescription:(id)arg1 ;
-(id)colorDescription;
-(id)colorWithAdditionalAlphaComponent:(double)arg1 ;
-(id)colorBlendedWithColor:(id)arg1 ;
-(CAColorMatrix)sourceOverColorMatrix;
-(double)white;
@end

