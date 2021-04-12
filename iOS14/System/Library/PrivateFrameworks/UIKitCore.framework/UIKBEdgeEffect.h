/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIKBRenderEffect.h>

@class NSString, UIKBGradient;

@interface UIKBEdgeEffect : NSObject <UIKBRenderEffect> {

	NSString* _colorName;
	unsigned long long _edges;
	double _weight;
	UIKBGradient* _gradient;
	double _opacity;
	UIEdgeInsets _insets;

}

@property (assign,nonatomic) unsigned long long edges;              //@synthesize edges=_edges - In the implementation block
@property (assign,nonatomic) UIEdgeInsets insets;                   //@synthesize insets=_insets - In the implementation block
@property (nonatomic,retain) UIKBGradient * gradient;               //@synthesize gradient=_gradient - In the implementation block
@property (assign,nonatomic) double opacity;                        //@synthesize opacity=_opacity - In the implementation block
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) BOOL renderUnder; 
@property (nonatomic,readonly) SEL renderSelector; 
@property (assign,nonatomic) double weight;                         //@synthesize weight=_weight - In the implementation block
@property (nonatomic,readonly) BOOL usesRGBColors; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)effectWithColor:(id)arg1 edges:(unsigned long long)arg2 insets:(UIEdgeInsets)arg3 weight:(double)arg4 ;
+(id)effectWithColor:(id)arg1 edges:(unsigned long long)arg2 inset:(double)arg3 weight:(double)arg4 ;
-(CGColorRef)CGColor;
-(BOOL)renderUnder;
-(void)setWeight:(double)arg1 ;
-(double)opacity;
-(double)weight;
-(void)setOpacity:(double)arg1 ;
-(unsigned long long)edges;
-(NSString *)description;
-(BOOL)isValid;
-(BOOL)usesRGBColors;
-(UIEdgeInsets)insets;
-(id)initWithColor:(id)arg1 edges:(unsigned long long)arg2 insets:(UIEdgeInsets)arg3 weight:(double)arg4 ;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(void)setEdges:(unsigned long long)arg1 ;
-(SEL)renderSelector;
-(void)setGradient:(UIKBGradient *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(UIKBGradient *)gradient;
-(void)dealloc;
@end

