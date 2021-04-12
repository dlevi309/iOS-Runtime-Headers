/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_addContactMatchInfoFromABMatchInfos:(id)arg1 forContact:(id)arg2 toDictionary:(id)arg3 ;
-(id)contactsFromData:(id)arg1 moreComing:(BOOL)arg2 error:(id*)arg3 ;
-(CNContactBufferDecoder *)decoder;
-(id)_contactMatchInfosFromABMatchInfos:(id)arg1 contacts:(id)arg2 ;
-(NSMutableArray *)contactsWaitingForUnification;
-(NSMutableDictionary *)matchInfosWaitingForUnification;
-(id)contactMatchInfosFromABMatchInfos:(id)arg1 contacts:(id)arg2 ;
-(id)unifyContacts:(id)arg1 moreComing:(BOOL)arg2 ;
-(id)initWithFetchRequest:(id)arg1 ;
@end

