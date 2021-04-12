/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <SpringBoardServices/SBSApplicationShortcutIcon.h>

@class NSString, NSData;

@interface SBSApplicationShortcutContactIcon : SBSApplicationShortcutIcon {

	NSString* _contactIdentifier;
	NSString* _firstName;
	NSString* _lastName;
	NSData* _imageData;

}

@property (nonatomic,readonly) NSString * contactIdentifier;              //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * firstName;                      //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,readonly) NSString * lastName;                       //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,readonly) NSData * imageData;                        //@synthesize imageData=_imageData - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)contactIdentifier;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(NSData *)imageData;
-(NSString *)firstName;
-(NSString *)lastName;
-(id)_initForSubclass;
-(id)initWithContactIdentifier:(id)arg1 ;
-(id)initWithFirstName:(id)arg1 lastName:(id)arg2 imageData:(id)arg3 ;
-(id)initWithFirstName:(id)arg1 lastName:(id)arg2 ;
@end

