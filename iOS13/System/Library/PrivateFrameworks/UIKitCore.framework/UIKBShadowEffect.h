/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIKBRenderEffect.h>

@class NSString, UIKBGradient;

@interface UIKBShadowEffect : NSObject <UIKBRenderEffect> {

	NSString* _colorName;
	double _weight;
	CGSize _offset;
	UIEdgeInsets _insets;
	UIEdgeInsets _concaveInsets;

}

@property (assign,nonatomic) CGSize offset;                           //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) UIEdgeInsets insets;                     //@synthesize insets=_insets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets concaveInsets;              //@synthesize concaveInsets=_concaveInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) BOOL renderUnder; 
@property (nonatomic,readonly) SEL renderSelector; 
@property (assign,nonatomic) double weight;                           //@synthesize weight=_weight - In the implementation block
@property (nonatomic,readonly) BOOL usesRGBColors; 
@property (nonatomic,readonly) UIKBGradient * gradient; 
+(id)effectWithColor:(id)arg1 offset:(CGSize)arg2 insets:(UIEdgeInsets)arg3 weight:(double)arg4 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isValid;
-(CGColorRef)CGColor;
-(void)setOffset:(CGSize)arg1 ;
-(void)setWeight:(double)arg1 ;
-(double)weight;
-(CGSize)offset;
-(BOOL)renderUnder;
-(SEL)renderSelector;
-(BOOL)usesRGBColors;
-(UIKBGradient *)gradient;
-(UIEdgeInsets)insets;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(id)initWithColor:(id)arg1 offset:(CGSize)arg2 insets:(UIEdgeInsets)arg3 weight:(double)arg4 ;
-(UIEdgeInsets)concaveInsets;
-(void)setConcaveInsets:(UIEdgeInsets)arg1 ;
@end

