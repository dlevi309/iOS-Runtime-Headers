/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


#import <AvatarKit/AvatarKit-Structs.h>
@class NSMutableDictionary, NSURL;

@interface AVTResourceLocator : NSObject {

	NSMutableDictionary* _imageCache;
	NSURL* _resourcesURL;
	NSURL* _componentsURL;

}

@property (readonly) NSURL * resourcesURL;                     //@synthesize resourcesURL=_resourcesURL - In the implementation block
@property (readonly) NSURL * memojiResourcesURL; 
@property (readonly) NSURL * animojiResourcesURL; 
@property (readonly) NSURL * stickerResourcesURL; 
@property (readonly) NSURL * componentsURL;                    //@synthesize componentsURL=_componentsURL - In the implementation block
@property (readonly) NSURL * maskImagesURL; 
@property (readonly) NSURL * materialsURL; 
@property (readonly) NSURL * presetThumbnailsURL; 
@property (readonly) NSURL * propsURL; 
+(id)sharedResourceLocator;
-(id)init;
-(NSURL *)resourcesURL;
-(CGImageRef)imageWithPath:(id)arg1 ;
-(id)pathForMemojiResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 ;
-(NSURL *)componentsURL;
-(id)pathForStickerResource:(id)arg1 ofType:(id)arg2 ;
-(NSURL *)memojiResourcesURL;
-(NSURL *)animojiResourcesURL;
-(NSURL *)stickerResourcesURL;
-(id)pathForMemojiResource:(id)arg1 ofType:(id)arg2 ;
-(id)pathForAnimojiResource:(id)arg1 ofType:(id)arg2 ;
-(id)pathForAnimojiResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 ;
-(id)pathForStickerResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 ;
-(NSURL *)maskImagesURL;
-(NSURL *)materialsURL;
-(NSURL *)presetThumbnailsURL;
-(NSURL *)propsURL;
@end

