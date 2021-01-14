/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFDialogRequest.h>
#import <libobjc.A.dylib/WFDialogRequestViewControllerSupport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, WFDialogButton;

@interface WFChooseFromListDialogRequest : WFDialogRequest <WFDialogRequestViewControllerSupport, NSSecureCoding> {

	BOOL _allowsMultipleSelection;
	NSArray* _items;
	NSString* _message;
	WFDialogButton* _doneButton;
	WFDialogButton* _cancelButton;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * items;                            //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) BOOL allowsMultipleSelection;                    //@synthesize allowsMultipleSelection=_allowsMultipleSelection - In the implementation block
@property (nonatomic,copy,readonly) NSString * message;                         //@synthesize message=_message - In the implementation block
@property (nonatomic,copy,readonly) NSString * emptyStateMessage; 
@property (nonatomic,copy,readonly) WFDialogButton * doneButton;                //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,copy,readonly) WFDialogButton * cancelButton;              //@synthesize cancelButton=_cancelButton - In the implementation block
+(BOOL)supportsSecureCoding;
-(Class)wf_dialogViewControllerClass;
-(WFDialogButton *)doneButton;
-(BOOL)allowsMultipleSelection;
-(WFDialogButton *)cancelButton;
-(NSString *)message;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)items;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithItems:(id)arg1 allowsMultipleSelection:(BOOL)arg2 message:(id)arg3 attribution:(id)arg4 prompt:(id)arg5 ;
-(NSString *)emptyStateMessage;
@end

