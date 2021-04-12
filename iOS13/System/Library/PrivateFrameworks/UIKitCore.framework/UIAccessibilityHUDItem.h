/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIImage, UIView;

@interface UIAccessibilityHUDItem : NSObject <NSCopying> {

	BOOL _disabledAppearance;
	BOOL _flattenImage;
	BOOL _scaleImage;
	long long _customUserInterfaceStyle;
	NSString* _title;
	UIImage* _image;
	UIView* _customView;
	UIEdgeInsets _imageInsets;

}

@property (assign,nonatomic) BOOL disabledAppearance;                         //@synthesize disabledAppearance=_disabledAppearance - In the implementation block
@property (assign,nonatomic) BOOL flattenImage;                               //@synthesize flattenImage=_flattenImage - In the implementation block
@property (assign,nonatomic) BOOL scaleImage;                                 //@synthesize scaleImage=_scaleImage - In the implementation block
@property (assign,nonatomic) long long customUserInterfaceStyle;              //@synthesize customUserInterfaceStyle=_customUserInterfaceStyle - In the implementation block
@property (nonatomic,copy) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIImage * image;                                 //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) UIEdgeInsets imageInsets;                        //@synthesize imageInsets=_imageInsets - In the implementation block
@property (nonatomic,retain) UIView * customView;                             //@synthesize customView=_customView - In the implementation block
+(id)HUDItemForTabBarItem:(id)arg1 ;
+(id)HUDItemForBarButtonItem:(id)arg1 atPoint:(CGPoint)arg2 inView:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setFlattenImage:(BOOL)arg1 ;
-(void)setImageInsets:(UIEdgeInsets)arg1 ;
-(void)setScaleImage:(BOOL)arg1 ;
-(void)setCustomView:(UIView *)arg1 ;
-(id)initWithTitle:(id)arg1 image:(id)arg2 imageInsets:(UIEdgeInsets)arg3 ;
-(id)initWithTitle:(id)arg1 image:(id)arg2 imageInsets:(UIEdgeInsets)arg3 scaleImage:(BOOL)arg4 ;
-(UIView *)customView;
-(void)setDisabledAppearance:(BOOL)arg1 ;
-(UIEdgeInsets)imageInsets;
-(BOOL)scaleImage;
-(BOOL)flattenImage;
-(BOOL)disabledAppearance;
-(long long)customUserInterfaceStyle;
-(void)setCustomUserInterfaceStyle:(long long)arg1 ;
-(id)initWithCustomView:(id)arg1 ;
@end

