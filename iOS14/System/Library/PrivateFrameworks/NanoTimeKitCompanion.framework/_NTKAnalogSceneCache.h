/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

