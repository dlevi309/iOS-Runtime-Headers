/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
*/

#import <ClockKitUI/CLKUIResourceManager.h>

@protocol MTLDevice, MTLTexture;
@interface CLKUIMetalResourceManager : CLKUIResourceManager {

	id<MTLDevice> _device;
	id<MTLTexture> _nilTexture;

}
+(id)sharedCommandQueue;
+(id)sharedDevice;
+(id)sharedMetalInstance;
+(id)sharedNilTexture;
-(id)init;
-(id)_newAtlasForUuid:(id)arg1 ;
-(void)_purgeAtlases:(id)arg1 ;
@end

