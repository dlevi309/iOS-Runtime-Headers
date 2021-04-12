/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <PencilKit/PKStroke.h>

@class UIColor;

@interface PKMutableStroke : PKStroke {

	UIColor* __color;

}

@property (nonatomic,copy) UIColor * _color;              //@synthesize _color=__color - In the implementation block
-(UIColor *)_color;
-(void)_setColor:(id)arg1 ;
-(void)_applyTransform:(CGAffineTransform)arg1 ;
-(void)_setLocation:(CGPoint)arg1 atIndex:(unsigned long long)arg2 ;
-(void)set_color:(UIColor *)arg1 ;
@end

