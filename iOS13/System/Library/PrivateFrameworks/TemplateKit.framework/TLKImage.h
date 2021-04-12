/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <TemplateKit/TLKObject.h>

@class UIImage;

@interface TLKImage : TLKObject {

	BOOL _isTemplate;
	BOOL _shouldCropToCircle;
	BOOL _useFastPathShadow;
	UIImage* _uiImage;
	double _cornerRadius;
	CGSize _size;

}

@property (nonatomic,readonly) UIImage * uiImageToRender; 
@property (nonatomic,retain) UIImage * uiImage;                        //@synthesize uiImage=_uiImage - In the implementation block
@property (assign,nonatomic) CGSize size;                              //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) BOOL isTemplate;                          //@synthesize isTemplate=_isTemplate - In the implementation block
@property (assign,nonatomic) BOOL shouldCropToCircle;                  //@synthesize shouldCropToCircle=_shouldCropToCircle - In the implementation block
@property (assign,nonatomic) double cornerRadius;                      //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) BOOL useFastPathShadow;                   //@synthesize useFastPathShadow=_useFastPathShadow - In the implementation block
-(id)init;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(BOOL)isTemplate;
-(void)setIsTemplate:(BOOL)arg1 ;
-(BOOL)shouldCropToCircle;
-(void)setShouldCropToCircle:(BOOL)arg1 ;
-(UIImage *)uiImageToRender;
-(BOOL)useFastPathShadow;
-(UIImage *)uiImage;
-(void)setUiImage:(UIImage *)arg1 ;
-(void)setUseFastPathShadow:(BOOL)arg1 ;
@end

