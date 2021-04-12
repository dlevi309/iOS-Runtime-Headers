/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
*/

#import <ContactsAutocompleteUI/CNComposeRecipientGroup.h>

@class CRRecentContact;

@interface CNRecentComposeRecipientGroup : CNComposeRecipientGroup {

	CRRecentContact* _recentContact;

}

@property (nonatomic,retain,readonly) CRRecentContact * recentContact;              //@synthesize recentContact=_recentContact - In the implementation block
-(id)label;
-(id)unlocalizedLabel;
-(CRRecentContact *)recentContact;
-(id)placeholderName;
-(id)initWithChildren:(id)arg1 displayString:(id)arg2 recentContact:(id)arg3 ;
@end

