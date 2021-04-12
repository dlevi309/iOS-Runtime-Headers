/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKWidgetView.h>
#import <libobjc.A.dylib/OKWidgetTextViewProxyExports.h>

@interface OKWidgetTextViewProxy : OKWidgetView <OKWidgetTextViewProxyExports> {

	UIEdgeInsets _textEdgeInsets;

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
-(id)layoutSettingsKeys;
-(CGRect)textViewFrame;
-(UIEdgeInsets)textEdgeInsets;
-(UIEdgeInsets)settingTextEdgeInsets;
-(void)setSettingTextEdgeInsets:(UIEdgeInsets)arg1 ;
@end

