/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) BOOL renderUnder; 
@property (nonatomic,readonly) SEL renderSelector; 
@property (assign,nonatomic) double weight;                         //@synthesize weight=_weight - In the implementation block
@property (nonatomic,readonly) BOOL usesRGBColors; 
+(id)effectWithColor:(id)arg1 edges:(unsigned long long)arg2 inset:(double)arg3 weight:(double)arg4 ;
+(id)effectWithColor:(id)arg1 edges:(unsigned long long)arg2 insets:(UIEdgeInsets)arg3 weight:(double)arg4 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isValid;
-(CGColorRef)CGColor;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(void)setWeight:(double)arg1 ;
-(double)weight;
-(unsigned long long)edges;
-(void)setEdges:(unsigned long long)arg1 ;
-(void)setGradient:(UIKBGradient *)arg1 ;
-(BOOL)renderUnder;
-(SEL)renderSelector;
-(BOOL)usesRGBColors;
-(UIKBGradient *)gradient;
-(id)initWithColor:(id)arg1 edges:(unsigned long long)arg2 insets:(UIEdgeInsets)arg3 weight:(double)arg4 ;
-(UIEdgeInsets)insets;
-(void)setInsets:(UIEdgeInsets)arg1 ;
@end

