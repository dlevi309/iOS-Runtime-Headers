/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

