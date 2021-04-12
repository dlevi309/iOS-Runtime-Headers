/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NTKPhoto *)photo;
-(UIImage *)image;
-(id)initWithPhoto:(id)arg1 ;
-(id)initWithPhoto:(id)arg1 index:(long long)arg2 ;
@end

