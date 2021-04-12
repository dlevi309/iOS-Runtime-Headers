/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/


@interface CNUIIDSRequest : NSObject
+(BOOL)isDestinationAvailable:(id)arg1 givenStatusesByDestination:(id)arg2 ;
+(id)IDSServiceForService:(long long)arg1 ;
+(id)validHandlesFromHandles:(id)arg1 ;
+(id)errorRefreshingHandles:(id)arg1 forService:(id)arg2 ;
+(id)refreshStatusOfDestinations:(id)arg1 forService:(id)arg2 queryControllerWrapper:(id)arg3 ;
+(BOOL)shouldRetryRefreshingIDSStatusOfDesinationsGivenResult:(id)arg1 ;
+(id)afterDelayRetryRefreshingStatusOfDestinations:(id)arg1 forService:(id)arg2 queryControllerWrapper:(id)arg3 scheduler:(id)arg4 ;
+(id)resultsForIDSControllerResult:(id)arg1 handlesByDestination:(id)arg2 ;
+(BOOL)isStatusOfEveryDestinationUnknown:(id)arg1 ;
+(id)refreshStatusOfDestinations:(id)arg1 forService:(id)arg2 queryControllerWrapper:(id)arg3 delay:(double)arg4 scheduler:(id)arg5 ;
+(id)IDSResponseQueue;
+(id)validateHandles:(id)arg1 forService:(long long)arg2 scheduler:(id)arg3 queryControllerWrapper:(id)arg4 ;
@end

