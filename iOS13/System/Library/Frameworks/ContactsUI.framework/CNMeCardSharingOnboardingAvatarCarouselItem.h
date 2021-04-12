/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@class UIImage, NSString;

@interface CNMeCardSharingOnboardingAvatarCarouselItem : NSObject {

	BOOL _shouldShowVariants;
	UIImage* _cachedImage;
	/*^block*/id _imageProvider;
	unsigned long long _imageType;
	NSString* _title;
	double _imageInsetPercentage;

}

@property (nonatomic,retain) UIImage * cachedImage;                      //@synthesize cachedImage=_cachedImage - In the implementation block
@property (nonatomic,copy,readonly) id imageProvider;                    //@synthesize imageProvider=_imageProvider - In the implementation block
@property (assign,nonatomic) unsigned long long imageType;               //@synthesize imageType=_imageType - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) double imageInsetPercentage;              //@synthesize imageInsetPercentage=_imageInsetPercentage - In the implementation block
@property (assign,nonatomic) BOOL shouldShowVariants;                    //@synthesize shouldShowVariants=_shouldShowVariants - In the implementation block
-(NSString *)title;
-(id)initWithTitle:(id)arg1 ;
-(void)setImageType:(unsigned long long)arg1 ;
-(UIImage *)cachedImage;
-(void)setCachedImage:(UIImage *)arg1 ;
-(unsigned long long)imageType;
-(id)initWithImageInsetPercentage:(double)arg1 imageProvider:(/*^block*/id)arg2 ;
-(id)imageProvider;
-(double)imageInsetPercentage;
-(BOOL)shouldShowVariants;
-(void)setShouldShowVariants:(BOOL)arg1 ;
@end

