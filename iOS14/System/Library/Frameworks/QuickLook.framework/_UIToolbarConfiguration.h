/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QuickLook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage, UIColor;

@interface _UIToolbarConfiguration : NSObject <NSCopying> {

	BOOL _translucent;
	long long _barStyle;
	UIImage* _shadowImage;
	UIImage* _backgroundImage;
	UIColor* _backgroundColor;
	UIColor* _barTintColor;

}

@property (assign,nonatomic) long long barStyle;                                 //@synthesize barStyle=_barStyle - In the implementation block
@property (assign,getter=isTranslucent,nonatomic) BOOL translucent;              //@synthesize translucent=_translucent - In the implementation block
@property (nonatomic,retain) UIImage * shadowImage;                              //@synthesize shadowImage=_shadowImage - In the implementation block
@property (nonatomic,retain) UIImage * backgroundImage;                          //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                          //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * barTintColor;                             //@synthesize barTintColor=_barTintColor - In the implementation block
-(void)setBarTintColor:(UIColor *)arg1 ;
-(void)setTranslucent:(BOOL)arg1 ;
-(void)setBarStyle:(long long)arg1 ;
-(long long)barStyle;
-(UIImage *)shadowImage;
-(BOOL)isTranslucent;
-(void)setShadowImage:(UIImage *)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(UIColor *)backgroundColor;
-(UIImage *)backgroundImage;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)barTintColor;
@end

