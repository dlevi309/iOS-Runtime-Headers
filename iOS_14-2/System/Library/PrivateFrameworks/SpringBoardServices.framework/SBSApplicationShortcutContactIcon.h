/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)contactIdentifier;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithContactIdentifier:(id)arg1 ;
-(id)initWithFirstName:(id)arg1 lastName:(id)arg2 ;
-(NSData *)imageData;
-(unsigned long long)hash;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)_initForSubclass;
-(id)initWithFirstName:(id)arg1 lastName:(id)arg2 imageData:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
@end

