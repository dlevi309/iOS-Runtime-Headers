/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFDialogRequest.h>
#import <libobjc.A.dylib/WFDialogRequestViewControllerSupport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class WFTextFieldConfiguration, NSString, WFDialogButton;

@interface WFInputTextDialogRequest : WFDialogRequest <WFDialogRequestViewControllerSupport, NSSecureCoding> {

	WFTextFieldConfiguration* _textFieldConfiguration;
	NSString* _message;
	WFDialogButton* _cancelButton;
	WFDialogButton* _doneButton;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) WFTextFieldConfiguration * textFieldConfiguration;              //@synthesize textFieldConfiguration=_textFieldConfiguration - In the implementation block
@property (nonatomic,copy,readonly) NSString * message;                                             //@synthesize message=_message - In the implementation block
@property (nonatomic,copy,readonly) WFDialogButton * cancelButton;                                  //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,copy,readonly) WFDialogButton * doneButton;                                    //@synthesize doneButton=_doneButton - In the implementation block
+(BOOL)supportsSecureCoding;
-(Class)wf_dialogViewControllerClass;
-(WFDialogButton *)doneButton;
-(WFDialogButton *)cancelButton;
-(NSString *)message;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTextFieldConfiguration:(id)arg1 message:(id)arg2 attribution:(id)arg3 prompt:(id)arg4 ;
-(WFTextFieldConfiguration *)textFieldConfiguration;
@end

