/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CNContactStore *)store;
-(CNContactFetchRequest *)request;
-(id)description;
-(id)initWithRequest:(id)arg1 store:(id)arg2 ;
-(id)run:(id*)arg1 ;
@end

