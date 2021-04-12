/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)contactEventForChange:(id)arg1 factory:(id)arg2 ;
-(id)description;
-(CNContactStore *)store;
-(CNChangeHistoryFetchRequest *)request;
-(id)keysToFetch;
-(id)initWithRequest:(id)arg1 store:(id)arg2 ;
-(id)run:(id*)arg1 ;
-(id)deltaSync;
-(id)fullSync;
-(id)contactEventsFromLegacyResult:(id)arg1 eventFactory:(id)arg2 ;
-(id)groupEventsFromLegacyResult:(id)arg1 eventFactory:(id)arg2 ;
@end

