/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/TVImageScaleDecorator.h>

@class UIColor;

@interface _TVMonogramDecorator : TVImageScaleDecorator {

	UIColor* _borderColor;
	double _borderWidth;

}

@property (nonatomic,retain) UIColor * borderColor;              //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) double borderWidth;                 //@synthesize borderWidth=_borderWidth - In the implementation block
-(void)setBorderColor:(UIColor *)arg1 ;
-(double)borderWidth;
-(void)setBorderWidth:(double)arg1 ;
-(UIColor *)borderColor;
-(BOOL)needsAlphaForImage:(id)arg1 ;
-(void)drawInContext:(id)arg1 imageRect:(CGRect)arg2 ;
-(id)decoratorIdentifier;
@end

