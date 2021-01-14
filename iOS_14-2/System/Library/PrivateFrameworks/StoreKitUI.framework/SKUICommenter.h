/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIMediaSocialAuthor.h>

@class NSString, UIImage;

@interface SKUICommenter : SKUIMediaSocialAuthor {

	BOOL _isAttributed;
	BOOL _isMySelf;
	BOOL _useImageCopy;
	NSString* _attributedName;
	UIImage* _thumbnailImage;

}

@property (nonatomic,retain) NSString * attributedName;              //@synthesize attributedName=_attributedName - In the implementation block
@property (assign,nonatomic) BOOL isAttributed;                      //@synthesize isAttributed=_isAttributed - In the implementation block
@property (assign,nonatomic) BOOL isMySelf;                          //@synthesize isMySelf=_isMySelf - In the implementation block
@property (assign,nonatomic) BOOL useImageCopy;                      //@synthesize useImageCopy=_useImageCopy - In the implementation block
@property (nonatomic,copy) UIImage * thumbnailImage;                 //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
-(UIImage *)thumbnailImage;
-(NSString *)attributedName;
-(BOOL)isAttributed;
-(void)setAttributedName:(NSString *)arg1 ;
-(void)setThumbnailImage:(UIImage *)arg1 ;
-(BOOL)isMySelf;
-(id)initWithAuthor:(id)arg1 ;
-(void)setIsMySelf:(BOOL)arg1 ;
-(void)setIsAttributed:(BOOL)arg1 ;
-(BOOL)useImageCopy;
-(void)setUseImageCopy:(BOOL)arg1 ;
@end

