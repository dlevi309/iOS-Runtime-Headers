/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/TVImageScaleDecorator.h>

@class IKColor;

@interface _TVTintedImageDecorator : TVImageScaleDecorator {

	IKColor* _tintColor;

}

@property (nonatomic,retain,readonly) IKColor * tintColor;              //@synthesize tintColor=_tintColor - In the implementation block
-(IKColor *)tintColor;
-(void)drawInContext:(id)arg1 imageRect:(CGRect)arg2 ;
-(id)decoratorIdentifier;
-(id)initWithTintColor:(id)arg1 ;
@end

