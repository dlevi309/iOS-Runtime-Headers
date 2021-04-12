/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage;

@interface UIShadowView : UIView {

	UIImage* _image;

}
+(id)topShadowImage;
+(id)bottomShadowImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setShadowImage:(id)arg1 forEdge:(unsigned long long)arg2 inside:(BOOL)arg3 ;
@end

