/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSString, UIColor, UIImageConfiguration;

@interface PXExtendedImageConfiguration : NSObject {

	BOOL _isSystemImage;
	NSString* _imageName;
	UIColor* _tintColor;
	UIImageConfiguration* _imageConfiguration;

}

@property (nonatomic,readonly) NSString * imageName;                                   //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,readonly) BOOL isSystemImage;                                     //@synthesize isSystemImage=_isSystemImage - In the implementation block
@property (nonatomic,readonly) UIColor * tintColor;                                    //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,readonly) UIImageConfiguration * imageConfiguration;              //@synthesize imageConfiguration=_imageConfiguration - In the implementation block
-(id)init;
-(NSString *)imageName;
-(UIImageConfiguration *)imageConfiguration;
-(BOOL)isSystemImage;
-(id)initWithImageName:(id)arg1 ;
-(id)initWithImageName:(id)arg1 isSystemImage:(BOOL)arg2 ;
-(id)initWithImageName:(id)arg1 isSystemImage:(BOOL)arg2 tintColor:(id)arg3 imageConfiguration:(id)arg4 ;
-(UIColor *)tintColor;
@end

