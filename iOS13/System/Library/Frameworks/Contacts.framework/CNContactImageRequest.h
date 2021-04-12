/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

@class NSPersistentStoreRequest, NSArray;


@protocol CNContactImageRequest <NSObject>
@property (nonatomic,readonly) NSPersistentStoreRequest * persistentStoreRequest; 
@property (nonatomic,retain) NSArray * contactIdentifiers; 
@required
-(NSPersistentStoreRequest *)persistentStoreRequest;
-(NSArray *)contactIdentifiers;
-(void)setContactIdentifiers:(id)arg1;

@end

