/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/WFOutOfProcessWorkflowControllerHost.h>

@protocol WFOutOfProcessWorkflowControllerHost;
@class NSString;

@interface WFBackgroundShortcutRunnerHostExtensionContext : NSExtensionContext <WFOutOfProcessWorkflowControllerHost> {

	id<WFOutOfProcessWorkflowControllerHost> _delegate;

}

@property (assign,nonatomic,__weak) id<WFOutOfProcessWorkflowControllerHost> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id<WFOutOfProcessWorkflowControllerHost>)delegate;
-(void)setDelegate:(id<WFOutOfProcessWorkflowControllerHost>)arg1 ;
-(void)workflowDidStart;
-(void)workflowDidFinishRunningWithError:(id)arg1 cancelled:(BOOL)arg2 ;
@end

