/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class SKTexture, CLKDevice;

@interface _NTKAnalogSceneCache : NSObject {

	SKTexture* _faceCircleSpriteTexture;
	CLKDevice* _device;

}
+(id)sharedInstance;
+(void)_deallocInstance;
-(id)init;
-(void)dealloc;
-(void)_asyncDeallocInstance;
-(id)faceCircleSpriteTextureForDevice:(id)arg1 ;
@end

