/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/HID.feature/HID
*/

#import <libobjc.A.dylib/ACCFeaturePluginProtocol.h>

@class ACCFeaturePluginHIDProvider, NSString;

@interface ACCFeaturePluginHID : NSObject <ACCFeaturePluginProtocol> {

	BOOL _isRunning;
	ACCFeaturePluginHIDProvider* _hidProvider;

}

@property (assign,nonatomic) BOOL isRunning;                                         //@synthesize isRunning=_isRunning - In the implementation block
@property (nonatomic,retain) ACCFeaturePluginHIDProvider * hidProvider;              //@synthesize hidProvider=_hidProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * pluginName; 
-(void)setIsRunning:(BOOL)arg1 ;
-(NSString *)pluginName;
-(void)setHidProvider:(ACCFeaturePluginHIDProvider *)arg1 ;
-(ACCFeaturePluginHIDProvider *)hidProvider;
-(NSString *)description;
-(BOOL)isRunning;
-(void)stopPlugin;
-(void)initPlugin;
-(void)startPlugin;
@end

