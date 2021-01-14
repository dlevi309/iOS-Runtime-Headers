/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <MapKit/MKPointAnnotation.h>
#import <libobjc.A.dylib/OKSettingsSupport.h>

@class NSString;

@interface OKWidgetMapViewAnnotation : MKPointAnnotation <OKSettingsSupport> {

	NSString* _identifier;
	NSString* _actionScript;

}

@property (nonatomic,copy,readonly) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionScript;              //@synthesize actionScript=_actionScript - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
-(id)settingObjectForKey:(id)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(id)init;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(NSString *)identifier;
-(void)dealloc;
-(NSString *)actionScript;
@end

