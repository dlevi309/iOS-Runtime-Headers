/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class NSMutableDictionary;

@interface _GEOPlaceDataPendingRequestManager : NSObject {

	NSMutableDictionary* _requestHandlersPending;

}
-(id)init;
-(id)_finished:(id)arg1 withResult:(id)arg2 error:(id)arg3 ;
-(void)_cleanUpFinishedHandlers:(id)arg1 ;
-(void)failedToResolveIdentifiers:(id)arg1 withError:(id)arg2 ;
-(void)_failAllPendingRequests;
-(void)willUpdateExpiredIdentifiers:(id)arg1 ;
-(id)identifiersRequested:(id)arg1 forHandler:(/*^block*/id)arg2 ;
-(void)didResolveItems:(id)arg1 forIdentifiers:(id)arg2 ;
@end

