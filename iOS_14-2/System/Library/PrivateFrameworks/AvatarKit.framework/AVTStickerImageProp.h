/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/

#import <AvatarKit/AvatarKit-Structs.h>
#import <AvatarKit/AVTStickerProp.h>

@class UIImage;

@interface AVTStickerImageProp : AVTStickerProp {

	UIImage* _image;

}

@property (nonatomic,readonly) UIImage * image;              //@synthesize image=_image - In the implementation block
-(UIImage *)image;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)buildNodeForAvatar:(id)arg1 withCamera:(id)arg2 forExport:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithImage:(id)arg1 size:(CGSize)arg2 scale:(BOOL)arg3 position:(BOOL)arg4 renderLast:(id)arg5 orientToCamera:(id)arg6 rotation:(id)arg7 ;
-(id)dictionaryWithTargetPath:(id)arg1 ;
@end

