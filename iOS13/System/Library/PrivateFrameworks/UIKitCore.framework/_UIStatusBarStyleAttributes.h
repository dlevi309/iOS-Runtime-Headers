/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UITraitCollection, UIFont, UIColor, NSArray;

@interface _UIStatusBarStyleAttributes : NSObject <NSSecureCoding, NSCopying> {

	long long _style;
	long long _mode;
	UITraitCollection* _traitCollection;
	long long _effectiveLayoutDirection;
	double _iconScale;
	long long _symbolScale;
	UIFont* _font;
	UIFont* _emphasizedFont;
	UIFont* _smallFont;
	UIColor* _textColor;
	UIColor* _imageTintColor;
	UIColor* _imageDimmedTintColor;
	NSArray* _imageNamePrefixes;

}

@property (nonatomic,copy) UITraitCollection * traitCollection;                 //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,readonly) long long style;                                 //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) long long mode;                                  //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) long long effectiveLayoutDirection;              //@synthesize effectiveLayoutDirection=_effectiveLayoutDirection - In the implementation block
@property (assign,nonatomic) double iconScale;                                  //@synthesize iconScale=_iconScale - In the implementation block
@property (assign,nonatomic) long long symbolScale;                             //@synthesize symbolScale=_symbolScale - In the implementation block
@property (nonatomic,copy) UIFont * font;                                       //@synthesize font=_font - In the implementation block
@property (nonatomic,copy) UIFont * emphasizedFont;                             //@synthesize emphasizedFont=_emphasizedFont - In the implementation block
@property (nonatomic,copy) UIFont * smallFont;                                  //@synthesize smallFont=_smallFont - In the implementation block
@property (nonatomic,copy) UIColor * textColor;                                 //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,copy) UIColor * imageTintColor;                            //@synthesize imageTintColor=_imageTintColor - In the implementation block
@property (nonatomic,copy) UIColor * imageDimmedTintColor;                      //@synthesize imageDimmedTintColor=_imageDimmedTintColor - In the implementation block
@property (nonatomic,copy) NSArray * imageNamePrefixes;                         //@synthesize imageNamePrefixes=_imageNamePrefixes - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)overriddenStyleAttributes;
+(id)styleAttributesForStatusBar:(id)arg1 style:(long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)mode;
-(long long)style;
-(void)setTextColor:(UIColor *)arg1 ;
-(UITraitCollection *)traitCollection;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(UIColor *)textColor;
-(void)setImageTintColor:(UIColor *)arg1 ;
-(UIColor *)imageTintColor;
-(double)iconScale;
-(UIFont *)smallFont;
-(long long)effectiveLayoutDirection;
-(UIColor *)imageDimmedTintColor;
-(id)fontForStyle:(long long)arg1 ;
-(NSArray *)imageNamePrefixes;
-(void)setIconScale:(double)arg1 ;
-(long long)symbolScale;
-(void)setSmallFont:(UIFont *)arg1 ;
-(void)setEmphasizedFont:(UIFont *)arg1 ;
-(void)setImageDimmedTintColor:(UIColor *)arg1 ;
-(void)setImageNamePrefixes:(NSArray *)arg1 ;
-(void)setSymbolScale:(long long)arg1 ;
-(UIFont *)emphasizedFont;
-(id)styleAttributesWithOverrides:(id)arg1 ;
@end

