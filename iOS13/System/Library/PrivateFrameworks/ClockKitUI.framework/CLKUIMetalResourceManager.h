/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
*/

#import <ClockKitUI/CLKUIResourceManager.h>

@protocol MTLDevice, MTLTexture;
@interface CLKUIMetalResourceManager : CLKUIResourceManager {

	id<MTLDevice> _device;
	id<MTLTexture> _nilTexture;

}
+(id)sharedDevice;
+(id)sharedCommandQueue;
+(id)sharedMetalInstance;
+(id)sharedNilTexture;
-(id)init;
-(id)_newAtlasForUuid:(id)arg1 ;
-(void)_purgeAtlases:(id)arg1 ;
@end

