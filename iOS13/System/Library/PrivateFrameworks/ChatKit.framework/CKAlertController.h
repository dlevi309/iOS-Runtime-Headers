/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UIAlertController.h>
#import <libobjc.A.dylib/CKAdaptivePresentedControllerProtocol.h>

@protocol CKAlertControllerDelegate;
@class NSArray, NSString;

@interface CKAlertController : UIAlertController <CKAdaptivePresentedControllerProtocol> {

	id<CKAlertControllerDelegate> _alertDelegate;

}

@property (assign,nonatomic,__weak) id<CKAlertControllerDelegate> alertDelegate;              //@synthesize alertDelegate=_alertDelegate - In the implementation block
@property (nonatomic,readonly) NSArray * actions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addAction:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)allowsRotation;
-(void)setAlertDelegate:(id<CKAlertControllerDelegate>)arg1 ;
-(id<CKAlertControllerDelegate>)alertDelegate;
-(BOOL)wantsWindowedPresentation;
-(BOOL)preserveModalPresentationStyle;
@end

