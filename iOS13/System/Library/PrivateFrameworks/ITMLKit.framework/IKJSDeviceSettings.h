/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(IKJSRestrictions *)restrictions;
-(NSString *)language;
-(NSString *)storefrontCountryCode;

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
-(void)dealloc;
-(NSString *)name;
-(CGSize)screen;
-(IKJSRestrictions *)restrictions;
-(NSString *)language;
-(NSString *)storefrontCountryCode;
-(id)initWithAppContext:(id)arg1 deviceConfig:(id)arg2 ;
-(NSString *)preferredVideoFormat;
-(NSString *)preferredVideoPreviewFormat;
-(CGSize)Screen;
-(IKJSRestrictions *)Restrictions;
-(void)_restrictionsDidChangeNotification:(id)arg1 ;
-(id<IKAppDeviceConfig>)deviceConfig;
-(id)_formatStringForVideoFormat:(unsigned long long)arg1 ;
-(id)asPrivateIKJSDeviceSettings;
-(void)setDeviceConfig:(id<IKAppDeviceConfig>)arg1 ;
@end

