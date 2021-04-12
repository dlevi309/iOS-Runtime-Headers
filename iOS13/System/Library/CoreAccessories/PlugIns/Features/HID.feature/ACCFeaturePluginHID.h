/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)description;
-(BOOL)isRunning;
-(void)setIsRunning:(BOOL)arg1 ;
-(NSString *)pluginName;
-(void)initPlugin;
-(void)startPlugin;
-(void)stopPlugin;
-(void)setHidProvider:(ACCFeaturePluginHIDProvider *)arg1 ;
-(ACCFeaturePluginHIDProvider *)hidProvider;
@end

