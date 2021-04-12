/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class REMStore;

@interface REMSmartListsDataView : NSObject {

	REMStore* _store;

}

@property (nonatomic,readonly) REMStore * store;              //@synthesize store=_store - In the implementation block
+(id)smartListsFromSmartListStorages:(id)arg1 store:(id)arg2 ;
-(id)fetchSmartListWithSmartListTag:(id)arg1 reminderIDs:(id)arg2 createIfNeeded:(BOOL)arg3 error:(id*)arg4 ;
-(REMStore *)store;
-(id)initWithStore:(id)arg1 ;
-(id)fetchSmartListWithSmartListTag:(id)arg1 createIfNeeded:(BOOL)arg2 error:(id*)arg3 ;
@end

