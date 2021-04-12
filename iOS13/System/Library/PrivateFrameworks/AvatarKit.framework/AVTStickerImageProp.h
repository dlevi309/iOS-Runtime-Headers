/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/

#import <AvatarKit/AvatarKit-Structs.h>
#import <AvatarKit/AVTStickerProp.h>

@class UIImage;

@interface AVTStickerImageProp : AVTStickerProp {

	UIImage* _image;

}

@property (nonatomic,readonly) UIImage * image;              //@synthesize image=_image - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIImage *)image;
-(void)buildNodeForAvatar:(id)arg1 withCamera:(id)arg2 forExport:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithImage:(id)arg1 size:(CGSize)arg2 scale:(SCNVector3)arg3 position:(SCNVector3)arg4 renderLast:(BOOL)arg5 orientToCamera:(BOOL)arg6 rotation:(SCNVector3)arg7 palettesDescriptions:(id)arg8 modifiers:(id)arg9 adjustments:(id)arg10 ;
@end

