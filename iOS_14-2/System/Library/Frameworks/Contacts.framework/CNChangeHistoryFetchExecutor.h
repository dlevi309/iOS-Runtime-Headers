/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@class CNChangeHistoryFetchRequest, CNContactStore;

@interface CNChangeHistoryFetchExecutor : NSObject {

	CNChangeHistoryFetchRequest* _request;
	CNContactStore* _store;

}

@property (nonatomic,copy,readonly) CNChangeHistoryFetchRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) CNContactStore * store;                                  //@synthesize store=_store - In the implementation block
+(id)os_log;
-(id)keysToFetch;
-(CNContactStore *)store;
-(id)fullSync;
-(CNChangeHistoryFetchRequest *)request;
-(id)description;
-(id)initWithRequest:(id)arg1 store:(id)arg2 ;
-(id)deltaSync;
-(id)run:(id*)arg1 ;
@end

