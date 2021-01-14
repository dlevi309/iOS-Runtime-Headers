/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@protocol CNAutocompleteFetchDelegate <NSObject>
@optional
-(void)autocompleteFetchDidFinish:(id)arg1;
-(void)autocompleteFetchDidBeginNetworkActivity:(id)arg1;
-(void)autocompleteFetch:(id)arg1 willSortResults:(id)arg2;
-(void)autocompleteFetchDidEndNetworkActivity:(id)arg1;
-(id)autocompleteFetch:(id)arg1 willAdjustResults:(id)arg2;
-(BOOL)autocompleteFetch:(id)arg1 shouldExpectSupplementalResultsForRequest:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(/*^block*/id)resultComparatorForAutocompleteFetch:(id)arg1;

@required
-(void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2;
-(void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2;

@end

