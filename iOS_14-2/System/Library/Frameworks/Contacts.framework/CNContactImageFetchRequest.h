/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/CNContactImageRequest.h>

@class NSArray, NSPersistentStoreRequest, NSString;

@interface CNContactImageFetchRequest : NSObject <CNContactImageRequest> {

	NSArray* _contactIdentifiers;

}

@property (nonatomic,readonly) NSPersistentStoreRequest * persistentStoreRequest; 
@property (nonatomic,retain) NSArray * contactIdentifiers;                                     //@synthesize contactIdentifiers=_contactIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)predicateForImagesMatchingContactIdentifiers:(id)arg1 ;
+(id)recentImagesRequestForContactIdenfitiers:(id)arg1 ;
-(id)initWithContactIdentifiers:(id)arg1 ;
-(NSArray *)contactIdentifiers;
-(NSPersistentStoreRequest *)persistentStoreRequest;
-(void)setContactIdentifiers:(NSArray *)arg1 ;
@end

