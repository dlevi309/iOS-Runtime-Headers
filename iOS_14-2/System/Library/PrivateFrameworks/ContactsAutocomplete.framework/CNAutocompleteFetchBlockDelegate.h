/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/

#import <libobjc.A.dylib/CNAutocompleteFetchDelegate.h>

@class NSString;

@interface CNAutocompleteFetchBlockDelegate : NSObject <CNAutocompleteFetchDelegate> {

	/*^block*/id _resultHandler;
	/*^block*/id _errorHandler;
	/*^block*/id _finishHandler;
	/*^block*/id _beganNetworkActivityHandler;
	/*^block*/id _endedNetworkActivityHandler;
	/*^block*/id _supplementalResultHandler;
	/*^block*/id _adjustmentHandler;
	/*^block*/id _willSortHandler;
	/*^block*/id _comparatorHandler;

}

@property (copy) id resultHandler;                                  //@synthesize resultHandler=_resultHandler - In the implementation block
@property (copy) id errorHandler;                                   //@synthesize errorHandler=_errorHandler - In the implementation block
@property (copy) id finishHandler;                                  //@synthesize finishHandler=_finishHandler - In the implementation block
@property (copy) id beganNetworkActivityHandler;                    //@synthesize beganNetworkActivityHandler=_beganNetworkActivityHandler - In the implementation block
@property (copy) id endedNetworkActivityHandler;                    //@synthesize endedNetworkActivityHandler=_endedNetworkActivityHandler - In the implementation block
@property (copy) id supplementalResultHandler;                      //@synthesize supplementalResultHandler=_supplementalResultHandler - In the implementation block
@property (copy) id adjustmentHandler;                              //@synthesize adjustmentHandler=_adjustmentHandler - In the implementation block
@property (copy) id willSortHandler;                                //@synthesize willSortHandler=_willSortHandler - In the implementation block
@property (copy) id comparatorHandler;                              //@synthesize comparatorHandler=_comparatorHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)resultHandler;
-(id)errorHandler;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)setErrorHandler:(id)arg1 ;
-(void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2 ;
-(void)autocompleteFetchDidFinish:(id)arg1 ;
-(void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2 ;
-(void)autocompleteFetchDidBeginNetworkActivity:(id)arg1 ;
-(void)autocompleteFetch:(id)arg1 willSortResults:(id)arg2 ;
-(void)autocompleteFetchDidEndNetworkActivity:(id)arg1 ;
-(id)autocompleteFetch:(id)arg1 willAdjustResults:(id)arg2 ;
-(BOOL)autocompleteFetch:(id)arg1 shouldExpectSupplementalResultsForRequest:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(/*^block*/id)resultComparatorForAutocompleteFetch:(id)arg1 ;
-(void)setResultHandler:(id)arg1 ;
-(id)finishHandler;
-(id)beganNetworkActivityHandler;
-(id)endedNetworkActivityHandler;
-(id)supplementalResultHandler;
-(id)adjustmentHandler;
-(id)willSortHandler;
-(id)comparatorHandler;
-(void)setFinishHandler:(id)arg1 ;
-(void)setBeganNetworkActivityHandler:(id)arg1 ;
-(void)setEndedNetworkActivityHandler:(id)arg1 ;
-(void)setSupplementalResultHandler:(id)arg1 ;
-(void)setAdjustmentHandler:(id)arg1 ;
-(void)setWillSortHandler:(id)arg1 ;
-(void)setComparatorHandler:(id)arg1 ;
@end

