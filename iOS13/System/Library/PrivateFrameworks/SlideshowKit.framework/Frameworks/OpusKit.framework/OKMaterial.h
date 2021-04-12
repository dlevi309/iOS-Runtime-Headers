/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <libobjc.A.dylib/OKSettingsSupport.h>

@protocol OKWidgetProtocol;
@class OKPresentationMaterial, NSString;

@interface OKMaterial : NSObject <OKSettingsSupport> {

	OKPresentationMaterial* _material;
	BOOL _needsApplySettings;
	BOOL _hasSettingsApplied;
	id<OKWidgetProtocol> _parentWidget;

}

@property (assign,nonatomic) id<OKWidgetProtocol> parentWidget;              //@synthesize parentWidget=_parentWidget - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
-(void)dealloc;
-(void)load;
-(NSString *)name;
-(void)unload;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(id<OKWidgetProtocol>)parentWidget;
-(void)setNeedsApplySettings;
-(void)applySettingsIfNeeded;
-(void)applySettings;
-(id)initWithMaterial:(id)arg1 ;
-(void)setParentWidget:(id<OKWidgetProtocol>)arg1 ;
@end

