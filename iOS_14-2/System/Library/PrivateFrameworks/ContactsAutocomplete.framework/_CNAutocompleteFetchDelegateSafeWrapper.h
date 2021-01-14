/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/

#import <libobjc.A.dylib/CNAutocompleteFetchDelegate.h>

@protocol CNAutocompleteFetchDelegate;
@class NSString;

@interface _CNAutocompleteFetchDelegateSafeWrapper : NSObject <CNAutocompleteFetchDelegate> {

	id<CNAutocompleteFetchDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDelegate:(id)arg1 ;
-(void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2 ;
-(void)autocompleteFetchDidFinish:(id)arg1 ;
-(void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2 ;
-(void)autocompleteFetchDidBeginNetworkActivity:(id)arg1 ;
-(void)autocompleteFetch:(id)arg1 willSortResults:(id)arg2 ;
-(void)autocompleteFetchDidEndNetworkActivity:(id)arg1 ;
-(id)autocompleteFetch:(id)arg1 willAdjustResults:(id)arg2 ;
-(BOOL)autocompleteFetch:(id)arg1 shouldExpectSupplementalResultsForRequest:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(/*^block*/id)resultComparatorForAutocompleteFetch:(id)arg1 ;
@end

