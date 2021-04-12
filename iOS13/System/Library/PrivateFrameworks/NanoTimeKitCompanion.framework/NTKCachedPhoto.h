/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class UIImage, NTKPhoto;

@interface NTKCachedPhoto : NSObject {

	UIImage* _image;
	NTKPhoto* _photo;
	long long _index;

}

@property (nonatomic,readonly) UIImage * image;               //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) NTKPhoto * photo;              //@synthesize photo=_photo - In the implementation block
@property (nonatomic,readonly) long long index;               //@synthesize index=_index - In the implementation block
-(BOOL)load;
-(long long)index;
-(UIImage *)image;
-(NTKPhoto *)photo;
-(id)initWithPhoto:(id)arg1 ;
-(id)initWithPhoto:(id)arg1 index:(long long)arg2 ;
@end

