/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
*/

#import <VideosUICore/VideosUICore-Structs.h>
#import <VideosUICore/VUIImageScaleDecorator.h>

@class IKColor;

@interface VUITintedImageDecorator : VUIImageScaleDecorator {

	IKColor* _tintColor;

}

@property (nonatomic,retain,readonly) IKColor * tintColor;              //@synthesize tintColor=_tintColor - In the implementation block
-(id)initWithTintColor:(id)arg1 ;
-(IKColor *)tintColor;
-(id)decoratorIdentifier;
-(void)drawInContext:(id)arg1 imageRect:(CGRect)arg2 ;
@end

