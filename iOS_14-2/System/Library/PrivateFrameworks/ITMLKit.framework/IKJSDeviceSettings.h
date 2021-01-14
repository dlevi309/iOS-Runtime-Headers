/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/NSObject.h>
#import <libobjc.A.dylib/IKJSDeviceSettings.h>
@class NSString, IKJSRestrictions;


@protocol IKJSDeviceSettings <JSExport>
@property (nonatomic,retain,readonly) NSString * language; 
@property (nonatomic,retain,readonly) NSString * storefrontCountryCode; 
@property (nonatomic,readonly) IKJSRestrictions * restrictions; 
@required
-(NSString *)storefrontCountryCode;
-(IKJSRestrictions *)restrictions;
-(NSString *)language;

@end

#import <libobjc.A.dylib/_IKJSDeviceSettingsProxy.h>
#import <libobjc.A.dylib/_IKJSDeviceSettings.h>

@protocol IKAppDeviceConfig;
@class NSString, IKJSRestrictions;

@interface IKJSDeviceSettings : IKJSObject <NSObject, IKJSDeviceSettings, _IKJSDeviceSettingsProxy, _IKJSDeviceSettings> {

	id _restrictionDidChangeToken;
	id<IKAppDeviceConfig> _deviceConfig;

}

@property (assign,nonatomic,__weak) id<IKAppDeviceConfig> deviceConfig;                    //@synthesize deviceConfig=_deviceConfig - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) NSString * language; 
@property (nonatomic,retain,readonly) NSString * storefrontCountryCode; 
@property (nonatomic,readonly) IKJSRestrictions * restrictions; 
@property (nonatomic,retain,readonly) NSString * name; 
@property (nonatomic,retain,readonly) NSString * preferredVideoFormat; 
@property (nonatomic,retain,readonly) NSString * preferredVideoPreviewFormat; 
@property (nonatomic,readonly) CGSize Screen; 
@property (nonatomic,readonly) IKJSRestrictions * Restrictions; 
@property (nonatomic,readonly) CGSize screen; 
-(NSString *)storefrontCountryCode;
-(CGSize)Screen;
-(NSString *)name;
-(IKJSRestrictions *)restrictions;
-(CGSize)screen;
-(NSString *)language;
-(void)dealloc;
-(NSString *)preferredVideoFormat;
-(id)_formatStringForVideoFormat:(unsigned long long)arg1 ;
-(NSString *)preferredVideoPreviewFormat;
-(id)initWithAppContext:(id)arg1 deviceConfig:(id)arg2 ;
-(IKJSRestrictions *)Restrictions;
-(void)_restrictionsDidChangeNotification:(id)arg1 ;
-(id<IKAppDeviceConfig>)deviceConfig;
-(id)asPrivateIKJSDeviceSettings;
-(void)setDeviceConfig:(id<IKAppDeviceConfig>)arg1 ;
@end

