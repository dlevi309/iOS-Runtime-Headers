/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class PXGadgetNavigationHelper;


@protocol PXGadgetDelegate <NSObject>
@property (nonatomic,readonly) id<PXGadgetTransition> gadgetTransition; 
@property (nonatomic,readonly) PXGadgetNavigationHelper * rootNavigationHelper; 
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> nextGadgetResponder; 
@optional
-(id)gadgetViewControllerHostingGadget:(id)arg1;
-(void)gadget:(id)arg1 animateChanges:(/*^block*/id)arg2;
-(id<PXGadgetDelegate>)nextGadgetResponder;
-(void)setNextGadgetResponder:(id)arg1;
-(void)gadget:(id)arg1 didChange:(unsigned long long)arg2;

@required
-(BOOL)gadget:(id)arg1 transitionToViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(id<PXGadgetTransition>)gadgetTransition;
-(PXGadgetNavigationHelper *)rootNavigationHelper;
-(void)presentGadgetViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)dismissGadgetViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;

@end

