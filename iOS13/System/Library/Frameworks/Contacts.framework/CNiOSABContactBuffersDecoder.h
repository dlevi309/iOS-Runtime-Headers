/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@class CNContactBufferDecoder, NSMutableArray, NSMutableDictionary, CNContactFetchRequest;

@interface CNiOSABContactBuffersDecoder : NSObject {

	CNContactBufferDecoder* _decoder;
	NSMutableArray* _contactsWaitingForUnification;
	NSMutableDictionary* _matchInfosWaitingForUnification;
	CNContactFetchRequest* _fetchRequest;

}

@property (nonatomic,readonly) CNContactBufferDecoder * decoder;                                   //@synthesize decoder=_decoder - In the implementation block
@property (nonatomic,readonly) NSMutableArray * contactsWaitingForUnification;                     //@synthesize contactsWaitingForUnification=_contactsWaitingForUnification - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * matchInfosWaitingForUnification;              //@synthesize matchInfosWaitingForUnification=_matchInfosWaitingForUnification - In the implementation block
@property (nonatomic,readonly) CNContactFetchRequest * fetchRequest;                               //@synthesize fetchRequest=_fetchRequest - In the implementation block
-(id)init;
-(CNContactFetchRequest *)fetchRequest;
-(id)initWithFetchRequest:(id)arg1 ;
-(CNContactBufferDecoder *)decoder;
-(id)unifyContacts:(id)arg1 moreComing:(BOOL)arg2 ;
-(void)_addContactMatchInfoFromABMatchInfos:(id)arg1 forContact:(id)arg2 toDictionary:(id)arg3 ;
-(id)_contactMatchInfosFromABMatchInfos:(id)arg1 contacts:(id)arg2 ;
-(NSMutableDictionary *)matchInfosWaitingForUnification;
-(NSMutableArray *)contactsWaitingForUnification;
-(id)contactsFromData:(id)arg1 moreComing:(BOOL)arg2 error:(id*)arg3 ;
-(id)contactMatchInfosFromABMatchInfos:(id)arg1 contacts:(id)arg2 ;
@end

