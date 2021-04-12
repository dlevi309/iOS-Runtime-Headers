/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <libobjc.A.dylib/CNMeCardSharingNameProvider.h>

@class CNContact, NSString;

@interface CNMeCardSharingContactNameProvider : NSObject <CNMeCardSharingNameProvider> {

	CNContact* _contact;

}

@property (nonatomic,readonly) CNContact * contact;                 //@synthesize contact=_contact - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptorForRequiredKeys;
-(id)givenName;
-(id)familyName;
-(id)middleName;
-(id)nickname;
-(CNContact *)contact;
-(id)initWithContact:(id)arg1 ;
@end

