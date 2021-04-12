/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFDialogRequest.h>
#import <libobjc.A.dylib/WFDialogRequestViewControllerSupport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, WFDialogButton;

@interface WFShowAlertDialogRequest : WFDialogRequest <WFDialogRequestViewControllerSupport, NSSecureCoding> {

	NSString* _message;
	WFDialogButton* _okButton;
	WFDialogButton* _cancelButton;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * message;                         //@synthesize message=_message - In the implementation block
@property (nonatomic,copy,readonly) WFDialogButton * okButton;                  //@synthesize okButton=_okButton - In the implementation block
@property (nonatomic,copy,readonly) WFDialogButton * cancelButton;              //@synthesize cancelButton=_cancelButton - In the implementation block
+(BOOL)supportsSecureCoding;
-(Class)wf_dialogViewControllerClass;
-(WFDialogButton *)cancelButton;
-(WFDialogButton *)okButton;
-(NSString *)message;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPrompt:(id)arg1 message:(id)arg2 cancelButton:(id)arg3 attribution:(id)arg4 ;
-(id)initWithPrompt:(id)arg1 message:(id)arg2 okButton:(id)arg3 cancelButton:(id)arg4 attribution:(id)arg5 ;
@end

