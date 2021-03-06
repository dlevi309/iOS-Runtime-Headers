/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
*/

#import <ContactsAutocompleteUI/CNComposeRecipientGroup.h>

@class CRRecentContact;

@interface CNRecentComposeRecipientGroup : CNComposeRecipientGroup {

	CRRecentContact* _recentContact;

}

@property (nonatomic,retain,readonly) CRRecentContact * recentContact;              //@synthesize recentContact=_recentContact - In the implementation block
-(id)unlocalizedLabel;
-(id)placeholderName;
-(id)initWithChildren:(id)arg1 displayString:(id)arg2 recentContact:(id)arg3 ;
-(CRRecentContact *)recentContact;
-(id)label;
@end

