/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
*/

#import <UIKitCore/UIAlertController.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol _SBAlertControllerDelegate, UIAlertControllerVisualStyleProviding;
@class SBAlertItem, NSString;

@interface _SBAlertController : UIAlertController <BSDescriptionProviding> {

	SBAlertItem* _alertItem;
	id<_SBAlertControllerDelegate> _alertControllerDelegate;
	id<UIAlertControllerVisualStyleProviding> _styleProvider;

}

@property (assign,nonatomic,__weak) SBAlertItem * alertItem;                                             //@synthesize alertItem=_alertItem - In the implementation block
@property (assign,nonatomic,__weak) id<_SBAlertControllerDelegate> alertControllerDelegate;              //@synthesize alertControllerDelegate=_alertControllerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(void)setHiddenOnClonedDisplay:(BOOL)arg1 ;
-(SBAlertItem *)alertItem;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id<_SBAlertControllerDelegate>)alertControllerDelegate;
-(void)setAlertItem:(SBAlertItem *)arg1 ;
-(NSString *)description;
-(BOOL)_canShowWhileLocked;
-(id)initWithStyleProvider:(id)arg1 ;
-(id)_styleProvider;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setAlertControllerDelegate:(id<_SBAlertControllerDelegate>)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
@end

