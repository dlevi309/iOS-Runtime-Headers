/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)freeze;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

