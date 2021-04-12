/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
*/

#import <IntentsUI/IntentsUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/_INUIRemoteViewControllerServing.h>

@protocol INUIHostedViewControlling;
@class UIViewController, INInteraction, NSString;

@interface _INUIServiceViewController : UIViewController <_INUIRemoteViewControllerServing> {

	UIViewController*<INUIHostedViewControlling> _hostedViewController;
	INInteraction* _currentInteraction;
	unsigned long long _currentContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_isSecureForRemoteViewService;
+(id)_remoteViewControllerInterface;
+(id)_exportedInterface;
-(void)viewWillLayoutSubviews;
-(void)addChildViewController:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)configureForParameters:(id)arg1 ofInteraction:(id)arg2 interactiveBehavior:(unsigned long long)arg3 context:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)viewWasCancelled;
-(void)desiresInteractivity:(/*^block*/id)arg1 ;
-(void)queryRepresentedPropertiesWithCompletion:(/*^block*/id)arg1 ;
-(id)_errorHandlingRemoteViewControllerProxy;
-(CGSize)_constrainedSizeForDesiredSize:(CGSize)arg1 ;
@end

