/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MFComposeRecipient.h>

@class NSArray;

@interface MFComposeRecipientGroup : MFComposeRecipient {

	NSArray* _children;

}
-(BOOL)isEqual:(id)arg1 ;
-(id)address;
-(id)label;
-(int)recordID;
-(id)children;
-(BOOL)isGroup;
-(id)displayString;
-(int)property;
-(void*)record;
-(id)compositeName;
-(id)commentedAddress;
-(BOOL)isRemovableFromSearchResults;
-(id)unlocalizedLabel;
-(id)initWithChildren:(id)arg1 displayString:(id)arg2 ;
-(id)placeholderName;
-(id)sortedChildren;
-(id)childrenWithCompleteMatches;
-(BOOL)wasCompleteMatch;
-(id)completelyMatchedAttributedStrings;
-(void)_populateSortedChildren;
@end

