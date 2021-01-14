/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
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

