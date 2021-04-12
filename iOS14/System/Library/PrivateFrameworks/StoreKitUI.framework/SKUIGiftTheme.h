/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, UIImage, NSURL, NSString;

@interface SKUIGiftTheme : NSObject <NSCopying> {

	UIColor* _backgroundColor;
	UIColor* _bodyTextColor;
	UIImage* _headerImage;
	NSURL* _headerImageURL;
	UIColor* _primaryTextColor;
	long long _themeIdentifier;
	NSString* _themeName;

}

@property (assign,nonatomic) long long themeIdentifier;              //@synthesize themeIdentifier=_themeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * themeName;                     //@synthesize themeName=_themeName - In the implementation block
@property (nonatomic,copy) UIColor * backgroundColor;                //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) UIColor * bodyTextColor;                  //@synthesize bodyTextColor=_bodyTextColor - In the implementation block
@property (nonatomic,copy) UIColor * primaryTextColor;               //@synthesize primaryTextColor=_primaryTextColor - In the implementation block
@property (nonatomic,retain) UIImage * headerImage;                  //@synthesize headerImage=_headerImage - In the implementation block
@property (nonatomic,copy) NSURL * headerImageURL;                   //@synthesize headerImageURL=_headerImageURL - In the implementation block
-(UIColor *)primaryTextColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(id)description;
-(void)setPrimaryTextColor:(UIColor *)arg1 ;
-(void)setHeaderImage:(UIImage *)arg1 ;
-(UIImage *)headerImage;
-(void)setThemeIdentifier:(long long)arg1 ;
-(UIColor *)bodyTextColor;
-(void)setBodyTextColor:(UIColor *)arg1 ;
-(long long)themeIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)themeName;
-(id)initWithThemeDictionary:(id)arg1 ;
-(NSURL *)headerImageURL;
-(void)setHeaderImageURL:(NSURL *)arg1 ;
-(void)setThemeName:(NSString *)arg1 ;
@end

