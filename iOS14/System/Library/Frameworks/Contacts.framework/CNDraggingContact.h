/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@class CNContact, CNContactStore, NSURL;

@interface CNDraggingContact : NSObject {

	CNContact* _contact;
	CNContactStore* _contactStore;
	NSURL* _cachedFileURLRepresentation;

}

@property (nonatomic,retain) CNContact * contact;                              //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                    //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) NSURL * cachedFileURLRepresentation;              //@synthesize cachedFileURLRepresentation=_cachedFileURLRepresentation - In the implementation block
+(id)os_log;
+(id)availableDataRepresentationTypes;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(CNContactStore *)contactStore;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(id)fileNameForContact:(id)arg1 ;
-(id)dataRepresentationForType:(id)arg1 ;
-(id)fetchContactWithKeys:(id)arg1 ;
-(id)initWithContact:(id)arg1 contactStore:(id)arg2 ;
-(id)serializeContactToVCard:(id)arg1 ;
-(NSURL *)cachedFileURLRepresentation;
-(void)setCachedFileURLRepresentation:(NSURL *)arg1 ;
-(id)fileURLRepresentation;
-(void)cleanupFileURLRepresentation;
@end

