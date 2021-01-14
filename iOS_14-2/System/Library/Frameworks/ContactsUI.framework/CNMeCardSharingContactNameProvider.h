/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)familyName;
-(CNContact *)contact;
-(id)givenName;
-(id)nickname;
-(id)middleName;
-(id)initWithContact:(id)arg1 ;
@end

