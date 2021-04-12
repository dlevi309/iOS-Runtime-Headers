/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@interface TSDCapabilities : NSObject {

	long long _platform;
	long long _device;
	long long _renderer;

}

@property (nonatomic,readonly) long long platform;                     //@synthesize platform=_platform - In the implementation block
@property (nonatomic,readonly) long long device;                       //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) long long renderer;                     //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,readonly) BOOL isRendererH3OrBelow; 
@property (nonatomic,readonly) BOOL isRendererH4OrBelow; 
@property (nonatomic,readonly) BOOL isRendererH5OrBelow; 
@property (nonatomic,readonly) BOOL hasLightningPort; 
@property (nonatomic,readonly) CGSize maximumTextureSize; 
+(id)currentCapabilities;
+(id)currentCapabilitiesOverride;
+(void)setCurrentCapabilitiesOverride:(id)arg1 ;
-(id)init;
-(long long)platform;
-(long long)device;
-(long long)renderer;
-(BOOL)isRendererH4OrBelow;
-(CGSize)maximumTextureSize;
-(void)p_setupPlatform;
-(void)p_setupDevice;
-(BOOL)isRendererH3OrBelow;
-(BOOL)isRendererH5OrBelow;
-(BOOL)hasLightningPort;
-(CGSize)maximumHardcodedTextureSize;
@end

