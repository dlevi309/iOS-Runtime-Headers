/*
* Generated on Thursday, January 14, 2021 at 2:21:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UIAlertController.h>
#import <libobjc.A.dylib/CKAdaptivePresentedControllerProtocol.h>

@protocol CKAlertControllerDelegate;
@class NSArray, NSString;

@interface CKAlertController : UIAlertController <CKAdaptivePresentedControllerProtocol> {

	BOOL _wantsWindowedPresentation;
	BOOL _preserveModalPresentationStyle;
	BOOL _shouldHidePresentingWindow;
	id<CKAlertControllerDelegate> _alertDelegate;

}

@property (assign,nonatomic,__weak) id<CKAlertControllerDelegate> alertDelegate;              //@synthesize alertDelegate=_alertDelegate - In the implementation block
@property (nonatomic,readonly) NSArray * actions; 
@property (assign,nonatomic) BOOL wantsWindowedPresentation;                                  //@synthesize wantsWindowedPresentation=_wantsWindowedPresentation - In the implementation block
@property (assign,nonatomic) BOOL preserveModalPresentationStyle;                             //@synthesize preserveModalPresentationStyle=_preserveModalPresentationStyle - In the implementation block
@property (assign,nonatomic) BOOL shouldHidePresentingWindow;                                 //@synthesize shouldHidePresentingWindow=_shouldHidePresentingWindow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)alertControllerWithTitle:(id)arg1 message:(id)arg2 preferredStyle:(long long)arg3 ;
-(id<CKAlertControllerDelegate>)alertDelegate;
-(BOOL)allowsRotation;
-(void)setAlertDelegate:(id<CKAlertControllerDelegate>)arg1 ;
-(void)addAction:(id)arg1 ;
-(void)presentFromViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)wantsWindowedPresentation;
-(void)setWantsWindowedPresentation:(BOOL)arg1 ;
-(BOOL)preserveModalPresentationStyle;
-(void)setPreserveModalPresentationStyle:(BOOL)arg1 ;
-(BOOL)shouldHidePresentingWindow;
-(void)setShouldHidePresentingWindow:(BOOL)arg1 ;
@end

