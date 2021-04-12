/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <ContactsAutocompleteUI/CNComposeRecipient.h>

@class WFContact;

@interface WFContactComposeRecipient : CNComposeRecipient {

	WFContact* _wfContact;

}

@property (nonatomic,readonly) WFContact * wfContact;              //@synthesize wfContact=_wfContact - In the implementation block
-(id)displayString;
-(id)initWithWFContact:(id)arg1 ;
-(id)wf_contactFieldEntry;
-(WFContact *)wfContact;
@end

