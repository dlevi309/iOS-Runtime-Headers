/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKWidgetView.h>
#import <libobjc.A.dylib/OKWidgetLinearGradientViewProxyExports.h>

@class OFLinearGradientView, NSArray;

@interface OKWidgetLinearGradientView : OKWidgetView <OKWidgetLinearGradientViewProxyExports> {

	OFLinearGradientView* _gradientView;
	NSArray* _gradientColors;
	NSArray* _gradientLocations;

}
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(BOOL)prepareForDisplay:(BOOL)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)initWithWidget:(id)arg1 ;
-(void)dealloc;
-(BOOL)prepareForWarmup:(BOOL)arg1 ;
-(BOOL)prepareForUnload:(BOOL)arg1 ;
-(void)setAntialiasing:(BOOL)arg1 ;
-(void)updateGradient;
-(id)settingGradientLocations;
-(void)setSettingGradientLocations:(id)arg1 ;
-(id)settingGradientColors;
-(void)setSettingGradientColors:(id)arg1 ;
-(BOOL)settingOpaque;
-(CGPoint)settingStartPoint;
-(void)setSettingStartPoint:(CGPoint)arg1 ;
-(CGPoint)settingEndPoint;
-(void)setSettingEndPoint:(CGPoint)arg1 ;
-(void)setSettingOpaque:(BOOL)arg1 ;
@end

