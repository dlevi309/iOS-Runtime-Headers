/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/TVImageScaleDecorator.h>

@class UIColor;

@interface TVImageOutlineDecorator : TVImageScaleDecorator {

	UIColor* _outlineColor;
	UIEdgeInsets _outlineWidths;

}

@property (nonatomic,copy,readonly) UIColor * outlineColor;              //@synthesize outlineColor=_outlineColor - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets outlineWidths;               //@synthesize outlineWidths=_outlineWidths - In the implementation block
+(id)decoratorWithOutlineColor:(id)arg1 outlineWidths:(UIEdgeInsets)arg2 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(UIColor *)outlineColor;
-(id)decoratorIdentifier;
-(void)drawInContext:(id)arg1 imageRect:(CGRect)arg2 ;
-(id)initWithOutlineColor:(id)arg1 outlineWidths:(UIEdgeInsets)arg2 ;
-(UIEdgeInsets)outlineWidths;
@end

