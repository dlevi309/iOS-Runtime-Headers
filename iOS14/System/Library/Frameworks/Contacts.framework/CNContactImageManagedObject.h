/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <CoreData/NSManagedObject.h>

@class NSUUID, NSString, NSData, NSDate, NSNumber;

@interface CNContactImageManagedObject : NSManagedObject

@property (nonatomic,retain) NSUUID * identifier; 
@property (nonatomic,retain) NSString * contactIdentifier; 
@property (nonatomic,retain) NSData * imageData; 
@property (nonatomic,retain) NSDate * lastUsedDate; 
@property (nonatomic,retain) NSString * cropRectString; 
@property (nonatomic,retain) NSString * displayString; 
@property (nonatomic,retain) NSNumber * source; 
@property (nonatomic,retain) NSString * sourceIdentifier; 
@property (nonatomic,retain) NSString * variant; 
+(/*^block*/id)managedObjectToContactImageTransform;
-(id)cropRectStringFromCGRect:(CGRect)arg1 ;
-(void)updateWithContactImage:(id)arg1 ;
-(void)setupWithContactImage:(id)arg1 contactIdentifier:(id)arg2 ;
@end

