/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <libobjc.A.dylib/OKSettingsSupport.h>

@class CALayer, OKWidgetMicaDocument, NSString;

@interface OKWidgetCALayerProxy : NSObject <OKSettingsSupport> {

	CALayer* _layer;
	OKWidgetMicaDocument* _widgetMicaDocument;

}

@property (nonatomic,retain,readonly) CALayer * layer;                               //@synthesize layer=_layer - In the implementation block
@property (assign,nonatomic) OKWidgetMicaDocument * widgetMicaDocument; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)proxyForLayer:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(CALayer *)layer;
-(id)initWithLayer:(id)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(void)setSettingContents:(id)arg1 ;
-(void)setWidgetMicaDocument:(OKWidgetMicaDocument *)arg1 ;
-(OKWidgetMicaDocument *)widgetMicaDocument;
@end

