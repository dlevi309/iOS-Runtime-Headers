/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
*/


@class ATXHeuristicDevice, REMStore;

@interface ATXRemindersDataSource : NSObject {

	ATXHeuristicDevice* _device;
	REMStore* _store;

}
-(id)initWithDevice:(id)arg1 ;
-(id)_dictionariesFromReminders:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 incompleteRemindersOnly:(BOOL)arg4 ;
-(void)fetchRemindersObjectGraphFromStartDate:(id)arg1 toEndDate:(id)arg2 incompleteRemindersOnly:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_dictionariesFromLists:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 incompleteRemindersOnly:(BOOL)arg4 ;
-(id)_dictionariesFromAccounts:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 incompleteRemindersOnly:(BOOL)arg4 ;
@end

