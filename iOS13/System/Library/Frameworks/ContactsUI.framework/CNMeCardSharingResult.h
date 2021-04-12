/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)givenName;
-(NSString *)familyName;
-(CNContactImage *)contactImage;
-(id)initWithGivenName:(id)arg1 familyName:(id)arg2 contactImage:(id)arg3 didSaveImageToMeCard:(BOOL)arg4 ;
-(BOOL)didSaveImageToMeCard;
@end

