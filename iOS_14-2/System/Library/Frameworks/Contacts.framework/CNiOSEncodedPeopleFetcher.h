/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/CNEncodedFetchCursor.h>

@protocol CNEncodedFetchCursor, CNContactsLogger;
@class CNContactFetchRequest, CNContactsEnvironment, CNManagedConfiguration, NSString;

@interface CNiOSEncodedPeopleFetcher : NSObject <CNEncodedFetchCursor> {

	void* _addressBook;
	CNContactFetchRequest* _contactFetchRequest;
	CNContactsEnvironment* _environment;
	/*^block*/id _completionHandler;
	id<CNEncodedFetchCursor> _cursor;
	id<CNContactsLogger> _logger;
	CNManagedConfiguration* _managedConfiguration;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)fetchEncodedPeopleWithError:(id*)arg1 cancelationToken:(id)arg2 batchHandler:(/*^block*/id)arg3 ;
-(void)fetchNextBatchWithReply:(/*^block*/id)arg1 ;
-(id)initWithFetchRequest:(id)arg1 addressBook:(void*)arg2 managedConfiguration:(id)arg3 completionHandler:(/*^block*/id)arg4 environment:(id)arg5 ;
-(void)dealloc;
@end

