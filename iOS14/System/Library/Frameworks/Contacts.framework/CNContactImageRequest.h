/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

@class NSPersistentStoreRequest, NSArray;


@protocol CNContactImageRequest <NSObject>
@property (nonatomic,readonly) NSPersistentStoreRequest * persistentStoreRequest; 
@property (nonatomic,retain) NSArray * contactIdentifiers; 
@required
-(NSArray *)contactIdentifiers;
-(NSPersistentStoreRequest *)persistentStoreRequest;
-(void)setContactIdentifiers:(id)arg1;

@end

