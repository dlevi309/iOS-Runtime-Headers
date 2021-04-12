/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFDialogRequest.h>
#import <libobjc.A.dylib/WFDialogRequestViewControllerSupport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, WFDialogButton;

@interface WFAskParameterDialogRequest : WFDialogRequest <WFDialogRequestViewControllerSupport, NSSecureCoding> {

	NSString* _actionIdentifier;
	NSString* _parameterKey;
	NSDictionary* _serializedParameterStates;
	long long _style;
	WFDialogButton* _cancelButton;
	WFDialogButton* _doneButton;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * actionIdentifier;                           //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * parameterKey;                               //@synthesize parameterKey=_parameterKey - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * serializedParameterStates;              //@synthesize serializedParameterStates=_serializedParameterStates - In the implementation block
@property (nonatomic,readonly) long long style;                                            //@synthesize style=_style - In the implementation block
@property (nonatomic,copy,readonly) WFDialogButton * cancelButton;                         //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,copy,readonly) WFDialogButton * doneButton;                           //@synthesize doneButton=_doneButton - In the implementation block
+(BOOL)supportsSecureCoding;
-(Class)wf_dialogViewControllerClass;
-(WFDialogButton *)doneButton;
-(WFDialogButton *)cancelButton;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)actionIdentifier;
-(long long)style;
-(NSString *)parameterKey;
-(id)initWithActionIdentifier:(id)arg1 parameterKey:(id)arg2 serializedParameterStates:(id)arg3 style:(long long)arg4 attribution:(id)arg5 prompt:(id)arg6 ;
-(NSDictionary *)serializedParameterStates;
@end

