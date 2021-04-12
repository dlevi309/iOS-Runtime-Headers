/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <UIKitCore/UITabBarController.h>
#import <UIKit/UITabBarControllerDelegate.h>
#import <libobjc.A.dylib/CPSTemplateEnvironmentDelegate.h>
#import <libobjc.A.dylib/CPSBaseTemplateViewController.h>
#import <libobjc.A.dylib/CPTabBarTemplateProviding.h>

@protocol CPTemplateDelegate;
@class CPTemplate, NAFuture, CPSTemplateEnvironment, NSArray, NSString;

@interface CPSTabBarViewController : UITabBarController <UITabBarControllerDelegate, CPSTemplateEnvironmentDelegate, CPSBaseTemplateViewController, CPTabBarTemplateProviding> {

	NAFuture* _templateProviderFuture;
	CPTemplate* _associatedTemplate;
	id<CPTemplateDelegate> _templateDelegate;
	CPSTemplateEnvironment* _templateEnvironment;

}

@property (assign,nonatomic,__weak) CPSTemplateEnvironment * templateEnvironment;              //@synthesize templateEnvironment=_templateEnvironment - In the implementation block
@property (nonatomic,readonly) NAFuture * templateProviderFuture;                              //@synthesize templateProviderFuture=_templateProviderFuture - In the implementation block
@property (nonatomic,retain) CPTemplate * associatedTemplate;                                  //@synthesize associatedTemplate=_associatedTemplate - In the implementation block
@property (nonatomic,retain) id<CPTemplateDelegate> templateDelegate;                          //@synthesize templateDelegate=_templateDelegate - In the implementation block
@property (nonatomic,readonly) NSArray * tabBarButtons; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)restoresFocusAfterTransition;
-(void)tabBarController:(id)arg1 didSelectViewController:(id)arg2 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)invalidate;
-(NSArray *)tabBarButtons;
-(id<CPTemplateDelegate>)templateDelegate;
-(void)setTemplateDelegate:(id<CPTemplateDelegate>)arg1 ;
-(NAFuture *)templateProviderFuture;
-(CPTemplate *)associatedTemplate;
-(void)setAssociatedTemplate:(CPTemplate *)arg1 ;
-(void)applicationDidBecomeNowPlayingApp:(BOOL)arg1 ;
-(CPSTemplateEnvironment *)templateEnvironment;
-(id)initWithTabBarTemplate:(id)arg1 templateDelegate:(id)arg2 templateEnvironment:(id)arg3 ;
-(void)setTemplateEnvironment:(CPSTemplateEnvironment *)arg1 ;
-(void)showNowPlayingButton:(BOOL)arg1 ;
-(void)_nowPlayingButtonTapped;
-(id)tabBarTemplateDelegate;
-(id)tabBarTemplate;
@end

