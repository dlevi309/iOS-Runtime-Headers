/*
* Generated on Monday, March 1, 2021 at 2:34:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/TUDeselectable.h>
#import <libobjc.A.dylib/TUKeyCommandTraversable.h>
#import <libobjc.A.dylib/TUPluggable.h>

@interface NewsUI2.MyMagazinesViewController : UIViewController <TUDeselectable, TUKeyCommandTraversable, TUPluggable> {

	 isBeingUsedAsPlugin;
	 pluggableDelegate;
	 styler;
	 eventHandler;
	 blueprintViewController;
	 offlineAlertControllerFactory;
	 lastComputedSize;
	 eventManager;

}

@property (assign,nonatomic) BOOL isBeingUsedAsPlugin; 
@property (assign,__weak,nonatomic) id<TUPluggableDelegate> pluggableDelegate; 
-(void)deselect;
-(void)startTraversingWithDirection:(long long)arg1 ;
-(void)initializeWithCompletion:(/*^block*/id)arg1 ;
-(void)relayoutWithCompletion:(/*^block*/id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id<TUPluggableDelegate>)pluggableDelegate;
-(void)setPluggableDelegate:(id<TUPluggableDelegate>)arg1 ;
-(BOOL)isBeingUsedAsPlugin;
-(void)setIsBeingUsedAsPlugin:(BOOL)arg1 ;
@end

