/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
*/

#import <ContactsAutocompleteUI/CNComposeRecipient.h>

@class NSArray;

@interface CNComposeRecipientGroup : CNComposeRecipient {

	NSArray* _children;

}
-(id)children;
-(id)displayString;
-(BOOL)isGroup;
-(BOOL)showsChevronButton;
-(id)address;
-(id)unlocalizedLabel;
-(id)placeholderName;
-(void)addRecipientToPasteboard:(id)arg1 ;
-(id)childrenWithCompleteMatches;
-(BOOL)wasCompleteMatch;
-(id)completelyMatchedAttributedStrings;
-(void)_populateSortedChildren;
-(id)compositeName;
-(id)commentedAddress;
-(id)initWithChildren:(id)arg1 displayString:(id)arg2 ;
-(id)label;
-(BOOL)isEqual:(id)arg1 ;
-(id)sortedChildren;
@end

