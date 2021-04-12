/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class NSAttributedString, NSDictionary, UIColor;

@interface JTEffectTextEditingProperties : NSObject {

	BOOL _isAllCaps;
	BOOL _isEmoji;
	NSAttributedString* _attributedText;
	NSDictionary* _defaultTypingAttributes;
	UIColor* _customColor;
	UIColor* _customTextEditTintColor;
	double _rotation;
	CGSize _size;
	CGPoint _center;
	CGPoint _scale;

}

@property (nonatomic,copy) NSAttributedString * attributedText;                 //@synthesize attributedText=_attributedText - In the implementation block
@property (assign,nonatomic) BOOL isAllCaps;                                    //@synthesize isAllCaps=_isAllCaps - In the implementation block
@property (nonatomic,copy) NSDictionary * defaultTypingAttributes;              //@synthesize defaultTypingAttributes=_defaultTypingAttributes - In the implementation block
@property (nonatomic,copy) UIColor * customColor;                               //@synthesize customColor=_customColor - In the implementation block
@property (nonatomic,copy) UIColor * customTextEditTintColor;                   //@synthesize customTextEditTintColor=_customTextEditTintColor - In the implementation block
@property (assign,nonatomic) double rotation;                                   //@synthesize rotation=_rotation - In the implementation block
@property (assign,nonatomic) CGSize size;                                       //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) CGPoint center;                                    //@synthesize center=_center - In the implementation block
@property (assign,nonatomic) CGPoint scale;                                     //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) BOOL isEmoji;                                      //@synthesize isEmoji=_isEmoji - In the implementation block
-(CGSize)size;
-(CGPoint)scale;
-(void)setSize:(CGSize)arg1 ;
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1 ;
-(void)setScale:(CGPoint)arg1 ;
-(double)rotation;
-(void)setRotation:(double)arg1 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedText;
-(BOOL)isEmoji;
-(BOOL)isAllCaps;
-(void)setIsAllCaps:(BOOL)arg1 ;
-(NSDictionary *)defaultTypingAttributes;
-(void)setDefaultTypingAttributes:(NSDictionary *)arg1 ;
-(UIColor *)customColor;
-(void)setCustomColor:(UIColor *)arg1 ;
-(UIColor *)customTextEditTintColor;
-(void)setCustomTextEditTintColor:(UIColor *)arg1 ;
-(void)setIsEmoji:(BOOL)arg1 ;
@end

