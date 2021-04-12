/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUIServices.framework/WorkflowUIServices
*/

#import <WorkflowUIServices/WorkflowUIServices-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/_UIRemoteViewControllerContaining.h>
#import <libobjc.A.dylib/WFWidgetConfigurationCardViewDelegate.h>
#import <libobjc.A.dylib/WFWidgetConfigurationRemoteViewControllerDelegate.h>

@protocol WFWidgetConfigurationViewControllerDelegate, NSCopying;
@class _UIRemoteViewController, WFWidgetConfigurationRequest, WFWidgetConfigurationHostCardView, WFWidgetConfigurationRemoteViewController, NSExtension, WFWidgetConfigurationView, NSString;

@interface WFWidgetConfigurationViewController : UIViewController <_UIRemoteViewControllerContaining, WFWidgetConfigurationCardViewDelegate, WFWidgetConfigurationRemoteViewControllerDelegate> {

	id<WFWidgetConfigurationViewControllerDelegate> _delegate;
	WFWidgetConfigurationRequest* _request;
	WFWidgetConfigurationHostCardView* _cardView;
	WFWidgetConfigurationRemoteViewController* _remoteViewController;
	NSExtension* _extension;
	id<NSCopying> _extensionRequest;

}

@property (nonatomic,readonly) WFWidgetConfigurationRequest * request;                                        //@synthesize request=_request - In the implementation block
@property (nonatomic,__weak,readonly) WFWidgetConfigurationHostCardView * cardView;                           //@synthesize cardView=_cardView - In the implementation block
@property (nonatomic,readonly) WFWidgetConfigurationRemoteViewController * remoteViewController;              //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (nonatomic,retain) NSExtension * extension;                                                         //@synthesize extension=_extension - In the implementation block
@property (nonatomic,retain) id<NSCopying> extensionRequest;                                                  //@synthesize extensionRequest=_extensionRequest - In the implementation block
@property (nonatomic,readonly) WFWidgetConfigurationView * configurationView; 
@property (assign,nonatomic,__weak) id<WFWidgetConfigurationViewControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGSize preferredContentSize; 
@property (nonatomic,readonly) _UIRemoteViewController * _containedRemoteViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithOptions:(id)arg1 ;
-(WFWidgetConfigurationRemoteViewController *)remoteViewController;
-(WFWidgetConfigurationView *)configurationView;
-(void)finishWithCurrentConfiguration;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(id<WFWidgetConfigurationViewControllerDelegate>)delegate;
-(void)setExtension:(NSExtension *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(WFWidgetConfigurationHostCardView *)cardView;
-(WFWidgetConfigurationRequest *)request;
-(void)setDelegate:(id<WFWidgetConfigurationViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(id)initWithRequest:(id)arg1 ;
-(NSExtension *)extension;
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(_UIRemoteViewController *)_containedRemoteViewController;
-(void)dealloc;
-(void)widgetConfigurationRemoteViewController:(id)arg1 didReceiveConfiguredIntent:(id)arg2 ;
-(void)widgetConfigurationCardViewDidRequestToClose:(id)arg1 ;
-(void)showErrorMessage;
-(void)loadWidgetConfigurationRemoteViewController;
-(void)setRemoteViewController:(id)arg1 extension:(id)arg2 extensionRequest:(id)arg3 ;
-(void)installRemoteViewController:(id)arg1 ;
-(id<NSCopying>)extensionRequest;
-(void)setExtensionRequest:(id<NSCopying>)arg1 ;
@end

