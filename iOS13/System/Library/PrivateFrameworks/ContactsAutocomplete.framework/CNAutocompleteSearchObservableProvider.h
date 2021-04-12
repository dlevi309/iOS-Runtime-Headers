/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/

#import <libobjc.A.dylib/CNAutocompleteSearchObservableProvider.h>

@protocol CNAutocompleteSearchObservableProvider <NSObject>
@required
-(id)localSearchObservable;
-(id)recentsSearchObservable;
-(id)suggestionsSearchObservable;
-(id)predictionsSearchObservableWithUnfilteredResultPromise:(id)arg1;
-(id)localExtensionSearchObservables;
-(id)directoryServersSearchObservable;
-(id)calendarServersSearchObservable;

@end


@protocol CNAutocompleteSearchProvider, CNScheduler;
@class CNAutocompleteFetchRequest, NSString;

@interface CNAutocompleteSearchObservableProvider : NSObject <CNAutocompleteSearchObservableProvider> {

	id<CNAutocompleteSearchProvider> _searchProvider;
	CNAutocompleteFetchRequest* _fetchRequest;
	id<CNScheduler> _scheduler;

}

@property (nonatomic,readonly) id<CNAutocompleteSearchProvider> searchProvider;              //@synthesize searchProvider=_searchProvider - In the implementation block
@property (nonatomic,readonly) CNAutocompleteFetchRequest * fetchRequest;                    //@synthesize fetchRequest=_fetchRequest - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> scheduler;                                    //@synthesize scheduler=_scheduler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)providerWithSearchProvider:(id)arg1 fetchRequest:(id)arg2 scheduler:(id)arg3 ;
-(CNAutocompleteFetchRequest *)fetchRequest;
-(id<CNScheduler>)scheduler;
-(id<CNAutocompleteSearchProvider>)searchProvider;
-(id)initWithSearchProvider:(id)arg1 fetchRequest:(id)arg2 scheduler:(id)arg3 ;
-(id)observableWithWrappedSearchProviderGetter:(/*^block*/id)arg1 name:(id)arg2 ;
-(id)localSearchObservable;
-(id)recentsSearchObservable;
-(id)suggestionsSearchObservable;
-(id)predictionsSearchObservableWithUnfilteredResultPromise:(id)arg1 ;
-(id)localExtensionSearchObservables;
-(id)directoryServersSearchObservable;
-(id)calendarServersSearchObservable;
@end

