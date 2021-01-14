/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/TVImageScaleDecorator.h>

@class NSString;

@interface _TVImageKeyFrameArtDecorator : TVImageScaleDecorator {

	NSString* _inlineTitle;

}

@property (nonatomic,copy) NSString * inlineTitle;              //@synthesize inlineTitle=_inlineTitle - In the implementation block
-(void)setInlineTitle:(NSString *)arg1 ;
-(NSString *)inlineTitle;
-(id)decoratorIdentifier;
-(id)decorate:(id)arg1 scaledWithSize:(CGSize)arg2 croppedToFit:(BOOL)arg3 ;
-(id)initWithInlineTitle:(id)arg1 ;
@end

