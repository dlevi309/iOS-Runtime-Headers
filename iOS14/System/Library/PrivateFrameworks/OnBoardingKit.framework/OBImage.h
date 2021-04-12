/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <UIKitCore/UIImage.h>

@class NSBundle, NSString, UIColor;

@interface OBImage : UIImage {

	NSBundle* _bundle;
	NSString* _name;
	long long _style;
	UIColor* _tintColor;

}

@property (nonatomic,retain) NSBundle * bundle;                //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,retain) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long style;                  //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;              //@synthesize tintColor=_tintColor - In the implementation block
+(id)imageNamed:(id)arg1 ;
+(id)imageNamed:(id)arg1 inBundle:(id)arg2 ;
+(id)_imageNameForUIInterfaceStyle:(long long)arg1 originalName:(id)arg2 ;
+(id)_imageNamed:(id)arg1 inBundle:(id)arg2 convertToMatchInterfaceStyle:(BOOL)arg3 ;
+(long long)rootInterfaceStyle;
-(NSBundle *)bundle;
-(void)setBundle:(NSBundle *)arg1 ;
-(id)imageForUserInterfaceStyle:(long long)arg1 ;
-(void)setTintColor:(UIColor *)arg1 ;
-(id)_flatImageWithColor:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(UIColor *)tintColor;
-(long long)style;
-(id)_obFlatImageWithColor:(id)arg1 ;
@end

