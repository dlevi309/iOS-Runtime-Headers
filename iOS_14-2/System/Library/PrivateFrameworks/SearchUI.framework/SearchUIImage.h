/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SearchFoundation/SFImage.h>

@class UIImage, SFImage;

@interface SearchUIImage : SFImage {

	BOOL _useFastPathShadow;
	BOOL _needsTinting;
	UIImage* _uiImage;
	SFImage* _sfImage;

}

@property (nonatomic,retain) UIImage * uiImage;                             //@synthesize uiImage=_uiImage - In the implementation block
@property (nonatomic,readonly) SFImage * sfImage;                           //@synthesize sfImage=_sfImage - In the implementation block
@property (assign,nonatomic) BOOL useFastPathShadow;                        //@synthesize useFastPathShadow=_useFastPathShadow - In the implementation block
@property (assign,nonatomic) BOOL needsTinting;                             //@synthesize needsTinting=_needsTinting - In the implementation block
@property (nonatomic,readonly) int defaultCornerRoundingStyle; 
+(id)imageWithSFImage:(id)arg1 ;
+(id)imageWithSFImage:(id)arg1 variantForAppIcon:(unsigned long long)arg2 ;
-(id)loadImage;
-(id)initWithImage:(id)arg1 ;
-(void)setUiImage:(UIImage *)arg1 ;
-(BOOL)shouldCropToCircle;
-(int)cornerRoundingStyle;
-(CGSize)size;
-(void)setUseFastPathShadow:(BOOL)arg1 ;
-(BOOL)needsTinting;
-(BOOL)isTemplate;
-(double)scale;
-(double)cornerRadius;
-(void)setNeedsTinting:(BOOL)arg1 ;
-(int)defaultCornerRoundingStyle;
-(UIImage *)uiImage;
-(SFImage *)sfImage;
-(void)loadImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)imageData;
-(unsigned long long)hash;
-(id)initWithSFImage:(id)arg1 ;
-(BOOL)useFastPathShadow;
-(BOOL)isEqual:(id)arg1 ;
@end

