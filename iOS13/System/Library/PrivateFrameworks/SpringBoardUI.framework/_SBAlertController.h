/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
*/

#import <UIKitCore/UIAlertController.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol _SBAlertControllerDelegate;
@class SBAlertItem, NSString;

@interface _SBAlertController : UIAlertController <BSDescriptionProviding> {

	SBAlertItem* _alertItem;
	id<_SBAlertControllerDelegate> _alertControllerDelegate;

}

@property (assign,nonatomic,__weak) SBAlertItem * alertItem;                                             //@synthesize alertItem=_alertItem - In the implementation block
@property (assign,nonatomic,__weak) id<_SBAlertControllerDelegate> alertControllerDelegate;              //@synthesize alertControllerDelegate=_alertControllerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(SBAlertItem *)alertItem;
-(void)setAlertItem:(SBAlertItem *)arg1 ;
-(void)setHiddenOnClonedDisplay:(BOOL)arg1 ;
-(id<_SBAlertControllerDelegate>)alertControllerDelegate;
-(void)setAlertControllerDelegate:(id<_SBAlertControllerDelegate>)arg1 ;
@end

