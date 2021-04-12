/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@protocol CNAPITriageLogger, CNTimeProvider;
@class CNContactFetchRequest;

@interface CNAPITriageSession : NSObject {

	id<CNAPITriageLogger> _logger;
	id<CNTimeProvider> _timeProvider;
	double _timeSessionBegan;
	double _timeSessionEnded;
	double _clientCalloutTime;
	BOOL _hasClientCalloutTime;
	CNContactFetchRequest* _request;

}

@property (readonly) CNContactFetchRequest * request;              //@synthesize request=_request - In the implementation block
@property (readonly) id<CNAPITriageLogger> logger;                 //@synthesize logger=_logger - In the implementation block
@property (readonly) id<CNTimeProvider> timeProvider;              //@synthesize timeProvider=_timeProvider - In the implementation block
-(void)open;
-(id)init;
-(void)close;
-(id)initWithRequest:(id)arg1 triageLogger:(id)arg2 timeProvider:(id)arg3 ;
-(void)closeWithResult:(id)arg1 ;
-(CNContactFetchRequest *)request;
-(id<CNAPITriageLogger>)logger;
-(id)initWithRequest:(id)arg1 ;
-(id<CNTimeProvider>)timeProvider;
-(void)closeWithContacts:(id)arg1 ;
-(void)addClientCalloutTime:(double)arg1 ;
-(void)closeWithContacts:(id)arg1 orError:(id)arg2 ;
-(void)closeWithError:(id)arg1 ;
@end

