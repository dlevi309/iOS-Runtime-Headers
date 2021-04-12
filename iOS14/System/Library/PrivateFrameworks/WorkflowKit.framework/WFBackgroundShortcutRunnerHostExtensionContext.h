/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(id<WFOutOfProcessWorkflowControllerHost>)delegate;
-(void)setDelegate:(id<WFOutOfProcessWorkflowControllerHost>)arg1 ;
-(void)workflowDidStartFromWorkflowReference:(id)arg1 attribution:(id)arg2 ;
-(void)workflowDidFinishRunningWithError:(id)arg1 cancelled:(BOOL)arg2 reference:(id)arg3 ;
@end

