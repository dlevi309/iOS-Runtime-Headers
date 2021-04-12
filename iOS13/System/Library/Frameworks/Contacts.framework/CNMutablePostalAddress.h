/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNPostalAddress.h>

@class NSString;

@interface CNMutablePostalAddress : CNPostalAddress

@property (nonatomic,copy) NSString * formattedAddress; 
@property (nonatomic,copy) NSString * street; 
@property (nonatomic,copy) NSString * subLocality; 
@property (nonatomic,copy) NSString * city; 
@property (nonatomic,copy) NSString * subAdministrativeArea; 
@property (nonatomic,copy) NSString * state; 
@property (nonatomic,copy) NSString * postalCode; 
@property (nonatomic,copy) NSString * country; 
@property (nonatomic,copy) NSString * ISOCountryCode; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)freeze;
@end

