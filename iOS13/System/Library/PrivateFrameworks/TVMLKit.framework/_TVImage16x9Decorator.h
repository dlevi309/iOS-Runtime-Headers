/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/TVImageScaleDecorator.h>

@class NSString;

@interface _TVImage16x9Decorator : TVImageScaleDecorator {

	NSString* _inlineTitle;

}

@property (nonatomic,copy) NSString * inlineTitle;              //@synthesize inlineTitle=_inlineTitle - In the implementation block
-(id)decoratorIdentifier;
-(id)decorate:(id)arg1 scaledWithSize:(CGSize)arg2 croppedToFit:(BOOL)arg3 ;
-(id)initWithInlineTitle:(id)arg1 ;
-(NSString *)inlineTitle;
-(void)setInlineTitle:(NSString *)arg1 ;
@end

