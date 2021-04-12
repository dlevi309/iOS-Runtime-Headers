/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

@class NSString, UIColor;


@protocol PKInkToolButton
@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) UIColor * color; 
@property (assign,nonatomic) unsigned long long sizeState; 
@property (assign,nonatomic) BOOL isUsedOnDarkBackground; 
@property (assign,nonatomic) unsigned long long attributeSet; 
@required
+(id)buttonWithIdentifier:(id)arg1 color:(id)arg2 sizeState:(unsigned long long)arg3;
-(NSString *)identifier;
-(void)setIdentifier:(id)arg1;
-(UIColor *)color;
-(void)setColor:(id)arg1;
-(unsigned long long)attributeSet;
-(void)setAttributeSet:(unsigned long long)arg1;
-(BOOL)isUsedOnDarkBackground;
-(void)setIsUsedOnDarkBackground:(BOOL)arg1;
-(unsigned long long)sizeState;
-(void)setSizeState:(unsigned long long)arg1;
-(id)initWithIdentifier:(id)arg1 color:(id)arg2 sizeState:(unsigned long long)arg3;
-(CGSize*)sizeThatFits:(CGSize)arg1 sizeState:(unsigned long long)arg2;
-(void)setColor:(id)arg1 animated:(BOOL)arg2;

@end

