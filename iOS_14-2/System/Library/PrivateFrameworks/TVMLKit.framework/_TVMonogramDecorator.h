/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIColor *)borderColor;
-(double)borderWidth;
-(void)setBorderColor:(UIColor *)arg1 ;
-(void)setBorderWidth:(double)arg1 ;
-(id)decoratorIdentifier;
-(BOOL)needsAlphaForImage:(id)arg1 ;
-(void)drawInContext:(id)arg1 imageRect:(CGRect)arg2 ;
@end

