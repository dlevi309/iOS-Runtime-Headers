/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MFComposeRecipient.h>

@class CRRecentContact;

@interface MFRecentComposeRecipient : MFComposeRecipient {

	CRRecentContact* _recent;

}
-(BOOL)isGroup;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)placeholderName;
-(id)preferredSendingAddress;
-(id)initWithRecentContact:(id)arg1 ;
-(id)recentContact;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isRemovableFromSearchResults;
-(BOOL)isEqual:(id)arg1 ;
@end

