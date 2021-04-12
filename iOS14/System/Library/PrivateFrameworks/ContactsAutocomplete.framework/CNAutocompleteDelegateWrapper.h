/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/

#import <libobjc.A.dylib/CNAutocompleteFetchDelegate.h>
#import <libobjc.A.dylib/CNCancelable.h>

@protocol CNAutocompleteFetchDelegate, CNScheduler;
@class CNAutocompleteQueryResponsePreparer, CNCancelationToken, CNAutocompleteUserSession, CNAutocompleteFetchRequest, NSString;

@interface CNAutocompleteDelegateWrapper : NSObject <CNAutocompleteFetchDelegate, CNCancelable> {

	id<CNAutocompleteFetchDelegate> _delegate;
	id<CNScheduler> _scheduler;
	CNAutocompleteQueryResponsePreparer* _responsePreparer;
	unsigned long long _openNetworkActivityCalls;
	CNCancelationToken* _cancelationToken;
	CNAutocompleteUserSession* _userSession;
	CNAutocompleteFetchRequest* _fetchRequest;

}

@property (nonatomic,readonly) id<CNAutocompleteFetchDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> scheduler;                                           //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,readonly) CNAutocompleteQueryResponsePreparer * responsePreparer;              //@synthesize responsePreparer=_responsePreparer - In the implementation block
@property (assign,nonatomic) unsigned long long openNetworkActivityCalls;                           //@synthesize openNetworkActivityCalls=_openNetworkActivityCalls - In the implementation block
@property (nonatomic,readonly) CNCancelationToken * cancelationToken;                               //@synthesize cancelationToken=_cancelationToken - In the implementation block
@property (nonatomic,readonly) CNAutocompleteUserSession * userSession;                             //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,readonly) CNAutocompleteFetchRequest * fetchRequest;                           //@synthesize fetchRequest=_fetchRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)responseScheduler;
-(CNAutocompleteFetchRequest *)fetchRequest;
-(id<CNAutocompleteFetchDelegate>)delegate;
-(CNAutocompleteUserSession *)userSession;
-(id)sortResults;
-(void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2 ;
-(void)autocompleteFetchDidFinish:(id)arg1 ;
-(void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2 ;
-(void)autocompleteFetchDidBeginNetworkActivity:(id)arg1 ;
-(void)autocompleteFetchDidEndNetworkActivity:(id)arg1 ;
-(BOOL)autocompleteFetch:(id)arg1 shouldExpectSupplementalResultsForRequest:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)cancel;
-(CNCancelationToken *)cancelationToken;
-(id<CNScheduler>)scheduler;
-(void)setDuetResultsFuture:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 userSession:(id)arg2 fetchRequest:(id)arg3 scheduler:(id)arg4 ;
-(id)addDiagnosticLog:(/*^block*/id)arg1 ;
-(id)askDelegateToAdjustResults;
-(id)suppressResultsWithAddresses:(id)arg1 ;
-(CNAutocompleteQueryResponsePreparer *)responsePreparer;
-(void)queueMessageToDelegate:(/*^block*/id)arg1 ;
-(unsigned long long)openNetworkActivityCalls;
-(void)setOpenNetworkActivityCalls:(unsigned long long)arg1 ;
-(void)queueUncancelableMessageToDelegate:(/*^block*/id)arg1 ;
-(void)queueDidEndNetworkActivityMessageForFetch:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 userSession:(id)arg2 fetchRequest:(id)arg3 ;
@end

