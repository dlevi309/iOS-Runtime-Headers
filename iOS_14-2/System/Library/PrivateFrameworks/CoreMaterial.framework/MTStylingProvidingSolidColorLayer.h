/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
*/

#import <CoreMaterial/CoreMaterial-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSMutableDictionary;

@interface MTStylingProvidingSolidColorLayer : CALayer {

	NSMutableDictionary* _cmStylingProviders;

}

@property (nonatomic,retain) NSMutableDictionary * cmStylingProviders;              //@synthesize cmStylingProviders=_cmStylingProviders - In the implementation block
-(id)visualStylingProviderForCategory:(id)arg1 ;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(void)_updateVisualStylingProviders;
-(void)_updateVisualStylingProviderForCategory:(id)arg1 ;
-(id)_styleSetForCategory:(id)arg1 ;
-(id)_fillLightStyleSet;
-(id)_strokeLightStyleSet;
-(id)_fillDarkStyleSet;
-(id)_strokeDarkStyleSet;
-(id)_styleSetForCategory:(id)arg1 withPrimaryStyleDictionary:(id)arg2 secondaryStyleDictionary:(id)arg3 tertiaryStyleDictionary:(id)arg4 ;
-(id)_styleSetNameForCategory:(id)arg1 ;
-(NSMutableDictionary *)cmStylingProviders;
-(void)setCmStylingProviders:(NSMutableDictionary *)arg1 ;
@end

