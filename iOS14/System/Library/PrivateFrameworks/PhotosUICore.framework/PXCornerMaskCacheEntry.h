/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class UIImage;

@interface PXCornerMaskCacheEntry : NSObject {

	UIImage* _image;
	SCD_Struct_PX81 _cornerRadius;
	CGSize _size;

}

@property (nonatomic,readonly) SCD_Struct_PX82 cornerRadius;              //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,readonly) CGSize size;                               //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) UIImage * image;                           //@synthesize image=_image - In the implementation block
-(CGSize)size;
-(UIImage *)image;
-(SCD_Struct_PX82)cornerRadius;
-(id)initWithCornerRadius:(SCD_Struct_PX82)arg1 size:(CGSize)arg2 image:(id)arg3 ;
-(id)description;
@end

