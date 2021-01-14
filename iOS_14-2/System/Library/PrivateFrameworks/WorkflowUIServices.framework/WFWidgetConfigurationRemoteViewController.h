/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUIServices.framework/WorkflowUIServices
*/

#import <WorkflowUIServices/WorkflowUIServices-Structs.h>
#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/WFWidgetConfigurationServiceHostProtocol.h>

@protocol WFWidgetConfigurationRemoteViewControllerDelegate;
@interface WFWidgetConfigurationRemoteViewController : _UIRemoteViewController <WFWidgetConfigurationServiceHostProtocol> {

	id<WFWidgetConfigurationRemoteViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WFWidgetConfigurationRemoteViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(id<WFWidgetConfigurationRemoteViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFWidgetConfigurationRemoteViewControllerDelegate>)arg1 ;
-(void)setConfigurationCardViewFrame:(CGRect)arg1 ;
-(void)intentWasConfigured:(id)arg1 ;
-(void)requestViewControllerDismissal;
@end

