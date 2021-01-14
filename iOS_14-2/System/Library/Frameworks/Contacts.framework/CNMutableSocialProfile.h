/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)freeze;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

