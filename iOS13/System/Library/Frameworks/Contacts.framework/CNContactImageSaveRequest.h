/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/CNContactImageRequest.h>

@class NSPersistentStoreRequest, NSArray, CNContactImage, NSString;

@interface CNContactImageSaveRequest : NSObject <CNContactImageRequest> {

	NSArray* _contactIdentifiers;
	CNContactImage* _image;
	long long _operationType;
	NSString* _attributeName;

}

@property (nonatomic,readonly) CNContactImage * image;                                         //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) long long operationType;                                        //@synthesize operationType=_operationType - In the implementation block
@property (nonatomic,readonly) NSString * attributeName;                                       //@synthesize attributeName=_attributeName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSPersistentStoreRequest * persistentStoreRequest; 
@property (nonatomic,retain) NSArray * contactIdentifiers;                                     //@synthesize contactIdentifiers=_contactIdentifiers - In the implementation block
+(id)saveRequestToCreateImage:(id)arg1 forContactIdentifier:(id)arg2 ;
+(id)saveRequestToDeleteImagesForContactIdentifiers:(id)arg1 ;
+(id)saveRequestToDeleteImageForIdentifier:(id)arg1 ;
-(long long)operationType;
-(CNContactImage *)image;
-(NSPersistentStoreRequest *)persistentStoreRequest;
-(NSArray *)contactIdentifiers;
-(void)setContactIdentifiers:(NSArray *)arg1 ;
-(id)initWithContactImage:(id)arg1 contactIdentifiers:(id)arg2 attributeName:(id)arg3 operationType:(long long)arg4 ;
-(id)deleteStoreRequest;
-(id)createStoreRequest;
-(NSString *)attributeName;
@end

