/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNSocialProfile.h>

@class NSString, NSArray;

@interface CNMutableSocialProfile : CNSocialProfile

@property (nonatomic,copy) NSString * urlString; 
@property (nonatomic,copy) NSString * username; 
@property (nonatomic,copy) NSString * userIdentifier; 
@property (nonatomic,copy) NSString * service; 
@property (nonatomic,copy) NSString * displayname; 
@property (nonatomic,copy) NSArray * bundleIdentifiers; 
@property (nonatomic,copy) NSString * teamIdentifier; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)freeze;
@end

