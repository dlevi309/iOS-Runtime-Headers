/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/CNContactImageRequest.h>

@class NSArray, NSString, NSPersistentStoreRequest;

@interface CNContactImageFetchRequest : NSObject <CNContactImageRequest> {

	NSArray* _contactIdentifiers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSPersistentStoreRequest * persistentStoreRequest; 
@property (nonatomic,retain) NSArray * contactIdentifiers;                                     //@synthesize contactIdentifiers=_contactIdentifiers - In the implementation block
+(id)recentImagesRequestForContactIdenfitiers:(id)arg1 ;
+(id)predicateForImagesMatchingContactIdentifiers:(id)arg1 ;
-(NSPersistentStoreRequest *)persistentStoreRequest;
-(NSArray *)contactIdentifiers;
-(void)setContactIdentifiers:(NSArray *)arg1 ;
-(id)initWithContactIdentifiers:(id)arg1 ;
@end

