/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MFComposeRecipient.h>

@class CRRecentContact;

@interface MFRecentComposeRecipient : MFComposeRecipient {

	CRRecentContact* _recent;

}
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isGroup;
-(BOOL)isRemovableFromSearchResults;
-(id)recentContact;
-(id)placeholderName;
-(id)preferredSendingAddress;
-(id)initWithRecentContact:(id)arg1 ;
@end

