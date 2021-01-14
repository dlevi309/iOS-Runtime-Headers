/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (readonly) NSURL * poseResourcesURL; 
@property (readonly) NSURL * componentsURL;                    //@synthesize componentsURL=_componentsURL - In the implementation block
@property (readonly) NSURL * materialsURL; 
@property (readonly) NSURL * presetThumbnailsURL; 
@property (readonly) NSURL * propsURL; 
+(id)sharedResourceLocator;
+(id)_resourcePathInDirectoryURL:(id)arg1 subDirectory:(id)arg2 name:(id)arg3 ofType:(id)arg4 ;
-(NSURL *)resourcesURL;
-(id)init;
-(CGImageRef)imageWithPath:(id)arg1 ;
-(id)pathForMemojiResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 ;
-(NSURL *)componentsURL;
-(id)pathForStickerResource:(id)arg1 ofType:(id)arg2 ;
-(id)resourcesURLForPathComponent:(id)arg1 ;
-(NSURL *)memojiResourcesURL;
-(NSURL *)animojiResourcesURL;
-(NSURL *)stickerResourcesURL;
-(NSURL *)poseResourcesURL;
-(id)pathForMemojiResource:(id)arg1 ofType:(id)arg2 ;
-(id)pathForAnimojiResource:(id)arg1 ofType:(id)arg2 ;
-(id)pathForAnimojiResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 ;
-(id)pathForStickerResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 ;
-(id)pathForPoseResource:(id)arg1 ofType:(id)arg2 ;
-(id)pathForPoseResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 ;
-(NSURL *)materialsURL;
-(NSURL *)presetThumbnailsURL;
-(NSURL *)propsURL;
@end

