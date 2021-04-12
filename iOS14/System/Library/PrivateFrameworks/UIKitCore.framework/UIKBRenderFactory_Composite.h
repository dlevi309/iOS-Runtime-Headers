/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKBRenderFactoryiPhone.h>

@class UIKBRenderFactory;

@interface UIKBRenderFactory_Composite : UIKBRenderFactoryiPhone {

	UIKBRenderFactory* _overlayFactory;

}
-(CGPoint)popupSymbolTextOffset;
-(CGPoint)variantSymbolTextOffset;
-(CGPoint)variantAnnotationTextOffset;
-(double)popupFontSize;
-(id)initWithRenderingContext:(id)arg1 skipLayoutSegments:(BOOL)arg2 ;
-(UIEdgeInsets)wideShadowPopupMenuInsets;
-(UIEdgeInsets)variantPaddedFrameInsets;
-(Class)_overlayFactoryClass;
-(UIEdgeInsets)wideShadowPaddleInsets;
-(BOOL)isTallPopup;
-(UIEdgeInsets)variantSymbolFrameInsets;
-(void)dealloc;
@end

