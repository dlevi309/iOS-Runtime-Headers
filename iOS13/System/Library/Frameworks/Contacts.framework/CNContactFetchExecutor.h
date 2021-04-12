/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@class CNContactFetchRequest, CNContactStore;

@interface CNContactFetchExecutor : NSObject {

	CNContactFetchRequest* _request;
	CNContactStore* _store;

}

@property (nonatomic,copy,readonly) CNContactFetchRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) CNContactStore * store;                            //@synthesize store=_store - In the implementation block
+(id)os_log;
-(id)description;
-(CNContactStore *)store;
-(CNContactFetchRequest *)request;
-(id)initWithRequest:(id)arg1 store:(id)arg2 ;
-(id)run:(id*)arg1 ;
@end

