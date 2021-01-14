/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OKWidgetView.h>
#import <libobjc.A.dylib/OKWidgetLabelViewProxyExports.h>

@interface OKWidgetLabelViewProxy : OKWidgetView <OKWidgetLabelViewProxyExports> {

	id _label;

}
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(BOOL)prepareForDisplay:(BOOL)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)initWithWidget:(id)arg1 ;
-(id)label;
-(void)dealloc;
-(BOOL)prepareForWarmup:(BOOL)arg1 ;
-(BOOL)prepareForUnload:(BOOL)arg1 ;
-(id)layoutSettingsKeys;
-(id)settingFontName;
-(void)setSettingFontName:(id)arg1 ;
-(float)settingFontSize;
-(void)setSettingFontSize:(float)arg1 ;
-(id)settingTextColor;
-(void)setSettingTextColor:(id)arg1 ;
-(void)setSettingTextBackgroundColor:(id)arg1 ;
-(long long)settingTextAlignment;
-(void)setSettingTextAlignment:(long long)arg1 ;
-(id)settingText;
-(void)setSettingText:(id)arg1 ;
@end

