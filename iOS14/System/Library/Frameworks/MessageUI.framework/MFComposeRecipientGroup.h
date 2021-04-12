/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MFComposeRecipient.h>

@class NSArray;

@interface MFComposeRecipientGroup : MFComposeRecipient {

	NSArray* _children;

}
-(void*)record;
-(id)children;
-(int)property;
-(id)displayString;
-(BOOL)isGroup;
-(id)address;
-(id)unlocalizedLabel;
-(id)placeholderName;
-(id)childrenWithCompleteMatches;
-(BOOL)wasCompleteMatch;
-(id)completelyMatchedAttributedStrings;
-(void)_populateSortedChildren;
-(id)compositeName;
-(id)commentedAddress;
-(BOOL)isRemovableFromSearchResults;
-(int)recordID;
-(id)initWithChildren:(id)arg1 displayString:(id)arg2 ;
-(id)label;
-(BOOL)isEqual:(id)arg1 ;
-(id)sortedChildren;
@end

