/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKBRenderFactoryiPhone.h>

@class UIKBRenderFactory;

@interface UIKBRenderFactory_Composite : UIKBRenderFactoryiPhone {

	UIKBRenderFactory* _overlayFactory;

}
-(void)dealloc;
-(id)initWithRenderingContext:(id)arg1 skipLayoutSegments:(BOOL)arg2 ;
-(UIEdgeInsets)wideShadowPaddleInsets;
-(double)popupFontSize;
-(CGPoint)popupSymbolTextOffset;
-(UIEdgeInsets)wideShadowPopupMenuInsets;
-(CGPoint)variantSymbolTextOffset;
-(CGPoint)variantAnnotationTextOffset;
-(UIEdgeInsets)variantSymbolFrameInsets;
-(UIEdgeInsets)variantPaddedFrameInsets;
-(BOOL)isTallPopup;
-(Class)_overlayFactoryClass;
@end

