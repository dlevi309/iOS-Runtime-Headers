/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIImage, UIImageSymbolConfiguration, UIColor;

@interface UIListContentImageProperties : NSObject <NSCopying, NSSecureCoding> {

	struct {
		unsigned hasCustomizedPreferredSymbolConfiguration : 1;
		unsigned hasCustomizedTintColor : 1;
		unsigned hasCustomizedTintColorTransformer : 1;
		unsigned hasCustomizedCornerRadius : 1;
		unsigned hasCustomizedReservedLayoutSize : 1;
		unsigned hasCustomizedMaximumSize : 1;
		unsigned hasCustomizedAccessibilityIgnoresInvertColors : 1;
	}  _imageFlags;
	BOOL _accessibilityIgnoresInvertColors;
	UIImage* _image;
	UIImageSymbolConfiguration* _preferredSymbolConfiguration;
	UIColor* _tintColor;
	/*^block*/id _tintColorTransformer;
	double _cornerRadius;
	long long _tintColorTransformerIdentifier;
	CGSize _reservedLayoutSize;
	CGSize _maximumSize;

}

@property (nonatomic,copy) UIImageSymbolConfiguration * preferredSymbolConfiguration; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,copy) id tintColorTransformer; 
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) CGSize maximumSize; 
@property (assign,nonatomic) CGSize reservedLayoutSize; 
@property (assign,nonatomic) BOOL accessibilityIgnoresInvertColors; 
+(BOOL)supportsSecureCoding;
-(void)setTintColor:(UIColor *)arg1 ;
-(id)init;
-(CGSize)maximumSize;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setReservedLayoutSize:(CGSize)arg1 ;
-(void)setAccessibilityIgnoresInvertColors:(BOOL)arg1 ;
-(BOOL)accessibilityIgnoresInvertColors;
-(void)setPreferredSymbolConfiguration:(UIImageSymbolConfiguration *)arg1 ;
-(double)cornerRadius;
-(id)description;
-(id)resolvedTintColorForTintColor:(id)arg1 ;
-(void)setTintColorTransformer:(id)arg1 ;
-(id)tintColorTransformer;
-(CGSize)reservedLayoutSize;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(UIImageSymbolConfiguration *)preferredSymbolConfiguration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMaximumSize:(CGSize)arg1 ;
-(UIColor *)tintColor;
-(BOOL)isEqual:(id)arg1 ;
@end

