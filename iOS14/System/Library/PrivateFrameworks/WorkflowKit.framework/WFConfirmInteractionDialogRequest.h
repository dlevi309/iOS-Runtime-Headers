/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFDialogRequest.h>
#import <libobjc.A.dylib/WFDialogRequestViewControllerSupport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INInteraction, WFDialogButton, NSString;

@interface WFConfirmInteractionDialogRequest : WFDialogRequest <WFDialogRequestViewControllerSupport, NSSecureCoding> {

	INInteraction* _interaction;
	WFDialogButton* _confirmButton;
	WFDialogButton* _cancelButton;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) INInteraction * interaction;                 //@synthesize interaction=_interaction - In the implementation block
@property (nonatomic,copy,readonly) WFDialogButton * confirmButton;              //@synthesize confirmButton=_confirmButton - In the implementation block
@property (nonatomic,copy,readonly) WFDialogButton * cancelButton;               //@synthesize cancelButton=_cancelButton - In the implementation block
+(BOOL)supportsSecureCoding;
-(Class)wf_dialogViewControllerClass;
-(WFDialogButton *)cancelButton;
-(void)encodeWithCoder:(id)arg1 ;
-(WFDialogButton *)confirmButton;
-(NSString *)description;
-(INInteraction *)interaction;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithInteraction:(id)arg1 prompt:(id)arg2 ;
@end

