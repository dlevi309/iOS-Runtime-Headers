/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OKWidgetView.h>
#import <libobjc.A.dylib/OKSettingsSupport.h>

@class NSMutableArray, NSString;

@interface OKWidgetMediaAnimationView : OKWidgetView <OKSettingsSupport> {

	NSMutableArray* _CGImages;
	BOOL _autoplay;
	BOOL _loop;
	double _duration;
	NSString* _uuid;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
+(id)animationKeyPrefix;
+(void)setupJavascriptContext:(id)arg1 ;
-(BOOL)prepareForDisplay:(BOOL)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)stopAnimation;
-(id)initWithWidget:(id)arg1 ;
-(void)dealloc;
-(void)playAnimation;
-(long long)settingContentMode;
-(void)setSettingContentMode:(long long)arg1 ;
-(void)setSettingUrls:(id)arg1 ;
-(BOOL)settingAutoplay;
-(void)setSettingAutoplay:(BOOL)arg1 ;
-(BOOL)settingLoop;
-(void)setSettingLoop:(BOOL)arg1 ;
-(double)settingDuration;
-(void)setSettingDuration:(double)arg1 ;
@end

