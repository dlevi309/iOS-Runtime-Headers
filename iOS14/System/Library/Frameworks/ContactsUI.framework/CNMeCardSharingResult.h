/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@class NSString, CNContactImage;

@interface CNMeCardSharingResult : NSObject {

	BOOL _didSaveImageToMeCard;
	NSString* _givenName;
	NSString* _familyName;
	CNContactImage* _contactImage;

}

@property (nonatomic,readonly) NSString * givenName;                       //@synthesize givenName=_givenName - In the implementation block
@property (nonatomic,readonly) NSString * familyName;                      //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,readonly) CNContactImage * contactImage;              //@synthesize contactImage=_contactImage - In the implementation block
@property (nonatomic,readonly) BOOL didSaveImageToMeCard;                  //@synthesize didSaveImageToMeCard=_didSaveImageToMeCard - In the implementation block
-(NSString *)familyName;
-(NSString *)givenName;
-(BOOL)didSaveImageToMeCard;
-(id)initWithGivenName:(id)arg1 familyName:(id)arg2 contactImage:(id)arg3 didSaveImageToMeCard:(BOOL)arg4 ;
-(id)description;
-(CNContactImage *)contactImage;
@end

