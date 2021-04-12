/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/


@class UITraitCollection, UIImage;

@interface CPImageSetAssetRegistration : NSObject {

	UITraitCollection* _baseTraitCollection;
	UITraitCollection* _lightTraitCollection;
	UITraitCollection* _darkTraitCollection;
	UIImage* _combinedImage;

}

@property (nonatomic,readonly) UITraitCollection * baseTraitCollection;               //@synthesize baseTraitCollection=_baseTraitCollection - In the implementation block
@property (nonatomic,readonly) UITraitCollection * lightTraitCollection;              //@synthesize lightTraitCollection=_lightTraitCollection - In the implementation block
@property (nonatomic,readonly) UITraitCollection * darkTraitCollection;               //@synthesize darkTraitCollection=_darkTraitCollection - In the implementation block
@property (nonatomic,readonly) UIImage * combinedImage;                               //@synthesize combinedImage=_combinedImage - In the implementation block
-(void)dealloc;
-(UIImage *)combinedImage;
-(UITraitCollection *)lightTraitCollection;
-(UITraitCollection *)darkTraitCollection;
-(id)initWithLightImage:(id)arg1 darkImage:(id)arg2 baseTraitCollection:(id)arg3 ;
-(UITraitCollection *)baseTraitCollection;
@end

