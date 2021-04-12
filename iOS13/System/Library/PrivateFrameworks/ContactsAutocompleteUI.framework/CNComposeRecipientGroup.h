/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
*/

#import <ContactsAutocompleteUI/CNComposeRecipient.h>

@class NSArray;

@interface CNComposeRecipientGroup : CNComposeRecipient {

	NSArray* _children;

}
-(BOOL)isEqual:(id)arg1 ;
-(id)address;
-(id)label;
-(id)children;
-(BOOL)isGroup;
-(id)displayString;
-(id)compositeName;
-(id)commentedAddress;
-(id)unlocalizedLabel;
-(id)initWithChildren:(id)arg1 displayString:(id)arg2 ;
-(id)placeholderName;
-(id)sortedChildren;
-(id)childrenWithCompleteMatches;
-(BOOL)wasCompleteMatch;
-(id)completelyMatchedAttributedStrings;
-(void)_populateSortedChildren;
-(BOOL)showsChevronButton;
@end

