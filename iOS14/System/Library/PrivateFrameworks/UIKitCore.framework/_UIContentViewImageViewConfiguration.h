/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIImage, UIImageSymbolConfiguration, UIColor;

@interface _UIContentViewImageViewConfiguration : NSObject <NSCopying, NSSecureCoding> {

	struct {
		unsigned hasCustomizedImage : 1;
		unsigned hasCustomizedPreferredSymbolConfiguration : 1;
		unsigned hasCustomizedTintColor : 1;
		unsigned hasCustomizedCornerRadius : 1;
		unsigned hasCustomizedReservedLayoutSize : 1;
		unsigned hasCustomizedMaximumSize : 1;
	}  _configurationFlags;
	UIImage* _image;
	UIImageSymbolConfiguration* _preferredSymbolConfiguration;
	UIColor* _tintColor;
	double _cornerRadius;
	UIImage* _highlightedImage;
	CGSize _reservedLayoutSize;
	CGSize _maximumSize;

}

@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,copy) UIImageSymbolConfiguration * preferredSymbolConfiguration; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) CGSize reservedLayoutSize; 
@property (assign,nonatomic) CGSize maximumSize; 
@property (assign,nonatomic) double horizontalCenteringWidth; 
@property (nonatomic,retain) UIImage * highlightedImage;                                           //@synthesize highlightedImage=_highlightedImage - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setImage:(UIImage *)arg1 ;
-(void)setTintColor:(UIColor *)arg1 ;
-(id)init;
-(CGSize)maximumSize;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setReservedLayoutSize:(CGSize)arg1 ;
-(void)setHorizontalCenteringWidth:(double)arg1 ;
-(double)horizontalCenteringWidth;
-(void)setPreferredSymbolConfiguration:(UIImageSymbolConfiguration *)arg1 ;
-(UIImage *)image;
-(double)cornerRadius;
-(id)description;
-(CGSize)reservedLayoutSize;
-(void)applyToImageView:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(UIImage *)highlightedImage;
-(void)setHighlightedImage:(UIImage *)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(UIImageSymbolConfiguration *)preferredSymbolConfiguration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMaximumSize:(CGSize)arg1 ;
-(UIColor *)tintColor;
-(BOOL)isEqual:(id)arg1 ;
@end

