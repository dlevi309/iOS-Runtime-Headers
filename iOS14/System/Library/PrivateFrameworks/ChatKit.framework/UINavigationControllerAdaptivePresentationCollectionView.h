/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/CKAdaptivePresentedControllerProtocol.h>

@class NSString;

@interface UINavigationControllerAdaptivePresentationCollectionView : UINavigationController <CKAdaptivePresentedControllerProtocol> {

	BOOL _wantsWindowedPresentation;
	BOOL _preserveModalPresentationStyle;

}

@property (assign,nonatomic) BOOL wantsWindowedPresentation;                   //@synthesize wantsWindowedPresentation=_wantsWindowedPresentation - In the implementation block
@property (assign,nonatomic) BOOL preserveModalPresentationStyle;              //@synthesize preserveModalPresentationStyle=_preserveModalPresentationStyle - In the implementation block
@property (assign,nonatomic) BOOL shouldHidePresentingWindow; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)wantsWindowedPresentation;
-(void)setWantsWindowedPresentation:(BOOL)arg1 ;
-(BOOL)preserveModalPresentationStyle;
-(void)setPreserveModalPresentationStyle:(BOOL)arg1 ;
@end

