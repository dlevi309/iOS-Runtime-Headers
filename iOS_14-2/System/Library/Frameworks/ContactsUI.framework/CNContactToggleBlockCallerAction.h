/*
* Generated on Thursday, January 14, 2021 at 2:20:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNContactAction.h>

@class NSNumber;

@interface CNContactToggleBlockCallerAction : CNContactAction {

	NSNumber* _isBlockedCachedValue;

}

@property (nonatomic,retain) NSNumber * isBlockedCachedValue;              //@synthesize isBlockedCachedValue=_isBlockedCachedValue - In the implementation block
-(void)performActionWithSender:(id)arg1 ;
-(void)setContactBlocked:(BOOL)arg1 ;
-(BOOL)isContactBlockedPreservingChanges:(BOOL)arg1 ;
-(id)checkIsContactBlocked;
-(id)allNumbersAndEmails;
-(NSNumber *)isBlockedCachedValue;
-(void)setIsBlockedCachedValue:(NSNumber *)arg1 ;
@end

